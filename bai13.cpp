#include<bits/stdc++.h>

using namespace std;

// Diem can bang cua mang
// Input: 1 7
// 		  -7 1 5 2 -4 3 0
// Output: 3 6

const int maxn=10000;
int a[maxn];

int main()
{
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		long long sum=0;
		bool ok =false;
		for(int i=0;i<n;i++) sum += a[i];
		long long left =0;
		for(int i=0;i<n;i++){
			sum-= a[i]; // tong phan tu ben phai a[i]
			if(sum == left){
				cout << i << " ";
			}
			left +=a[i];
		}
		if(!ok) cout << "-1" <<endl;
		else cout << endl;
	}
	return 0;
}