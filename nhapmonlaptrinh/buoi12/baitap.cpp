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

//void xuat(int arr[], int n) {
//	cout << "Cac phan tu trong mang la: " << endl;
//	for (int i = 0; i < n; i++) {
//		cout << "\t+ Phan tu " << i + 1 << ": " << arr[i] << endl;
//	}
//}

//void sochan(int arr[], int n) {
//	cout << "Cac so chan trong mang la: " << endl;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] % 2 == 0) {
//			cout << "\t+ Phan tu " << i + 1 << ": " << arr[i] << endl;
//		}
//	}
//}

//void lietke(int arr[], int n) {
//	cout << "Cac vi tri co gia tri am: " << endl;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] < 0) {
//			cout << "\t+ Phan tu " << i + 1 << endl;
//		}
//	}
//}

//void giatrilonnhat(int arr[], int n) {
//	int max = arr[0];
//	for (int i = 1; i < n; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	cout << "Gia tri lon nhat trong mang la: " << max << endl;
//}

//void giatrinhonhat(int arr[], int n) {
//	int min = arr[0];
//	for (int i = 1; i < n; i++) {
//		if (arr[i] < min) {
//			min = arr[i];
//			index = i;
//	    }
//	}
//	cout << "Vi tri cua gia tri nho nhat trong mang la: " << index + 1 << endl;
//}

//void soluongnguyento(int arr[], int n) {
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		if (arr[i]<100)
//	}
//}

int tonggiatriam(int arr[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			tong += arr[i];
		}
	}
	return tong;
}

void sapxep(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int timgiaduongdautien(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			return i + 1;
		}
	}
	return -1;
}
