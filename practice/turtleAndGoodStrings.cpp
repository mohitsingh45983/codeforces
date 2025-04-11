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

       if(s[0] == s[size-1])
       {
           cout<<"NO"<<endl;
       }
       else{
           cout <<"YES"<<endl;
       }
        
}