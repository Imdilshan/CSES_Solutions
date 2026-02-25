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
	
	int ar[n], cnt = 0;
	for(int i = 0; i < n; i++){
		cin >> ar[i];
	}
	for(int i = 0; i < n-1; i++){
		if(ar[i] > ar[i+1]){
			cnt += (ar[i] - ar[i+1]);
			ar[i+1] = ar[i];
		}
	}
	
	cout << cnt << endl;
	return 0;
}
