/* Author -> highfive */
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef long double ld;
 
#define pb push_back
#define mp make_pair
#define int long long
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
 
const int N = 1000000007;
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, sum;
	cin >> n;
	int cnt = n;
	sum = n * (n+1) / 2;
	int res = sum % 2;
	
	if(res){
		no;
		return 0;
	}
	else {
		yes;
		
		vector <int> v1, v2;
		int sum1 = 0;
		
		for(int i = n; i > 0; i--){
			if(sum1 + i <= sum/2){
				sum1 += i;
				v1.pb(i);
			}
				else{
				v2.pb(i);
			}
		}
		
		int cnt1 = v1.size();
		int cnt2 = v2.size();
		
		cout << cnt1 << endl;
		for(auto x : v1){
			cout << x << " ";
		}
		cout << endl;
		
		cout << cnt2 << endl;
		for(auto x : v2){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
