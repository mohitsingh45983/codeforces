#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> arr(n, vector<int>(m));
        int ans = 0;

        // Input the 2D array
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        // sort arrays 
        for (int i = 0; i < n; i++)
        {
            sort(arr[i].begin(), arr[i].end());
        }

        // Check if any element in the row is mini1 + 1
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m-1; j++) {
                if (arr[i][j] + n != arr[i][j+1]) {
                    ans = -1;
                    break;  // Stop checking the current row
                }
            }
            if (ans == -1) break;  // Exit if condition is met
        }

        if (ans != -1) {
            // Vector to store the minimum of each row
            vector<int> mini(n);

            // Find the minimum of each row
            for (int i = 0; i < n; i++) {
                mini[i] =arr[i][0];
            }

            // Output the index of minimum elements from the mini vector
            for (int i = 0; i < n; i++) {
                auto minElementIter = min_element(mini.begin(), mini.end());

                // Calculate the index of the minimum element
                int minIndex = distance(mini.begin(), minElementIter);

                cout << minIndex + 1 << " ";  // Output the row number (1-based index)
                
                // Set the current minimum to a large value so it's not picked again
                mini[minIndex] = INT_MAX;
            }

            cout << endl;
        } else {
            cout << ans << endl;  // Output -1 if condition is met
        }
    }
    return 0;
}
