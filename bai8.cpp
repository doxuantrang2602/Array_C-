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

// Hieu lon nhat cua cap phan tu dung thu tu
// Input: 1 7 
//		  2 3 10 6 4 8 1
// Output: 10 -2 = 8

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int min_val = a[0];
		int res =-1e9;
		for(int i=0;i<n;i++){
			if(a[i] > min_val){
				res = max(res, a[i]-min_val);
			}
			min_val = min(a[i], min_val);
		}
		if(res == -1e9) cout << "-1";
		else cout << res << endl;
	}
	return 0;
}
