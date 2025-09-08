#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n <= 4)
        {
            cout << -1 << endl;
        }

        else
        {

            vector<int> numOdd, numEven;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    numEven.push_back(i);
                }
                else
                {
                    numOdd.push_back(i);
                }
            }

            for (int i = 0; i < numEven.size(); i++)
            {
                if (numEven[i] == 4)
                {
                    swap(numEven[i], numEven[numEven.size() - 1]);
                    break;
                }
            }
            for (int i = 0; i < numOdd.size(); i++)
            {
                if (numOdd[i] == 5)
                {
                    swap(numOdd[i], numOdd[0]);
                    break;
                }
            }
            for (int i = 0; i < numEven.size(); i++)
            {
                cout << numEven[i] << " ";
            }
            for (int i = 0; i < numOdd.size(); i++)
            {
                cout << numOdd[i] << " ";
            }
            cout << endl;
        }
    }
}