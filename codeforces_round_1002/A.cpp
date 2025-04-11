#include <bits/stdc++.h>
using namespace std;

string solveCase(int n,vector<int> a,vector<int> b)
{
     unordered_set<int> setA,setB;

        for(int i = 0;i<n;i++)
        {
            setA.insert(a[i]);
            setB.insert(b[i]);
        }

        int Asize = setA.size();
        int Bsize = setB.size();

        if(Asize == 1)
        {
            return (Bsize >= 3)?"YES":"NO";
        }

        if(Bsize == 1)
        {
            return (Asize >= 3)?"YES":"NO";
        }

        return "YES";

}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin>>n;

        vector<int> a(n),b(n),c(n);

        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i = 0;i<n;i++)
        {
            cin>>b[i];
        }

        cout<<solveCase(n,a,b)<<endl;

       
    }
}