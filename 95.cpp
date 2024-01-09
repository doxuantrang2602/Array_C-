#include<bits/stdc++.h>

using namespace std;

int tong(int n){
	if(n==1) return 1;
	else return n+tong(n-1);
}
int day(int n){
	for(int i=1;i<n;i++){
		cout << i << " ";
	}
}

int main(){
	int n;
	cin >>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(n == tong(i)){
			cnt++;
			cout << day(i);
		}
	}
	if(cnt == 0){
		cout << "Khong tim thay day so thoa man";
	}
	return 0;
}