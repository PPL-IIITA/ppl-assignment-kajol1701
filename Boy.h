#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long int

class Boy
{
    public:

    vector <string> typ;
    string name;
    ll attract;
    ll budget;
    ll attract_req;
    ll int_level;
    ll is_single;
    ll type; // index for vector typ

    Boy() {

        typ.pb("Miser");
        typ.pb("Generous");
        typ.pb("Geek");
        is_single = 1;
    }

    ll getAttract()
    {
        return attract;
    }

    ll getBudget()
    {
        return budget;
    }

    ll getIntelligence()
    {
        return int_level;
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

        printf("Budget : ");
        printf("%lld -> ", budget);

        printf("Intelligence Level : ");
        printf("%lld -> ", int_level);

        printf("Attracton Requirement : ");
        printf("%lld -> ", attract_req);

        printf("Type : ");
        printf("%s -> ", typ[type].c_str());

        printf("Status : ");
        is_single ? printf("Single\n") : printf("Committed\n");
    }

};
