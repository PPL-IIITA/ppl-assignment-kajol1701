#include <bits/stdc++.h>
#include "Boy.h"
#include "Girl.h"
#include "Gift.h"

using namespace std;

#define ll long long int

class Couple
{
    public:

    Boy b;
    Girl g;
    vector <Gift> gift;
    double happiness = 0.0;
    ll compatibility = 0;

    Couple()
    {
        b.setStatus(0);
        g.setStatus(0);
    }

    double GirlHappiness()
    {

        double giftPrice = 0.0;
        double giftValue = 0.0;
        double giftModifiedValue = 0.0;
        int i;

        for (i = 0; i < gift.size(); ++i) {
            giftPrice += gift[i].getPrice();
            giftValue += gift[i].getValue();
            giftModifiedValue += gift[i].getModifiedValue();
        }

        if (g.getType() == 0)
            return max(0.0, giftPrice - g.main_cost + giftModifiedValue);
        else if (g.getType() == 1)
            return giftPrice + giftValue;
        else
            return giftValue * log(2.0);
    }

    double BoyHappiness()
    {

        double giftPrice = 0.0;
        double giftValue = 0.0;
        double giftModifiedValue = 0.0;
        int i;

        for (i = 0; i < gift.size(); ++i) {
            giftPrice += gift[i].getPrice();
            giftValue += gift[i].getValue();
            giftModifiedValue += gift[i].getModifiedValue();
        }

        if (b.getType() == 0)
            return max(0.0, b.budget - giftPrice);
        else if (b.getType() == 1)
            return GirlHappiness();
        else
            return g.int_level;
    }

    void CoupleHappiness()
    {
        double girlHappiness = GirlHappiness();
        double boyHappiness = BoyHappiness();

        if (g.getType() == 2)
            happiness = girlHappiness + log(boyHappiness);
        else
            happiness = log(girlHappiness + boyHappiness);
    }

    ll Absolute(ll x)
    {
        return x >= 0 ? x : -x;
    }

    void CoupleCompatibility()
    {
        compatibility = b.budget;
        compatibility -= g.main_cost;
        compatibility += Absolute(b.attract - g.attract);
        compatibility += Absolute(b.int_level - g.int_level);
    }

    void printData()
    {
        b.printData();
        g.printData();
        for(int i = 0; i < gift.size(); ++i)
            gift[i].printData();
        printf("Couple Happiness : %.6lf       Couple Compatibility : %lld\n", happiness, compatibility);
    }

};
