/* Author -> highfive */
#include <bits/stdc++.h>
using namespace std;

/* To Make I/O faster */
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);

/* Macro */
#define int long long
#define ld long double
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define endl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = (b) - 1; i >= a; i--)
#define print(v) for(auto x : v) cout << x << " ";
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

/* Containers */
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
typedef list<int> l;
typedef deque<int> dq;
typedef stack<int> stk;
typedef set<int> st;
typedef pair<int,int> pi;
typedef priority_queue<int> mxpq;
typedef priority_queue<int, vector<int>, greater<int>> mnpq;
typedef map<int,int> mpp;

/* Constants */
const int MOD = 1e9 + 7;
const int N = 1e5;
const ld PI = acos(-1.0);

// When Generating permutations, sort the string first
/* 
  vector<string> vs;
  string s = "321";
  sort(s.begin(),s.end());
  do{
    vs.pb(s);
  } while(next_permutation(s.begin(),s.end()));
*/

void solve(){
  int n;
  cin >> n;
  
  int ans = 0, num = 5;
  while(num <= n){
    ans += n/num;
    num *= 5;
  }
  cout << ans << endl;
}

signed main(){
  fastio;
  solve();
  return 0;
}
