#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int zero = 0;
        int one = 0;
        int two = 0;
        int three = 0;
        int five = 0;

        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            if (one >= 1 && two >= 2 && three >= 1 && five >= 1 && zero >= 3)
            {
                ans = i;
                break;
            }

            if (a[i] == 0)
            {
                zero++;
            }

            else if (a[i] == 1)
            {
                one++;
            }

            else if (a[i] == 2)
            {
                two++;
            }

            else if (a[i] == 3)
            {
                three++;
            }

            else if (a[i] == 5)
            {
                five++;
            }
        }

        if (ans == -1 && one >= 1 && two >= 2 && three >= 1 && five >= 1 && zero >= 3)
        {
            ans = n;
        }

        if (ans != -1)
        {
            cout << ans << endl;
        }

        else
        {
            cout << 0 << endl;
        }
    }
}