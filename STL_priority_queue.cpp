#include<bits/stdc++.h>
using namespace std;
//7.PRIORITY QUEUE
//-->the element which is large that element prints first;

void explainPriorityQueue()
{
	//Max heap
	// priority_queue<int>pq;
	// pq.push(5);//{5}
	// pq.push(2);//{5,2}
	// pq.push(1);//{5,2,1}
	// pq.emplace(13);//{13,5,2,1}
	// cout<<pq.top();//prints 13
	// pq.pop();//{5,2,1}
	// cout<<pq.top();//prints 5

	//size,swap,empty functions same as others.

	//Min heap
	priority_queue<int, vector<int>, greater<int>> pq;//to prints the small elements first.//greater is a inbuilt function.
	 pq.push(9);//{9}
	pq.push(4);//{4,9}
	pq.push(8);//{4,8,9}
	pq.emplace(69);//{4,8,9,69}
	cout<<pq.top();//prints 4

}
int main()
{
     explainPriorityQueue();
     return 0;
}
