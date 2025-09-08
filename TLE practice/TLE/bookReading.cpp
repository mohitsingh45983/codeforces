#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int A[n];


    for(int i = 0;i<n;i++)
    {
        cin>>A[i];
    }

    int ans = 0;

    for(int i = 0;i<n;i++)
    {
        int availTime = 86400 - A[i];

        if(availTime >= t)
        {
           ans = i+1;
           break;
        }

        else
        {
            t -= (86400 -A[i]);
        }
       
    }
    cout<<ans;
}
