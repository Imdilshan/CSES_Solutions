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
	int tt;
	cin >> tt;
	
	while(tt--){
		int x, y, num;
		cin >> x >> y;
		if(x == y){
			num = (x * x) - (x - 1);
		}
		else if(x > y){
			if(x % 2 == 0){
				num = (x * x) - (x - 1) + (x - y);
			}
			else{
				num = (x * x) - (x - 1) - (x - y);
			}
		}
		else{
			if(y % 2 == 0){
				num = (y * y) - (y - 1) - (y - x);
			}
			else{
				num = (y * y) - (y - 1) + (y - x);
			}
		}
		cout << num << endl;
	}
	return 0;
}
