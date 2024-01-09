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

// Tinh gia tri cua da thuc bac giam dan
// Input: 1 4 2
//	 	 1 2 0 4
// Output: 20

const int MOD = 1000000007;

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		ll lt =1;
		ll res =0;
		for(int i=n-1;i>=0;i--){
			res += a[i]*lt;
			res %= MOD;
			lt *= x;
			lt %= MOD;
		}
		cout << res << endl;
		
	}
	return 0;
}
