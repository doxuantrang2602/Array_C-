#include <bits/stdc++.h>
#define se second
#define fi first
#define endl '\n'
using ll = long long;

using namespace std;

// So nho hon K, tim so cach hoan vi toi thieu de
// 			  dua cac so nho hon K dung canh nhau
// Dung cua so truot
// Input: 1 5 3
//		  2 1 5 6 3
// Output: 1

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		int n, k;
		cin >> n >>k;
		int a[n];
		int d=0; // cua so
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i] <= k) d++;
		}
		int cnt =0; // khoi tao ki luc
		for(int i=0;i<d;i++){
			if(a[i] <= k) cnt++;
		}
		int ans = cnt; // cap nhat ki luc
		for(int i=d;i<n;i++){
			if(a[i-d] <= k) --cnt; // phan tu bi loai ra khoi cua so <= k
			if(a[i] <= k) ++cnt; // phan tu vua duoc dua vao cua so
			ans = max(ans,cnt);
		}
		cout << d - ans << endl; // so phan tu cua so lon nhat tru di so phan tu <= k		
	}
	return 0;
}
