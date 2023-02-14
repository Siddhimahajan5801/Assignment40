#include<iostream>
using namespace std;
#include<deque>
#include<iterator>

int main()
{
    deque <int> dq = {1,2,3,4,5};

    deque <int> :: iterator it;

    cout<<"Reversed Deque = ";

    for (auto it= dq.rbegin(); it!= dq.rend(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;
}



