#include <bits/stdc++.h>
#include "Essential.h"
#include "Luxury.h"
#include "Utility.h"

#define ll long long int

class Gift
{
    public:

    ll type; // 0 for Essential 1 for Luxury 2 Utility
    Essential e;
    Luxury l;
    Utility u;

    ll getType()
    {
        return type;
    }

    double getPrice()
    {
        return e.price + l.price + u.price;
    }

    double getValue()
    {
        return e.value + l.value + u.value;
    }

    double getModifiedValue()
    {
        return e.value + 2.0*l.value + u.value;
    }

    void printData()
    {
        switch(type)
        {
            case 0: puts("Essential Gift"); e.printData(); break;
            case 1: puts("Luxury Gift"); l.printData(); break;
            case 2: puts("Utility Gift"); u.printData(); break;
        }
    }
};
