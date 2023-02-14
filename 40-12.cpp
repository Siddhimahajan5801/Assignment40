#include<iostream>
using namespace std;
#include<deque>
#include<iterator>
#include<string.h>

int main()
{
    deque <char> q;

    string str;

    cout<<"Enter your string: \n";
    getline(cin,str);

    for (int i=0; i<str.length(); i++)
    {
        if (str[i] != '#')
            q.push_back(str[i]);

        else if (!q.empty())
            q.pop_back();

    }

    cout<<"\nS = ";

    for (auto x : q)
    {
        cout<<x;
    }

    cout<<endl<<endl;

    return 0;

}
