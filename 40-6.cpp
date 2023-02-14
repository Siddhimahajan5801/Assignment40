#include<iostream>
using namespace std;
#include<deque>
#include<iterator>

int main()
{
    deque <int> dq1 = {1,2,3,4,5};

    deque <int> :: iterator it;

    deque <int> dq2;
    dq2.assign(dq1.begin(), dq1.end());

    cout<<"Deque-1 : ";

    for (it= dq1.begin(); it!= dq1.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl<<"Deque-2 : ";

    for (it= dq2.begin(); it!= dq2.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;


    return 0;
}
