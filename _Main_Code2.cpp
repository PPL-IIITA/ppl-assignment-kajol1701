#include <bits/stdc++.h>
#include "AllocateGift.h"

using namespace std;

int main()
{
    AllocateGift alloc_gift;
	alloc_gift.allocateGifts();

    freopen("Input-Data-2.txt", "r", stdin);

    int num, i;
    cin >> num;
    num = min(num, (int)alloc_gift.commit.couple.size());

    freopen("Output-Data-2.txt", "w", stdout);

    alloc_gift.commit.SortByHappiness();
    alloc_gift.commit.printMostHappiestCouple(num);

    alloc_gift.commit.SortByCompatibility();
    alloc_gift.commit.printMostCompatibleCouple(num);
}
