#include<iostream>
using namespace std;
#include<deque>
#include<iterator>

int main()
{
    deque <int> dq ;

    cout<<"Maximum number of elements that a deque container can hold is = "<<dq.max_size()<<endl<<endl;

    return 0;
}
