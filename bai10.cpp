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

// So nho nhat lon hon a[i]
// Dung ham upper_bound
// Input: 1 9
// 		  6 3 9 8 10 2 1 15 7
// Output: 7 6 10 9 15 3 2 _ 8

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		vector<int> v(a, a+n); // copy noi dung mang a cho vector
		sort(v.begin(), v.end());
		for(int i=0;i<n;i++){
			auto it = upper_bound(v.begin(), v.end(), a[i]);
			if(it == v.end()){
				cout << "_ ";
			}
			else cout << (*it) << " ";
		}
		cout << endl;
	}
	return 0;
}
