#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        map<int,bool> occupied;
        int arr[n];
        bool ans = true;
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }


        for(int i = 0;i<n;i++)
        {
            if(i == 0)
            {
                occupied[arr[i]] = true;
            }
            else
            {
                if(occupied[(arr[i])-1] == true|| occupied[(arr[i])+1] == true)
                {
                    occupied[arr[i]] = true;
                }
                else
                {
                ans = false;
                break;
                }
            }
        }
      

      if(ans)
      {
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }

    }
}


