#include <sstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
#include <vector>
#include <set>
#include <fstream>
#include <queue>
#include <stack>
#define pb push_back
#define pf push_front
#define se second
#define fi first
#define endl '\n'
using ll = long long;

using namespace std;

// Cua so trung nhau 2
// Kiem tr do dai cua so co k cua mang ban dau sao cho
// co 2 phan tu co do lech khong vut qua t

// Input: 1 6 3 3 
//		  1 5 8 1 5 9
// Output: YES		  

bool solve(){
	int n, k, t;
	cin >> n >> k >> t;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	multiset<int> s;
	bool ok = false;
	for(int j=0;j<k;j++){
		// Kiem tra trong s co phan tu a[i] >= a[j] - t khong
		auto it = s.lower_bound(a[j]-t);
		if(it != s.end() && (*it) <= a[j]+t){
			return true;
		}
		s.insert(a[j]);
	}
	for(int j=k;j<n;j++){
		s.erase(s.find(a[j-k]));
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
