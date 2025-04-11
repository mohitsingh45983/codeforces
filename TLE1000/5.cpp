#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
 
// // find_by_order, order_of_key: 0 indexed
// typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
 
// Add the necessary include paths to the compiler flags
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
 
#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)
 
// Control Flow
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
// #define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
 
// Types
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
 
// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
 
// Constants
const ll MOD = 1e9 + 7;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// Helper Functions
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
ll getRandomNumber(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rng); }
ll nCk(ll n, ll k)
{
	ll res = 1;
	for (ll i = 0; i < k; i++)
	{
		res = res * (n - i);
		res = res / (i + 1);
	}
	return res;
}
 
/*----------------------------------------------------------------------------*/
struct Compare {
    // Comparator for pairs
    bool operator()(const std::pair<int, int>& lhs, const std::pair<int, int>& rhs) {
        // If the first elements are equal, compare based on the second element (smaller second element should come first)
        if (lhs.first == rhs.first) {
            return lhs.second > rhs.second;
        }
        // Otherwise, compare based on the first element (larger first element should come first)
        return lhs.first < rhs.first;
    }
}; 
 
 
// void solve(){
//     int n,k;
//     cin>>n>>k;

//     vi ans;
//     std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, Compare> maxHeap;
//     F0R(i,n) 
//     {
//         int a;
//         cin>>a;

//         maxHeap.push({a,i+1});// val,index
//     }

//     while(!maxHeap.empty())
//     {
//         auto topVal = maxHeap.top();
//         maxHeap.pop();
//         int val = topVal.first - k;
//         if(val > 0)
//         {
//             maxHeap.push({val,topVal.second});
//         }
//         else{
//             ans.push_back(topVal.second);
//         }
//     }

//     for(auto& it:ans)
//     {
//         cout<<it<<" ";
//     } cout<<nl;

// }

void solve()
{
    int n,k;
    cin>>n>>k;

    vi arr(n);
    F0R(i,n) cin>>arr[i];

    vii HP_idx;
    //arr[i] %k
    F0R(i,n)
    {
        if(arr[i] % k == 0)
        {
            HP_idx.pb({k,-i});
        }
        else HP_idx.pb({arr[i] % k,-i });
    }

    sort(all(HP_idx));

    for(int i = n-1;i>=0;i--)
    {
        cout<< abs(HP_idx[i].second )  + 1<<sp;
    }
    cout<<nl;
}
 
/*
 
 
 
*/
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
     
	int t = 1;
	cin >> t;
	while (t--){
		solve();
	}
	
}