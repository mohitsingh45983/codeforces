
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;

        if(l==r)
        {
            cout<<1<<endl;
        }

        else if(r==l+1)
        {
            cout<<2<<endl;
        }

        else
        {
            int sum=0;
            int ans;
            for(int i =1;;i++)
            {
                sum+=i;
                if(l+sum<=r)
                {
                    ans = i+1;
                }

                else
                {
                    break;
                }
            }

            cout<<ans<<endl;
        }
    }
}