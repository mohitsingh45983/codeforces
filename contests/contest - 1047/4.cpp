#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#define nl '\n'

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> ans(n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }

    int sum = 0;
    int cnt = 1;
    unordered_map<int, int> mpp;

    for (auto it = st.begin(); it != st.end();)
    {
        int val = *it;
        sum += val;
        mpp[val] = cnt;
        cnt++;
        it = st.erase(it); // ✅ correct way
    }

    if (sum != n)
    {
        cout << -1 << nl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ans[i] = mpp[arr[i]];
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
