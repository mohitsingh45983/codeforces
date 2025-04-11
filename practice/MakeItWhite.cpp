#include<iostream>
#include<string>
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

        string s;
        cin >> s;

        int fBlack,lBlack;
        for(int i = 0;i<size;i++)
        {
            if(s[i] == 'B')
            {
                fBlack = i;
                break;
            }
        }

        for(int i = size-1;i>=0;i--)
        {
            if(s[i] == 'B')
            {
                lBlack = i;
                break;
            }
        }

        cout<<lBlack-fBlack+1<<endl;

       
       
    }
}