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

// Liet ke k phan tu lon nhat
// Input: 1 5 3
// 		  10 7 9 12 6
// Output: 12 10 9


int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n,greater<int>());
		for(int i=0;i<k;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
