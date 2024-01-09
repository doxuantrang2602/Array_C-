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

// Tim so co tan suat le duy nhat trong mang
// Input: 1 7
//		  1 2 3 2 3 1 3
// Output: 3

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int ans= a[0];
		for(int i=0;i<n;i++){
			ans ^= a[i]; // Phep XOR toan tu bit
		}
		cout << ans <<endl;
	}
	return 0;
}
