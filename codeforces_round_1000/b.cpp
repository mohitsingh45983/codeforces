
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r;
        cin>>n>>l>>r;

        vector<int> arr(n);
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }

        int sum = accumulate(arr.begin()+l,arr.begin()+r,0);

        for(int i = n/2;i>=0;i++)
        {
            int newSum = 
            for(int j = i-1;j>=0;j--)
            {
                sum -= arr[j];
                sum+= arr[n-j+1];
                sum=  min(sum, )


            }
        }
        
        
        
        
    }
}