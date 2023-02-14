#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void permutations(int N , int K)
{
    if (N>K)
    {

    deque <int> dq;

    for (int i=1; i<=N; i++)
    {
        dq.push_back(i);
    }

    vector <int> ans;

    int flag=1;

    while(K>1)
    {
        if (flag == 1)
        {
            ans.push_back(dq.front());
            dq.pop_front();
            flag=0;
        }

        if (flag == 0)
        {
            ans.push_back(dq.back());
            dq.pop_back();
            flag=1;
        }

        K--;
    }

    while(dq.empty()== false)
    {
        ans.push_back(dq.front());
        dq.pop_front();
    }


   for (auto x : ans)
   {
       cout<<x<<"  ";
   }

}
   else
    cout<<"K can't be greater then N\nEnter again! ";
}

int main()
{
    int n,k;

    cout<<"Enter the value of N : ";
    cin>>n;
    cout<<"Enter the value of K : ";
    cin>>k;

    cout<<"\nThe output is : ";
    permutations(n,k);
    cout<<endl;

    return 0;
}
