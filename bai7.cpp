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

// in ra so fibonacci co trong mang
// Input: 1 7
// 		  1 4 3 9 10 13 7
// Output: 1 3 13

int f[1001];

void ktao(){
	int fibo[20];
	fibo[0]=0; fibo[1]=1;
	for(int i=2;i<20;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for(int i=0;fibo[i]<=1000;i++){
		cout << fibo[i] << endl;
		f[fibo[i]] = 1;
	}
}

int main(){
	ktao();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			if(f[a[i]]){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
