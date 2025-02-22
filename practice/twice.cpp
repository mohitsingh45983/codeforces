#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if (n == 1)
        {
            cout << 0 << endl;
        }

        else
        {
            int ans = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] == v[i + 1])
                {
                    ans++;
                    i++;
                }
            }

            cout << ans << endl;
        }
    }
}