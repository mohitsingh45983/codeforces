#include<iostream>
#include<map>
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

        int arr[size];
        for(int i = 0;i<size;i++)
        {
            cin>>arr[i];
        }



        map<int,int> count;

        for(int i = 0;i<size;i++)
        {
            count[arr[i]]++;
        }


        int max= 0;

        for(int i = 0;i<count.size();i++)
        {
            if(max < count[i])
            {
                max = count[i];
            }       
        }

        cout << size - max << endl;
    }
}