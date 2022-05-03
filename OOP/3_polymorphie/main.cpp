#include <iostream>
#include <memory>
#include <vector>

class Ant;

using AntPr = std::shared_ptr<Ant>;
using AntList = std::vector<AntPr>;

class Ant
{
public:
    virtual void doYourJob() = 0;
};

class SoldierAnt : public Ant
{
public:
    void doYourJob()
    {
        std::cout << "SoldierAnt is defending the tribe..." << std::endl;
    }
};

class NurseAnt : public Ant
{
public:
    void doYourJob()
    {
        std::cout << "NurseAnt is feeding the babies..." << std::endl;
    }
};

class WorkerAnt : public Ant
{
public:
    void doYourJob()
    {
        std::cout << "WorkerAnt is searching for food..." << std::endl;
    }
};

class QueenAnt : public Ant
{
public:
    QueenAnt(AntList& ants) : ants(ants) {}

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
    AntList& ants;
};


int main()
{
    AntList ants;

    ants.push_back(std::make_shared<SoldierAnt>());
    ants.push_back(std::make_shared<WorkerAnt>());
    ants.push_back(std::make_shared<NurseAnt>());
    // ants.push_back(new WorkerAnt());
    // ants.push_back(new NurseAnt());

    QueenAnt queen(ants);

    // only works when lists is passed as a reference to QueenAnt
    ants.push_back(std::make_shared<WorkerAnt>());

    queen.doYourJob();


    return 0;
}
