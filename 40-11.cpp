#include<iostream>
using namespace std;
#include<deque>
#include<iterator>

int main()
{
    deque <int> dq = {1,2,3,4,5};

    cout<<"1st element = "<<dq.front()<<endl<<endl;

    cout<<"Last element = "<<dq.back()<<endl<<endl;

    return 0;
}
