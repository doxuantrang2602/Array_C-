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

// Tang mang
// Input: 1 6
// 		  8 2 9 7 1 6
// Output: 19

int main(){
	int TC; cin >> TC;
	while(TC--){
		int n; 
		cin >> n;
		int a[n];
		for(int &x: a) cin >> x;
		ll ans =0;
		for(int i=1;i<n;i++){
			if(a[i] < a[i-1]){
				ans += a[i-1] - a[i];
				a[i] = a[i-1];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
