#include<iostream>
using namespace std;
#include<deque>
#include<iterator>

int main()
{
    deque <int> dq = {1,2,3,4,5};

    deque <int> dq2 = {1,5,6,3,7,5,6,4,2};

    deque <int> :: const_iterator it;
    it=dq.begin();
    it++;

    dq.erase(it); //erased from 2nd position in dq


    cout<<"Deque-1 : ";

    for (it= dq.begin(); it!= dq.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl<<endl;

    it=dq2.begin();
    it++;
    it++;
    dq2.erase(it,it+4);  //removing 6,3,7,5 from dq-2

    cout<<"Deque-2 : ";

    for (it= dq2.begin(); it!= dq2.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;
}
