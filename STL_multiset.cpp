#include<bits/stdc++.h>
using namespace std;
//9.MULTISET
//-->it will stores elements it sorted order but not unique.it stores duplicate elements also.remaining all is same as set.
void explainMultiset()
{
   multiset<int>ms;
   ms.insert(1);//{1}
   ms.insert(1);//{1,1}
   ms.insert(1);//{1,1,1}
   ms.erase(1);//all 1's erased;
    int cnt=ms.count(1);

   //for only single one erased;
    ms.erase(ms.find(1));
    ms.erase(ms.find(1),ms.find(1)+2);

     //rest all functions same as set;
}
int main()
{
	explainMultiset();
   return 0;
	
}