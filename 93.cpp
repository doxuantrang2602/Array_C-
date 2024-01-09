#include<bits/stdc++.h>

using namespace std;

// Tim a,b,c sao cho: 1/x = 1/a + 1/b + 1/c
// Input: 5
// Output: 10 15 30 

int main(){
	int x;
	cin >> x;
	for(int i=1;i<=100;i++){
		if(i%x == 0){
			cout << 2*i << " "<< 3*i << " "<< 6*i;
			break;
		}
	}
	return 0;
}