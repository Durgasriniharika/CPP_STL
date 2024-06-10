#include<bits/stdc++.h>
using namespace std;
//c++ STL is divided into 4 parts.
//1.Algorithms
//2.Containers
//3.Functions
//4.Iterators.

//Containers along with Iterators

//1.PAIRS is a utility libraries.

void explainPair()
{
	pair<int,int>p={1,2};
	cout<<p.first<<" "<<p.second<<" ";
	pair<int, pair<int,int>>p={1,{3,4}};
	cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<" ";
   pair<int,int>arr[]={{1,2},{3,4},{5,6}};
   cout<<arr[1].second;
}
int main()
{
	explainPair();
	return 0;
}
