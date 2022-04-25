#include <iostream>
#include <memory>
#include <vector>



struct Ant
{
    virtual void doYourJob() = 0;
};

struct SoldierAnt : public Ant
{
    void doYourJob()
    {
        std::cout << "SoldierAnt is defending the tribe..." << std::endl;
    }
};

struct NurseAnt : public Ant
{
    void doYourJob()
    {
        std::cout << "NurseAnt is feeding the babies..." << std::endl;
    }
};

struct WorkerAnt : public Ant
{
    void doYourJob()
    {
        std::cout << "WorkerAnt is searching for food..." << std::endl;
    }
};

struct QueenAnt : public Ant
{
    public:
    QueenAnt(std::vector<std::shared_ptr<Ant>> ants) : ants(ants) {}

    void doMorningRoutine()
    {
        std::cout << "Queen is doing morning routine..." << std::endl;
        for (auto& ant : ants) {
            ant->doYourJob();
        }
    }

    void doYourJob()
    {
        this->doMorningRoutine();
    }

    private:
    std::vector<std::shared_ptr<Ant>> ants;
};

int main()
{
    std::vector<std::shared_ptr<Ant>> ants;

    ants.push_back(std::make_shared<SoldierAnt>());
    ants.push_back(std::make_shared<WorkerAnt>());
    ants.push_back(std::make_shared<NurseAnt>());

    QueenAnt queen(ants);
    queen.doYourJob();
}