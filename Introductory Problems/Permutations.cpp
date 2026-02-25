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
	if(n == 1){
		cout << 1 << endl;
		return 0;
	}
	else if(n <= 3){
		cout << "NO SOLUTION" << endl;
	}
	else{
		for(int i = 2; i <= n; i += 2){
				cout << i << " ";
		}
		for(int i = 1; i <= n; i += 2){
				cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
