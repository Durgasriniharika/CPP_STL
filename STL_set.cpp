#include<bits/stdc++.h>
using namespace std;
//8.SET
//-->it stores elements in sorted order and unique values if the elements are repeated it will takes only one time.
void explainSet()
{
	set<int>s;
	s.insert(1);//{1}
	s.emplace(2);//{1,2}
	s.insert(2);//{1,2}
	s.insert(3);//{1,2,3}
	s.insert(4);//{1,2,3,4}

	//Functionality of insert in vector can be used else,that only increases efficiency;

	//begin(),end,rbegin,rend,size,empty,swap are same as those of above.

	//{1,2,3,4}
	auto it=s.find(3);//iterator
	 //{1,2,3,4}
	auto it=s.find(6);//it prints 0 or garbage value because we give after end value.
	s.erase(2);//erases 2//takes logarithmic time(log n);
	int cnt=s.count(2);//it gives count of 2 value
	auto it=s.find(1);
	s.erase(it);//it takes constant time(o(n));

	//{1,2,3,4}
	auto it1=s.find(2);
	auto it2=s.find(3);
	s.erase(it1,it2);//after erase {1,4} {first,last};

	//lower_bound() and upper_bound() works in the same way as like in vector;

	//this is the system
	auto it=s.lower_bound(2);
	auto it=s.upper_bound(3);
}
int main()
{
	explainSet();
	return 0;
}