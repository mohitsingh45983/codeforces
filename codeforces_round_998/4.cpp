#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (is_sorted(arr, arr + n)) {
            cout << "YES" << endl;
        } else if (is_sorted(arr, arr + n, greater<int>())) {
            cout << "NO" << endl;
        } else {
            vector<int> v;
            for (int i = 0; i < n; i++) {
                v.push_back(arr[i]);
            }
            for (int i = 1; i < n; i++) {
                int x = min(v[i], v[i - 1]);
                v[i] = v[i] - x;
                v[i - 1] = v[i - 1] - x;
            }
            bool sorted = is_sorted(v.begin(), v.end());
            if (sorted) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}