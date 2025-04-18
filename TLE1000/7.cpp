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
  
/*
    ___        __              __   ______          __        _____ __             __          __  __
   /   | _____/ /___  ______ _/ /  / ____/___  ____/ /__     / ___// /_____ ______/ /______   / / / /__  ________
  / /| |/ ___/ __/ / / / __ `/ /  / /   / __ \/ __  / _ \    \__ \/ __/ __ `/ ___/ __/ ___/  / /_/ / _ \/ ___/ _ \
 / ___ / /__/ /_/ /_/ / /_/ / /  / /___/ /_/ / /_/ /  __/   ___/ / /_/ /_/ / /  / /_(__  )  / __  /  __/ /  /  __/
/_/  |_\___/\__/\__,_/\__,_/_/   \____/\____/\__,_/\___/   /____/\__/\__,_/_/   \__/____/  /_/ /_/\___/_/   \___/
*/
 
 
 
void solve(){
	int n;
	cin>>n;
 
	vi A(n), B(n);
	set<int> elements;
	for(int i=0; i<n; i++){
		cin>>A[i];
		elements.insert(A[i]);
	}
 
	for(int i=0; i<n; i++){
		cin>>B[i];
		elements.insert(B[i]);
	}
 
	map<int,int> mp1, mp2;
	int cnt=1;
	mp1[A[0]] = 1;
	for(int i=1; i<n; i++){
		if(A[i] == A[i-1])
			cnt++;
		else
			cnt = 1;
 
		mp1[A[i]] = max(mp1[A[i]], cnt);
	}
 
	mp2[B[0]] = 1;
	cnt  = 1;
	for(int i=1; i<n; i++){
		if(B[i] == B[i-1])
			cnt++;
		else
			cnt = 1;
 
		mp2[B[i]] = max(mp2[B[i]], cnt);
	}
 
	//for every element, find the longest run
	int ans = 1;
	for(auto e: elements){
		ans = max(ans, mp1[e] + mp2[e]);
	}
	cout<<ans<<nl;
 
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