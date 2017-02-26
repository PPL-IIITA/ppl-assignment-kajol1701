#include <bits/stdc++.h>
#include "Couple.h"

using namespace std;

#define pb push_back
#define get getchar
#define ll long long int

class ReadData
{
    public:

    vector <Boy> boy;
    vector <Girl> girl;
    vector <Gift> gift;

    string readString()
    {
        string s;
        char ch = get();
        while (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r')
            ch = get();
        while (ch != ' ' && ch != '\n' && ch != '\t' && ch != '\r') {
            s.pb(ch);
            ch = get();
        }
        return s;
    }

    ll readInteger()
    {
        long long int n = 0;
        char ch = get();
        while (ch < '0' || '9' < ch)
            ch = get();
        while ('0' <= ch && ch <= '9') {
            n = (n << 3) + (n << 1) + ch - '0';
            ch = get();
        }
        return n;
    }

    void readDataFromFile()
    {
        freopen("Input-Data-1.txt", "r", stdin);

        int numberOfBoys = readInteger();
        while (numberOfBoys--) {
            Boy tempBoy;
            tempBoy.name = readString();
            tempBoy.attract = readInteger();
            tempBoy.budget = readInteger();
            tempBoy.int_level = readInteger();
            tempBoy.attract_req = readInteger();
            tempBoy.type = readInteger();
            boy.pb(tempBoy);
        }

        int numberOfGirls = readInteger();
        while (numberOfGirls--) {
            Girl tempGirl;
            tempGirl.name = readString();
            tempGirl.attract = readInteger();
            tempGirl.main_cost = readInteger();
            tempGirl.int_level = readInteger();
            tempGirl.choice = readInteger();
            tempGirl.type = readInteger();
            girl.pb(tempGirl);
        }

        int numberOfGifts = readInteger();
        while (numberOfGifts--) {
            Gift tempGift;
            tempGift.type = readInteger();
            switch(tempGift.type)
            {
                case 0: tempGift.e.price = readInteger(); tempGift.e.value = readInteger(); break;
                case 1: tempGift.l.price = readInteger(); tempGift.l.value = readInteger(); tempGift.l.rating = readInteger(); tempGift.l.difficulty = readInteger(); break;
                case 2: tempGift.u.price = readInteger(); tempGift.u.value = readInteger(); tempGift.u.u_value = readInteger(); tempGift.u.u_class = readInteger(); break;
            }
            gift.pb(tempGift);
        }
    }

};
