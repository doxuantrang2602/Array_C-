#include<bits/stdc++.h>

using namespace std;

// Bai toan Loai bo meo
// Input: 1 4
//		  1 2 3 4
// Output: 3

// 1 8
// 1 2 2 2 3 3 4 1
// Out: 5


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
		int res=1, dem=1;
		for(int i=0;i<n;i++){
			if(a[i] == a[i+1]){
				++dem;
			}
			else{
				dem=1; // reset dem
			}
			res = max(res,dem); 
		}
		cout << n - res << endl;
	}
	return 0;
}