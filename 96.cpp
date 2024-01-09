#include <iostream>
#define se second
#define fi first
#define endl '\n'
using ll = long long;

using namespace std;

// 96
// nho nhat cua hang, lon nhat cua cot
//3 4
//4 4 4 5
//5 6 4 8
//5 8 5 7

// out: 2 (5,5)
void Dem(float A[100][100], int nHang, int nCot)
{
    int cnt = 0;
    int cot;
    float max;
    float min;
    for (int i = 0; i < nHang; i++)
    {
        max = A[i][0];
        cot = 0;
        for (int j = 1; j < nCot; j++)
        {
            // Tim max Hang`
            if (max < A[i][j])
            {
                max = A[i][j];
                cot = i;
            }
        }
        // Tim max Cot
        min = A[0][cot];
        for (int i = 1; i < nHang; i++)
        {
            if (min > A[i][cot])
            {
                min = A[i][cot];
            }
        } 
        // Compare maximum in row and minimm in column
        if (max == min)
        {
            cnt++;
        }
    } 
    cout << cnt << endl;
}
int main(){
	int n,m;
	cin >> n >> m;
	float a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	Dem(a,n,m);
	return 0;
}
