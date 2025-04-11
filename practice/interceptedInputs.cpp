#include <iostream>
#include<vector>
#include <algorithm>
#include<unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0;i< n;i++)
        {
            cin>>arr[i];
        }

        int num = n-2;
        sort(arr.begin(),arr.end());

        int left = 0, right = arr.size() - 1;

        while (left < right) 
        {
            int product = arr[left] * arr[right];

            if (product == num)
            {
                break;
            }
            else if (product < num) {
                left++;
            }
            else 
            {
                right--;
            }
        }
        cout<<arr[left]<<" "<<arr[right]<<endl;

    }
}