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
 
const int N = 0;
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		int ways = (pow(i,4) - pow(i,2)) / 2;
		int attack = 2 * 2 * (i-1) * (i-2);
		cout << ways - attack << endl;
	}
	return 0;
}
