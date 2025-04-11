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

        int sumEven = 0;
        int sumOdd = 0;

        vector<int> arr(size);
        for(int i =0;i<size;i++ )
        {
            cin>>arr[i];
            if(i%2 == 0)
            {
                sumEven += arr[i];
            }
            else
            {
                sumOdd += arr[i];
            }
        }

        cout<<sumEven - sumOdd<<endl;

    }
}