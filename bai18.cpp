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

// Day con lien tuc co do dai nho nhat voi tong > x
// Input: 1 6 51
// 		  1 4 45 6 0 19
// Output: 3 (4+45+6)

int main(){
	int TC; cin >> TC;
	while(TC--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int left =0;
		int res = 1e9;
		ll sum = 0;
		for(int r=0;r<n;r++){
			sum += a[r];
			while(sum > x){
				res = min(res,r-left+1);
				sum -= a[left];
				++left;
			}
		}
		if(res == 1e9) cout << "-1\n";
		else cout << res << endl;
	}
	return 0;
}
