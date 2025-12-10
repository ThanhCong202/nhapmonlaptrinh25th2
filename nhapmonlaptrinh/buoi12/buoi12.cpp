#include <iostream>
#include "baitap.h"
using namespace std;


int main()
{
    const int SIZE = 100;
    int arr[SIZE], n = 0;
    nhap(arr, n);
    xuat(arr, n);
    sochan(arr, n);
    lietke(arr, n);
    giatrilonnhat(arr, n);
    giatrinhonhat(arr, n);
}
