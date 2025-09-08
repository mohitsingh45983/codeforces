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

        vector<int> arr(size);
        bool closest = true;
        for(int i =0;i<size;i++ )
        {
            cin>>arr[i];
        }
        for(int i =0;i<size-1;i++ )
        {
            if(size == 2 && arr[i+1] != arr[i]+1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
                break;
            }

    }
}
}