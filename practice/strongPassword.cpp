
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        string s;
        cin>>s;

        char ch = '@';
        bool one  =false;
        if(s.length() == 1)
        {
            cout<<ch+s<<endl;
        }
        else
        {
            for(int i = 0;i<s.length()-1;i++)
            {
                if(s[i] == s[i+1] && s[i] != s[i+2])
                {
                    s.insert(i+1,1,ch);
                    one  = true;
                    break;
                }
                else
                {
                    s.insert(i+2,1,ch);
                    one  = true;
                    break;

                }

            }
            if(one == true) cout<<s<<endl;
            else cout<<s+ch<<endl;

        }

    }
}
