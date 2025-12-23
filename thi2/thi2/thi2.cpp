#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    bool laNguyenTo = true;
    if (n < 2)
        laNguyenTo = false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                laNguyenTo = false;
                break;
            }
        }
    }

    if (laNguyenTo)
        cout << n << " la so nguyen to" << endl;
    else
        cout << n << " khong phai la so nguyen to" << endl;

    return 0;
}