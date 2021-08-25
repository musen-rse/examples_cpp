#include <gmock/gmock.h>

#include "environmentcontroller.h"
#include "hvacspy.h"

class EnvironmentControllerTest : public testing::Test
{
public:
    void SetUp() override
    {
        hvac = new HVACSpy();
        sut = new EnvironmentController(hvac);

        setComfortZone ();
    }

    void TearDown() override
    {
        delete hvac;
        delete sut;
    }

    void setComfortZone()
    {
        sut->setDesiredTemperature(20);
        sut->setTemperatureDelta(3);
    }

    void assertIsIdle()
    {
        ASSERT_FALSE(hvac->isHeating());
        ASSERT_FALSE(hvac->isBlowing());
        ASSERT_FALSE(hvac->isCooling());
    }

    void assertIsCooling()
    {
        ASSERT_FALSE(hvac->isHeating());
        ASSERT_TRUE(hvac->isBlowing());
        ASSERT_TRUE(hvac->isCooling());
    }

    void assertIsHeating()
    {
        ASSERT_TRUE(hvac->isHeating());
        ASSERT_TRUE(hvac->isBlowing());
        ASSERT_FALSE(hvac->isCooling());
    }

    void makeItTooHot()
    {
        hvac->setTemperature(23);
    }

    void makeItTooCold()
    {
        hvac->setTemperature(17);
    }

    void makeItComfortable()
    {
        hvac->setTemperature(20);
    }

    HVACSpy *hvac;
    EnvironmentController *sut;
};

TEST_F(EnvironmentControllerTest, uponConstruction_everythingWillBeOff)
{
    assertIsIdle();
}

TEST_F(EnvironmentControllerTest, whenItsTooHot_itWillStartCooling)
{
    makeItTooHot();
    sut->checkTemperature();
    assertIsCooling();
}

TEST_F(EnvironmentControllerTest, whenItsTooCold_itWillStartHeating)
{
    makeItTooCold();
    sut->checkTemperature();
    assertIsHeating();
}

TEST_F(EnvironmentControllerTest, givenItsCooling_whenItGetsComfortable_itWillBeIdle)
{
    //ARANGE
    makeItTooHot();
    sut->checkTemperature();
    makeItComfortable();

    //ACT
    sut->checkTemperature();

    assertIsIdle();
}