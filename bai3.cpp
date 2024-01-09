#include<bits/stdc++.h>

using namespace std;

// Khoang cach nho nhat giua 2 so trong mang
// Input: 1 5
// 		  2 4 5 7 9
// Output: 1


int main()
{
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		int a[n];
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		int res=INT_MAX;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				res= min(res, max(a[j],a[i]) - min(a[j],a[i]));
			}
		}
		cout << res <<endl;
	}
}