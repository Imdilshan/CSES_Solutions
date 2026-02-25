/* Author -> highfive */
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
#define pb push_back
#define mp make_pair
#define int long long
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
 
using v = vector<int>;
using pr = pair<int,int>;
using vpr = vector<pr>;
using mp = map<int,int>;
using um = unordered_map<int,int>;
using us = unordered_set<int>;
using st = set<int>;
using pq = priority_queue<int>;
using mt = multiset<int>;
using dq = deque<int>;
 
int binpow(int a, int b, int m){
	if (b == 0){
		return 1;
	}
	if (b % 2 == 0){
		int res = binpow(a, b / 2, m); 
		return (res * res % m);
	}
	else{
		int res = binpow(a, (b-1) / 2,m);
		res = (res * res) % m;
		return (a * res) % m;
	}
}
 
int inverse(int x, int m){
	return binpow(x, m-2, m);
}
 
const int N = 1000000007;
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a = 2;
	int n;
	cin >> n;
	int res = binpow(a,n,N);
	cout << res << endl;
	
	return 0;
}
