#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define se second
#define fi first
#define endl '\n'
using ll = long long;

// Ki thuat cua so truot
// Cua so lon nhat
// Input: 1 10 3
// 		  1 2 3 1 5 2 7 8 9 1
// Output: 24
//		   7 8 9

using namespace std;

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		int n, k;
		cin >> n >>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		ll sum =0;
		for(int i=0;i<k;i++){
			sum += a[i];
		}
		ll res = sum; 
		ll idx = 0; // khoi tao chi so bat dau cua cua so
		for(int i=k;i<n;i++){
			sum = sum - a[i-k] + a[i];
			if(sum > res ){
				res = sum;
				idx = i - k +1; // chi so bat dau duoc cap nhat
			}
		}
		cout << res << endl;
		for(int i=0;i<k;i++){
			cout << a[idx+i] << " ";
		}
	}
	return 0;
}
