#include <bits/stdc++.h>
#include "ReadData.h"

using namespace std;

bool compHappiness(Couple a, Couple b)
{
    return a.happiness > b.happiness;
}

bool compCompatibility(Couple a, Couple b)
{
    return a.compatibility > b.compatibility;
}

class Commitment
{
    public:

    vector <Couple> couple;

    void SortByHappiness()
    {
        for (int i = 0; i < couple.size(); ++i)
            couple[i].CoupleHappiness();
        sort(couple.begin(), couple.end(), compHappiness);
    }

    void SortByCompatibility()
    {
        for (int i = 0; i < couple.size(); ++i)
            couple[i].CoupleCompatibility();
        sort(couple.begin(), couple.end(), compCompatibility);
    }

    void printMostHappiestCouple(int k)
    {
        printf("%d Most Happiest Couple ---------------------\n", k);
        for (int i = 0; i < k; ++i) {
            couple[i].b.printData();
            couple[i].g.printData();
            puts("");
        }
    }

    void printMostCompatibleCouple(int k)
    {
        printf("%d Most Compatible Couple ---------------------\n", k);
        for (int i = 0; i < k; ++i) {
            couple[i].b.printData();
            couple[i].g.printData();
            puts("");
        }
    }

    void MakeCommitment(ReadData r)
    {
        int i, j, currentBoy;
        for (i = 0; i < r.girl.size(); ++i) {
            currentBoy = -1;
            for (j = 0; j < r.boy.size(); ++j) {
                if (!r.boy[j].is_single || r.boy[j].getBudget() < r.girl[i].getMaintenanceCost() || r.girl[i].attract < r.boy[j].attract_req)
                    continue;
                switch (currentBoy)
                {
                    case -1: currentBoy = j; break;
                    default:
                        switch(r.girl[i].getChoice())
                        {
                            case 0: r.boy[j].getAttract() > r.boy[currentBoy].getAttract() ? currentBoy = j : currentBoy = currentBoy; break;
                            case 1: r.boy[j].getBudget() > r.boy[currentBoy].getBudget() ? currentBoy = j : currentBoy = currentBoy; break;
                            case 2: r.boy[j].getIntelligence() > r.boy[currentBoy].getIntelligence() ? currentBoy = j : currentBoy = currentBoy; break;
                        }
                }
            }
            switch (currentBoy)
            {
                case -1: break;
                default:
                    r.boy[currentBoy].setStatus(0);
                    r.girl[i].setStatus(0);
                    Couple tempCouple;
                    tempCouple.b = r.boy[currentBoy];
                    tempCouple.g = r.girl[i];
                    couple.pb(tempCouple);
            }
        }
    }

};
