#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;

    cin>> t;
    while(t--)
    {
        int n,m,k;
        cin >> n;
        cin >> m;
        cin >> k;

        cout << min(n,k)*min(m,k)<<endl;
    }
}