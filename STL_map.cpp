#include<bits/stdc++.h>
using namespace std;
//11.MAP
// it stores elements in sorted order of key.
void explainMap()
{
	map<int,int>mp;
	map<int, pair<int,int> int>,mp;
	mp.emplace({1,2});
	mp.insert({2,4});
	map<pair<int,int>, int>mp;
	//key in pair =value
	mp({2,3})=10;
            //key,value
	mp[1]=2;//{1,2}//here 1 is key and value is 2;
	for(auto it:mp)
	{
		//       key            value
		cout<<it.first<<" "<<it.second<<endl;
	}
	cout<<mp[1];//value 2
	cout<<mp[5];//it prints 0 because 5 is not present in map;
	//iterator
	//{{1,2}}
	auto it=mp.first(1);//key
	cout<<*(it).second;//prints value 2.

	auto it=mp.first(5);//the value is not present then it indicated mp.end() that means after the end element;

	//this is the system
	auto it=mp.lower_bound(2);
	auto it=mp.upper_bound(4);

	//erase,swap,size,empty are same as above.

}
int main()
{
	explainMap();
	return 0;
}