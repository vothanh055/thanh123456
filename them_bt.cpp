#include<iostream>
using namespace std;
#define max 100
void nhap_mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap vao phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
void xuat_mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}
void them_mang(int a[], int n, int x, int vt)
{
	for (int i = n - 1; i >=vt; i--)
	{
		a[i + 1] = a[i];
	}
	a[vt] = x;
	n++;
}
int main()
{
	int n;
	int a[max];
	do {
		cout << "nhap vao phan tu n";
		cin >> n;
		if (n<0 || n > max)
		{
			cout << "nhap lai n";
		}
		cout << "nhap phan tu la";
		nhap_mang(a, n);
		cout << "xuat phan tu la";
		xuat_mang(a, n);

	} while (n<0 || n > max);
		int vt;
	int x;
	cout << "phan tu can them la";
	cin >> x;
	do {
		cout << " vi tri can them la";
		cin >> vt;
		if (vt<0 || vt> max)
		{
			cout << "nhap lai vi tri";
		}
	} while (n<0 || n > max);
	them_mang(a, n, x, vt);
	cout << "mang sau khi them ";
	xuat_mang(a, n);
	system("pause");
	return 0;
	}
