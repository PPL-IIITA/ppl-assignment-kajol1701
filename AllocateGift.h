#include <bits/stdc++.h>
#include "Commitment.h"

using namespace std;

#define ll long long int
#define pb push_back

class AllocateGift
{
    public:

    Commitment commit;
    ReadData rdata;

    void allocateGifts()
    {
        rdata.readDataFromFile();
        commit.MakeCommitment(rdata);

        ll i, j, cost;
        for (i = 0; i < commit.couple.size(); ++i) {
            cost = 0;
            for (j = 0; j < rdata.gift.size(); ++j) {
                cost += rdata.gift[j].getPrice();
                switch (commit.couple[i].b.type)
                {
                    case 0: if (cost > commit.couple[i].g.getMaintenanceCost()) { goto l1; }; break;
                    case 1: if (cost > commit.couple[i].b.getBudget()) { goto l1; }; break;
                    case 2: if (cost > commit.couple[i].g.getMaintenanceCost()) { goto l1; }; break;
                }
                commit.couple[i].gift.pb(rdata.gift[j]);
            }
            l1: ;
            for ( ; j < rdata.gift.size() && cost < commit.couple[i].g.getMaintenanceCost(); ++j) {
                cost += rdata.gift[j].getPrice();
                if (cost > commit.couple[i].g.getMaintenanceCost())
                    break;
                commit.couple[i].gift.pb(rdata.gift[j]);
            }
            for ( ; j < rdata.gift.size() && commit.couple[i].b.getType() == 1 && cost < commit.couple[i].b.getBudget(); ++j) {
                if (rdata.gift[j].getType() != 1)
                    continue;
                if (cost + rdata.gift[j].getPrice() < commit.couple[i].b.getBudget()) {
                    commit.couple[i].gift.pb(rdata.gift[j]);
                }
            }
        }
    }

};
