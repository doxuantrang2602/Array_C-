#include<bits/stdc++.h>

using namespace std;

// In ra uoc chung lon nhat cua 2 so trong day
// Input: 1 10
// 		  2 3 1 4 5 7 14 3 5 10
// Output: 7

const int maxn = 1000;
int a[maxn];
map<int,int> mp;


void solve(int n){
	for(int i=0; i<sqrt(n);i++){
		if(n%i==0){
			mp[i]++;
			if(i!=n/i) mp[n/i]++;
		}
	}
}

int main(){
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		for(int i=0;i<n;i++){	
			cin >> a[i];
			solve(a[i]);
		}
		int res=1;
		for(auto it : mp){
		if(it.second>=2){
			res=it.first;
		}
		}
		cout << res << endl;
		mp.clear();
		return 0;
	}
}