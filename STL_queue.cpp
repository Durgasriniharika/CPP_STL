#include<bits/stdc++.h>
using namespace std;
//6.QUEUE
//-->it follows FIFO fashion means first in first out;
void explainQueue()
{
   queue<int>q;
   q.push(1);//{1}
   q.push(2);//{1,2}
   q.emplace(3);//{1,2,3}
    // q.back() == 5;
    // cout<<q.back();//prints 5

    //q is {1,2,3}
    //cout<<q.front();//prints 1
    q.pop();//{2,3}

    cout<<q.front();//prints 2;

    //size,swap,empty same as stack;

}
int main()
{
	explainQueue();
	return 0;
}