#include <iostream>
using namespace std;

void sum1D(int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    cout << "Cem: " << s << endl;
}

void product1D(int a[], int n) {
    int p = 1;
    for (int i = 0; i < n; i++)
        p *= a[i];
    cout << "Hasil: " << p << endl;
}

void max1D(int a[], int n) {
    int mx = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > mx) mx = a[i];
    cout << "Max: " << mx << endl;
}

void min1D(int a[], int n) {
    int mn = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < mn) mn = a[i];
    cout << "Min: " << mn << endl;
}

int main() {
    int n;
    cout << "Massivin uzunlugunu daxil edin: ";
    cin >> n;

    int a[n];
    cout << n << " elementi daxil edin:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sum1D(a, n);
    product1D(a, n);
    max1D(a, n);
    min1D(a, n);

    return 0;
}