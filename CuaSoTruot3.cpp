#include <bits/stdc++.h>
#define se second
#define fi first
#define endl '\n'
using ll = long long;

using namespace std;

// Sua den`
// Input: 1 10 6 5
//		  2 10 1 5 9 (cac den bi hong)
// Output: 1			

// n: so den`
// k: so den lien tiep hoat dong
// b: so den hong

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, b;
		cin >> n >> k >> b;
		int a[100001] = {0};
		for(int i=0;i<b;i++){
			int x; cin >> x;
			a[x] = 1; // cai den o chi so x bi hong
		}
		int cnt=0;
		for(int i=1;i<=k;i++){
			if(a[i] == 1) cnt++;
		}
		int ans = cnt;
		for(int i=k+1;i<n;i++){
			cnt = cnt - a[i-k] + a[i];
			ans = min(ans, cnt);
		}
		cout << ans << endl;
	}
	return 0;
}
