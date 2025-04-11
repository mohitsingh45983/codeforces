#include <bits/stdc++.h>
using namespace std;

int main() {
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

        sort(arr.begin() ,arr.end());

        int score = 0;
        int i = 0,j = arr.size() -1;
        while(i<j)
        {
            if(arr[i] + arr[j] == k) 
            {
                score++;
                i++;
                j--;
            }
            else if(arr[i] + arr[j] <  k) i++;
            else j--;
        }
        cout<<score<<endl;


    }
}