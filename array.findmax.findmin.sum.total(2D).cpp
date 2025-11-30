#include <iostream>
using namespace std;

void sum2D(int a[][10], int n, int m) {
    int s = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            s += a[i][j];
    cout << "Cem: " << s << endl;
}

void product2D(int a[][10], int n, int m) {
    int p = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            p *= a[i][j];
    cout << "Hasil: " << p << endl;
}

void max2D(int a[][10], int n, int m) {
    int mx = a[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] > mx) mx = a[i][j];
    cout << "Max: " << mx << endl;
}

void min2D(int a[][10], int n, int m) {
    int mn = a[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] < mn) mn = a[i][j];
    cout << "Min: " << mn << endl;
}

int main() {
    int n, m;
    cout << "Setir sayi: ";
    cin >> n;
    cout << "Sutun sayi: ";
    cin >> m;

    int a[10][10];
    cout << "Elementleri daxil edin:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    sum2D(a, n, m);
    product2D(a, n, m);
    max2D(a, n, m);
    min2D(a, n, m);

    return 0;
}