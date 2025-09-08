#include <bits/stdc++.h>
using namespace std;

int solve(int n,int k,vector<int> arr)
{
    vector<int> b;
    if(n == k)
    {
        for(int i = 1;i<n;i+=2)
        {
            b.push_back(arr[i]);
        }
    }
    else
    {
        int Val = n-k+1;

        for(int i = 1;i<=Val;i++)
        {
           b.push_back(arr[i]);
        }

        for(int i = Val +2;i<n;i+= 2)
        {
           b.push_back(arr[i]);
        }
    }

    b.push_back(0);
    for(int i = 0;i<b.size();i++)
    {
        if(b[i] != i+1) return i+1;
    }
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<solve(n,k,arr)<<endl;
    }
}