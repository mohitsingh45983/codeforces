#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int xk, yk;
        cin>>xk>>yk;

        int xq, yq;
        cin>>xq>>yq;


        vector<pair<int, int>>directions = {{a,b}, {a, -b}, {-a, b}, {-a, -b},
                            {b,a}, {b, -a}, {-b, a}, {-b, -a}};

        //Attacking positions for king, queen
        set<pair<int, int>> st1, st2;
        for(auto d: directions){
            int x = xk + d.first;
            int y = yk + d.second;
            st1.insert({x,y});

            x = xq + d.first;
            y = yq + d.second;
            st2.insert({x,y});
        }
        
        int ans = 0;
        //Attacking positions for queen
        for(auto pos: st1){

            if(st2.find(pos) != st2.end())
                ans++;
        }
        cout<<ans<<endl;

    }
    }