#include <bits/stdc++.h>
#include "AllocateGift.h"

using namespace std;

#define ll long long int

int main()
{
    freopen("Output-Data-1.txt", "w", stdout);

	AllocateGift alloc_gift;
	alloc_gift.allocateGifts();

	for(ll i = 0; i < alloc_gift.commit.couple.size(); ++i) {
		printf("Couple %lld\n", i+1);
		alloc_gift.commit.couple[i].b.printData();
		alloc_gift.commit.couple[i].g.printData();
        puts("");
	}

	return 0;
}
