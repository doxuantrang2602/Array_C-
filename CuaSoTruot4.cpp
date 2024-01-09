#include <bits/stdc++.h>
#include <set>
#define se second
#define fi first
#define endl '\n'
using ll = long long;

using namespace std;

// Cua so trung nhau 1
// Kiem tra cua so co k cua mang ban dau co 2 phan tu trung nhau khong
// Input: 1 5 3
//		  1 2 3 1 3
// Output: YES		  

bool solve(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	set<int> s;
	bool ok = false;
	for(int i=0;i<k;i++){
		if(s.count(a[i])){
			return true;
		}
		s.insert(a[i]);
	}
	for(int i=k;i<n;i++){
		s.erase(a[i-k]);
		if(s.count(a[i])) return true;
		s.insert(a[i]);
	} 
	return false;
}

int main(){
	int t; cin >> t;
	while(t--){
		if(solve()) cout << "YES\n";
		else cout << "NO" << endl;
		
	}
	return 0;
}
