#include<bits/stdc++.h>
using namespace std;
//3.LIST
 void explainList()
 {
 	list<int>ls;
 	ls.push_back(2);//{2}
 	ls.emplace_back(4);//{2,4};
 	ls.push_front(5);//{5,2,4};//in vector there is no function to print the element in front and we can write lengthy code in vector but it is simple to write code in list that is the difference. and list has less time and space complexity.
 	ls.emplace_front();//{2,4};
 	for(auto it:ls)
 	{
 		cout<<it<<" ";
 	}
 	//rest functions same as vector
 	//begin,end,rbegin,rend,clear,insert,size,swap.

 }
 int main()
 {
 	explainList();
 	return 0;
 }