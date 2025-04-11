#include <bits/stdc++.h>
using namespace std;

int soln(int b1, int b2, int a3, int b4, int b5)
{
    int ans = 0;
    if (a3 == b1 + b2) ans++;

    if (b4 == b2 + a3) ans++;

    if (b5 == a3 + b4) ans++;

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b1, b2, b4, b5;
        cin >> b1 >> b2 >> b4 >> b5;

        int x = b1 + b2;
        int y = b4 - b2;
        int z = b5 + b4;

        int maxi = 0;

        int op1 = soln(b1, b2, x, b4, b5);
        int op2 = soln(b1, b2, y, b4, b5);
        int op3 = soln(b1, b2, z, b4, b5);

        cout <<  max(op1, max(op2, op3)) << endl;
    }
    return 0;
}