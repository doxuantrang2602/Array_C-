#include<bits/stdc++.h>

using namespace std;

// Doan con dai nhat chua phan tu chia het cho k
// Input: 8 2
// 		  1 2 2 -2 6 -4 3 3 
// Output: 5

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]%k==0){
			cnt++;
		}
	}
	cout << "Doan con max chia het cho " << k << " la "<< cnt;
	return 0;
}