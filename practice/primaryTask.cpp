#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int size = s.size();
        if(size<3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(s[0] == '1' && s[1] == '0')
            {
                if((size == 3 && s[2] > '1') || (size > 3 && s[2] > '0'))
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }

            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }



}