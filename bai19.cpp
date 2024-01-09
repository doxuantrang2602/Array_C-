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

// Median: trung vi cua mang
// 1 5
// 1 2 4 5 3
// Output: 3

int main(){
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a, a+n);
		if(n%2 == 1){
			cout <<a[n/2] << endl;
		}
		else{
			cout << a[n/2 -1] << endl;
		}
	}
	return 0;
}
