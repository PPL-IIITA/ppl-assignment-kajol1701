#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main()
{
    freopen("Input-Data-1.txt", "w", stdout);
    srand(time(0));

    vector <string> boys;
    boys.pb("B1");
    boys.pb("B2");
    boys.pb("B3");
    boys.pb("B4");
    boys.pb("B5");
    boys.pb("B6");
    boys.pb("B7");
    boys.pb("B8");
    boys.pb("B9");
    boys.pb("B10");
    boys.pb("B11");
    boys.pb("B12");
    boys.pb("B13");
    boys.pb("B14");
    boys.pb("B15");

    vector <string> girls;
    girls.pb("G1");
    girls.pb("G2");
    girls.pb("G3");
    girls.pb("G4");
    girls.pb("G5");
    girls.pb("G6");
    girls.pb("G7");
    girls.pb("G8");
    girls.pb("G9");
    girls.pb("G10");
    girls.pb("G11");
    girls.pb("G12");
    girls.pb("G13");
    girls.pb("G14");
    girls.pb("G15");

    int tmp, boysCount = min(rand()%25+5, (int)boys.size());
    cout << boysCount << endl;
    while (boysCount--) {
        tmp = rand()%boys.size();
        cout << boys[tmp] << " " << rand()%100+1 << " " << rand()%100+1 << " " << rand()%100+1 << " " << rand()%100+1 << " " << rand()%3 << endl;
        boys.erase(boys.begin()+tmp);
    }

    int girlsCount = min(rand()%25+5, (int)girls.size());
    cout << girlsCount << endl;
    while (girlsCount--) {
        tmp = rand()%girls.size();
        cout << girls[tmp] << " " << rand()%100+1 << " " << rand()%100+1 << " " << rand()%100+1 << " " << rand()%3 << " " << rand()%3 << endl;
        girls.erase(girls.begin()+tmp);
    }

    int giftsCount = rand()%20+15;
    vector <int> giftsPrice;
    cout << giftsCount << endl;
    while (giftsCount--)
        giftsPrice.pb(rand()%100+25);
    sort(giftsPrice.begin(), giftsPrice.end());
    for (int i = 0; i < giftsPrice.size(); ++i) {
        tmp = rand()%3;
        cout << giftsPrice[i] << " " << rand()%100+1 << " ";
        if (!tmp)
            cout << endl;
        else
            cout << rand()%100+1 << " " << rand()%100+1 << endl;
    }
    return 0;
}
