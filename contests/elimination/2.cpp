#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int cnt = 0;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (__gcd(arr[i][j], k) != 1)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}