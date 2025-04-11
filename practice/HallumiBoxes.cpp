#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int size;
        cin >> size;

        int k;
        cin>>k;

        vector<int> arr(size);
        bool sorted = true;
        for(int i = 0;i<size;i++)
        {
            cin>>arr[i];
            if(i > 0 )
            {
                if(arr[i-1]>arr[i])
                {
                    sorted = false;
                }
            }

        }


        if(k ==1 && !sorted)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}