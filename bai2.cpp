#include<bits/stdc++.h>

using namespace std;

// So nho nhat chua xuat hien trong day
// Input: 5
//		  1 2 3 4 5
// Output: 6

int cnt[1000002];

int main()
{
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		memset(cnt, 0, sizeof(cnt)); // moi test reset lai mang dem
		for(int i=0;i<n;i++)
		{
			int x; cin >>x;
			if(x>0){
				cnt[x]=1;
			} 
		}
		for(int i=1;i<=1000001;i++){
			if(cnt[i] == 0) 
				cout << i << endl;
				break;
		}
	}
	return 0;
}