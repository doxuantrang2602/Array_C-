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



// Day con trung binh lon nhat
// Dung ki thuat cua so truot
// Input: 1 5 2
//        10 4 5 15 20
// Output: 15 20

int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int sum =0;
		for(int i=0;i<k;i++) sum +=a[i];
		int res = sum;
		int idx =0;
		for(int i=k;i<n;i++){
			sum = a[i-k] + a[i];
			if(sum > res){
				res = sum;
				idx = i - k + 1;
			}
		}
		for(int i=0;i<k;i++){
			cout << a[idx + i] << " ";
		}
		cout << endl;
	}
	return 0;
}
