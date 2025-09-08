#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int even = 0;
        int d = k - 1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }

            if (a[i] % k == 0)
            {
                d = 0;
            }

            else
            {
                d = min(d, k - a[i] % k);
            }
        }

        if (k != 4)
        {
            cout << d << endl;
        }

        else
        {
            if (even >= 2)
            {
                cout << 0 << endl;
            }

            else if (even == 1)
            {
                d = min(d, 1);
                cout << d << endl;
            }

            else
            {
                d = min(d, 2);
                cout << d << endl;
            }
        }
    }
}