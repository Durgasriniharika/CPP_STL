#include<bits/stdc++.h>
using namespace std;
//5.STACK-->stack follows LIFO fashion means last in first out.
 void explainStack()
 {
    stack<int>st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}

    cout<<st.top();//prints 5 "==st[2] is invalid =="
    st.pop();//st looks like {3,3,2,1}
     cout<<st.size();//4
     cout<<st.empty();

     stack<int>st1,st2;
     st1.swap(st2);//for swaping;
}

 int main()
 {
 	explainStack();
 	return 0;
 }