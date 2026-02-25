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
 
 
const int N = 0;
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	int  len = s.size();
	int scnt = 1, cnt = 1;
	for(int i = 0; i < len-1; i++){
		if(s[i] == s[i+1]){
			cnt++;
		}
		else{
			cnt = 1;
		}
		 scnt = max(scnt,cnt);
	}
	cout << scnt << endl;
	
	return 0;
}
