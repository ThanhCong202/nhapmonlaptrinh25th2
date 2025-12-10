#include <iostream>
using namespace std;

void nhap(int arr[], int& n) {
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> arr[i];
	}
}

void xuat(int arr[], int n) {
	cout << "Cac phan tu trong mang la: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "\t+ Phan tu " << i + 1 << ": " << arr[i] << endl;
	}
}