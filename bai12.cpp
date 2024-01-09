#include<bits/stdc++.h>

using namespace std;

// Tim so uoc cac phan tu trong mang co the chia het khac 1
// Input: 1 4
// 		  8 24 16 32
// Output: 3 (2,4,8)

const int maxn=1000000;
int a[maxn];

int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b, a%b);
}

int main()
{
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int res =0;
		for(int i=0;i<n;i++){
			res=gcd(res, a[i]);
		}
		if(res == 1){
			cout << 0 << endl; continue;
		}
		int ans=1; // chinh no
		for(int i=2; i<=sqrt(res);i++){
			if(res%i == 0){
				++ans;
				if(i!=res/i) ++ans;
			}
		}
		cout << ans << endl;
	}
	return 0;
}