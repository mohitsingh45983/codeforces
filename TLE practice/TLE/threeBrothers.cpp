#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int sum = 0;
        vector<int> arr(2);
        for(int i =0;i<2;i++ )
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        cout<<6-sum;


}
