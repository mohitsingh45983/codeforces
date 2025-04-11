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
 
 
 
// void solve(){
//     int n;
//     cin>>n;

//     ll sum2 = 0;
//     int min1 = INT_MAX;
//     int min2 = INT_MAX;
//     for(int i = 0;i<n;i++)
//     {
//         int a;
//         cin >> a;

//         priority_queue<int,vector<int>,greater<int>> pq;

//         for(int j = 0;j<a;j++)
//         {
//             int num;
//             cin>>num;
//             pq.push(num);
//         }

//         int num = pq.top();
//         pq.pop();
//         min1 = min(min1,num);

//         int number = pq.top();
//         pq.pop();
//         sum2 += number*1LL;
//         min2 = min(min2,number);
//     }
//     cout<<min1 + sum2 -min2 <<nl;
// }

void solve(){
	//Maximum Beauty = Sum(2nd min) - Min(2nd min) + Minimum
	int n;
	cin>>n;
 
	int mini = INT_MAX;
	vi min_2;
	for(int i=0; i<n; i++){
		int m;//size of this array
		cin>>m;
 
		vi arr(m);
		for(int i=0; i<m; i++)cin>>arr[i];
 
		int min_el = *min_element(all(arr));
		mini = min(min_el, mini);
 
		arr.erase(find(all(arr), min_el));
 
		min_2.pb(*min_element(all(arr)));
 
	}
	ll beauty = mini + accumulate(all(min_2), 0LL) - *min_element(all(min_2));
	cout<<beauty<<nl;
 
 
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