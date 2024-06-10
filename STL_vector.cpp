#include<bits/stdc++.h>
using namespace std;

//2.Vector
//it is same as array but in array the size was fixed but in vector we can add elements any number of times it will add dynamically.
void explainVector()
{
	vector<int>v;
	v.push_back(1);
	v.emplace_back(3);//it is same as push_back but emplace_back works fast then push_back;
	v.emplace_back(6);

	vector<pair<int,int>>vec;
	vec.push_back({1,2});
	vec.emplace_back(3,4);
    //        size,element  
	vector<int>v{4,200};
    
    vector<int>v{5};//size

    vector<int>v1{5,24};
    vector<int>v2(v1);//copying

    VECTOR ITERATOR;

    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";
    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it1=v.begin();
   vector<int>::iterator it1=v.rend();//reverse elements upto after end and end not included;
    vector<int>::iterator it1=v.rbegin();//reverse elements upto begin and begin also included;
    
    // cout<< v[1]<<" "<<v.at(1)<<" ";
    // cout<<v.back()<<" ";
    for(vector<int>::iterator it2=v.begin();it2 != v.end();it2++)
    {
    	cout<<*(it2)<<" ";
    }
     for(auto it2=v.begin();it2!=v.end();it2++)
     {
     	cout<<*(it2)<<" ";
     }
     for(auto it2:v)
     {
     	cout<<it2<<" ";
     }
     v.erase(v.begin()+2);
     v.erase(v.begin()+2,v.begin()+4);

     //INSERT FUNCTION
     //     2 times insert 100 
     vector<int>{2,100};
     //    at position1,insert 300 
     v.insert(v.begin(),300);
     //    at position2,position3, insert element 100.
     v.insert(v.begin()+1,2, 100);

     vector<int>v{2,50};
     v.insert(v.begin(),copy.begin(),copy.end());// it copies element 50 2 times in the existed array;

     cout<<v.size();//getting size;
     //ex:-{10,20}
     v.pop_back();//to remove the last value.ex:-{10}

     //v1-->{1,2};
     //v2-->{3,4};
     v1.swap(v2);//for swap the elements;// v1-->{3,4}, v2-->{1,2};

     v.clear();// to clear the total array;

     cout<<v.empty();//it array is empty it gives true(1) otherwise false(0);
}
int main()
{
	explainVector();
	return 0;
}