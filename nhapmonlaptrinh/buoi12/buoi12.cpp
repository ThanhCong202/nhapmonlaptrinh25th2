#include <iostream>
#include "baitap.h"
using namespace std;


int main()
{
    const int SIZE = 100;
    int arr[SIZE], n = 0;
    nhap(arr, n);
    ///*xuat(arr, n);
    //sochan(arr, n);
    //lietke(arr, n);
    //giatrilonnhat(arr, n);
    //giatrinhonhat(arr, n);*/
    //cout << "Tong gia tri am trong mang: " << tonggiatriam(arr,n) << endl;
   /* sapxep(arr, n);*/
    int vt = timgiaduongdautien(arr, n);
    if (vt == -1) {
        cout << "Mang khong co gia tri duong." << endl;
    }
    else {
        cout << "vi tri gia tri duong dau tien trong mang la: " << vt << endl;
    }
}
