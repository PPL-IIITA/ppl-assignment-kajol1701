#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long int

class Girl
{
    public:

    vector <string> typ;
    vector <string> chc;
    string name;
    ll attract;
    ll main_cost;
    ll int_level;
    ll is_single;
    ll choice; // index for vector chc
    ll type;  // index for vector typ

    Girl() {

        typ.pb("Choosy");
        typ.pb("Normal");
        typ.pb("Desperate");
        chc.pb("Most Attractive");
        chc.pb("Most Rich");
        chc.pb("Most Intelligent");
        is_single = 1;
    }

    ll getMaintenanceCost()
    {
        return main_cost;
    }

    ll getChoice()
    {
        return choice;
    }

    ll getType()
    {
        return type;
    }

    void setStatus(ll status)
    {
        is_single = status;
    }

    void printData() {

        printf("Name : ");
        printf("%s -> ", name.c_str());

        printf("Attractiveness : ");
        printf("%lld -> ", attract);

        printf("Maintenance Cost : ");
        printf("%lld -> ", main_cost);

        printf("Intelligence Level : ");
        printf("%lld -> ", int_level);

        printf("Choosing criteria : ");
        printf("%s -> ", chc[choice].c_str());

        printf("Type : ");
        printf("%s -> ", typ[type].c_str());

        printf("Status : ");
        is_single ? printf("Single\n") : printf("Committed\n");
    }

};
