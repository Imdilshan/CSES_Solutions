/*
Intuition -> In each operation we are removing 2 coins from the bigger pile and 1 coin from the smaller pile, so basically 3 coins are removed from total piles.
If the total number of coins is divisible by 3 it means both the piles can be made empty.

However this is a interesting case of a = 7, b = 2. Here Our logic states that it should return yes, but smaller pile will be exhausted first before the larger pile
to avoid this we need to make sure the smaller pile has atleast half the coins of larger pile.

*/

void solve(){
	int a , b;
	cin >> a >> b;
	int mx = max(a,b);
	int mn = min(a,b);
	
	if((a+b) % 3 == 0 && 2 * mn >= mx){
		yes;
	}
	else{
		no;
	}
}
