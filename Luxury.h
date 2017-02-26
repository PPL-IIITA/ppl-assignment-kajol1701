#include <bits/stdc++.h>

using namespace std;

#define ll long long int

class Luxury
{
	public:

    ll price = 0, value = 0, rating = 0, difficulty = 0;

    void printData()
    {
        printf("%lld ", price);
        printf("%lld ", value);
        printf("%lld ", rating);
        printf("%lld\n", difficulty);
    }
};
