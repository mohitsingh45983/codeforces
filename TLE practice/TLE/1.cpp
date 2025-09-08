

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;

        // Initialize 2D vector with size (2 x n)
        vector<vector<int>> arr(n, vector<int>(2));

        // Reading input into the 2D vector
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> arr[i][j];  // Correct index for reading input
            }
        }

        // Initialize `maxDiff` with the difference of the first pair
        bool shower = false;
        
        int diff = arr[0][0] ;
        int maxDiff = diff;
        
        if((maxDiff == s) || (m - arr[n-1][1] == s))
        {
            shower = true;
        }
        else
        {
                for (int i = 0; i < n-1; i++) 
                {
                    diff =  arr[i+1][0] - arr[i][1];
                    maxDiff = max(diff, maxDiff);
                    
                    if (maxDiff == s)
                    {
                      shower = true;
                      break;
                    }
                }
        }
        

        
        if(shower)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
