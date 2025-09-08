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

        int endPoint;
        cin>>endPoint;

        vector<int> arr(size);

        int volume = 0;
        int maxVolume = -1;

        for(int i = 0;i<size;i++)
        {
            cin>>arr[i];
            if(i == 0)
            {
                volume  = arr[0];
                maxVolume = volume;
            }
            else
            {
                volume = arr[i] - arr[i-1];
                maxVolume = max(volume,maxVolume);
            }
        }

        volume = 2*(endPoint - arr[size-1]);
        maxVolume = max(volume,maxVolume);

        cout<<maxVolume<<endl;


    }

}