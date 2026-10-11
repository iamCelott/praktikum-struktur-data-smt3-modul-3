#include <iostream>
using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int a = 100;
    int b = 200;

    int *p1 = &a;
    int *p2 = &b;

    cout << "=== ARRAY 1 SEBELUM DITUKAR ===" << endl;
    tampilkanArray(array1);

    cout << "\n=== ARRAY 2 SEBELUM DITUKAR ===" << endl;
    tampilkanArray(array2);

    tukarArray(array1, array2, 1, 1);

    cout << "\n=== ARRAY 1 SETELAH DITUKAR ===" << endl;
    tampilkanArray(array1);

    cout << "\n=== ARRAY 2 SETELAH DITUKAR ===" << endl;
    tampilkanArray(array2);

    cout << "\n=== NILAI SEBELUM DITUKAR ===" << endl;
    cout << "a = " << *p1 << endl;
    cout << "b = " << *p2 << endl;

    tukarPointer(p1, p2);

    cout << "\n=== NILAI SETELAH DITUKAR ===" << endl;
    cout << "a = " << *p1 << endl;
    cout << "b = " << *p2 << endl;

    return 0;
}
