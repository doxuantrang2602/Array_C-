#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl '\n'
using namespace std;
class Dn{
	int n;
	float *ds;
	public:
		void nhap();
		void xuat();
		friend void dem(Dn &);	
		void lietke();
};
void Dn::nhap(){
	cout << "Nhap n: "; cin >> n;
	ds = new float[n+1];
	for(int i = 0; i < n; i++)
	{
		cout << "Nhap so thu " << i+1 << ": "; cin >> ds[i];
	}
}
void Dn::xuat()
{
	for(int i = 0; i < n; i++)
	{
		cout << ds[i] << " ";
	}
	cout << endl;
}
void dem(Dn &ob){
	int dem = 0;
	for(int i = 0;i < ob.n; i++)
	{
		if(ob.ds[i] < -10 || ob.ds[i] > 100) dem++;
	}
	cout << "So phan tu nam ngoai [-10,100] la: " << dem << endl;
}
void Dn::lietke(){
	int maxx = ds[0]+ds[1]+ds[2];
	for(int i = 1; i < n-2; i++)
	{
		if(ds[i]+ ds[i+1] + ds[i+2] > maxx) maxx = ds[i]+ds[i+1]+ ds[i+2];
	}
	cout << "3 so lien tiep tong chung lon nhat la: " << endl;
	for(int i = 0; i < n-2;i++)
	{
		if(ds[i]+ ds[i+1] + ds[i+2] == maxx) cout << ds[i] << " " << ds[i+1] << " " << ds[i+2] << endl;
	}
}
int main()
{
 	Dn x;
 	x.nhap();
 	x.xuat();
 	dem(x);
 	x.lietke();
 	return 0;
}