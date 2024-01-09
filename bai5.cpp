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
#define endl '\n'
using ll = long long;

using namespace std;

// Dem so phan tu lap lai
// Input: 1 5 
// 	      4 5 1 2 1
// Output: 2


int main(){
int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int ans =0;
		for(int i=0;i<n;i++){
			if(mp[a[i]]>=2) ans++;
		}
		cout << ans << endl;
		
	}
	return 0;
}
