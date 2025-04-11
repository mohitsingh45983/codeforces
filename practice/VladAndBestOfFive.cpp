#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int  isA = 0,isB = 0;
        string s;;
        for(int i = 0;i<5;i++)
        {
            cin>>s[i];
            if(s[i] =='A')
            {
                isA++;
            }
            else
            {
                isB++;
            }
        }

        if(isA>isB)
        {
            cout<<'A'<<endl;
        }
        else
        {
            cout<<'B'<<endl;
        }
    }
}