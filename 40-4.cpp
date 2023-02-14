#include<iostream>
using namespace std;
#include<deque>
#include<iterator>

int main()
{
    deque <int> dq = {1,2,3,4,5};

    deque <int> :: const_iterator it;

    cout<<"Deque : ";

    for (it= dq.begin(); it!= dq.end(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;
}
