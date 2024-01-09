#include<bits/stdc++.h>

using namespace std;

// Doan con dai nhat phan tu am duong dan xen
// Input: 8
// 		  1 2 2 -2 3 -4 3 3 
// Output: 5

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int res =0, cnt= 1;
	for(int i=0;i<n;i++){
		if(a[i]*a[i+1]<0){
			cnt++;
		}
		else{
			cnt=1;
		}
		res= max(res, cnt);
    }
	if(res == 0) cout << "0" << endl; 
	else cout << "Doan con dai nhat la: " << res;
	return 0;
}