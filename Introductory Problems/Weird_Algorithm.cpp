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
	
	cout << n << " ";
	while(n != 1){
		if (n % 2 == 0){
			n /= 2;
		}
		else{
			n = 3 * n + 1;
		}
		cout << n << " ";
	}
	cout << endl;
	return 0;
}

