#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int Equal(string s1, string s2)
{
    int size1 = s1.size();
    int size2 = s2.size();

    if (size1 == size2)
    {
        if (s1==s2)
            return 1;
        else
            return 0;
    }

    deque <char> dq1,dq2;

    for(int i=0; i<s1.size(); i++)
    {
        dq1.push_back(s1[i]);
    }
    for(int i=0; i<s2.size(); i++)
    {
        dq2.push_back(s2[i]);
    }

    while (dq1.size()>0 && dq2.size()>0 && dq1.front()==dq2.front())
    {
        dq1.pop_front();
        dq2.pop_front();
    }

     while (dq1.size()>0 && dq2.size()>0 && dq1.back()==dq2.back())
    {
        dq1.pop_back();
        dq2.pop_back();
    }

    if (dq1.empty() == true || dq2.empty()== true)
        return 2;

    else
        return 0;
}

int main ()
{
    string s1,s2;

    cout<<"Enter string 1 : ";
    getline(cin, s1);

    cout<<"Enter string 2 : ";
    getline(cin, s2);
    cout<<endl;

    int k = Equal(s1,s2);

    if (k==2)
        cout<<"The strings can be made equal by inserting another string ! \n";

    else if (k==1)
        cout<<"The strings are equal !\n";

    else
        cout<<"The string can't be made equal !\n";

    return 0;
}
