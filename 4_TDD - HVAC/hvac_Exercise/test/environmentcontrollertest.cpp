#include <gmock/gmock.h>
#include "environmentcontroller.h"
#include "hvacspy.h"

class EnvironmentControllerTest : public testing::Test {
    public:
    virtual void SetUp() override {
        hvac = new HVACSpy();
        sut = new EnvironmentController(hvac);

        sut->setDesiredTemperature(20);
        sut->setTemperatureDelta(3);
    }

    virtual void TearDown() override {
        delete hvac;
        delete sut;
    }

    void assertEverythingIsOff()
    {
        ASSERT_FALSE(hvac->isCooling());
        ASSERT_FALSE(hvac->isHeating());
        ASSERT_FALSE(hvac->isBlowing());
    }

    void assertIsCooling()
    {
        ASSERT_TRUE(hvac->isCooling());
        ASSERT_FALSE(hvac->isHeating());
        ASSERT_TRUE(hvac->isBlowing());
    }

    void assertIsHeating()
    {
        ASSERT_FALSE(hvac->isCooling());
        ASSERT_TRUE(hvac->isHeating());
        ASSERT_TRUE(hvac->isBlowing());
    }

    void makeItTooHot ()
    {
        hvac->setTemperature(23); // this is the edge case
    }

    void makeItTooCold()
    {
        hvac->setTemperature(17); // this is the edge case
    }

    void makeItComfortable()
    {
        hvac->setTemperature(22); // this is the edge case
    }

    HVACSpy* hvac;
    EnvironmentController* sut;
};

TEST_F(EnvironmentControllerTest, whenInitiated_everythingWillBeOff)
{
    assertEverythingIsOff();
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

TEST_F(EnvironmentControllerTest, givenItsHeating_whenItsGettingComfortable_ItWillBeIdle)
{
    //ARRANGE
    makeItTooCold();
    sut->checkTemperature();
    makeItComfortable();

    // ACT
    sut->checkTemperature();

    assertEverythingIsOff();
}
