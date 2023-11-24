#include <iostream>
using namespace std;

int main() {
    cout << "=======================================" << endl;
    cout << "## Cari Nilai Paling Terbesar  ##" << endl;
    cout << "=======================================" << endl;
    cout << endl;

    cout << "Nilai-Nilai: " << endl; // Menampilkan semua nilai dari array element
    int Array[5] = {7, 10, 14, 21, 24};
    for (int i = 0; i < 5; i++) {
        cout << "Nilai " << i + 1 << ": " << Array[i] << endl;
    }

    int nilTinggi = Array[0];
    int index = 0;

    for (int i = 1; i < 5; i++) {     // Mencari nilai tertinggi ama indexnya
        if (Array[i] > nilTinggi) {
            nilTinggi = Array[i];
            index = i;
        }
    }

    cout << endl;

    cout << "Nilai paling tertinggi: " << nilTinggi << endl;     // Menampilkan hasil nilai tertinggi dan index
    cout << "Index yang nilainya tertinggi: " << index << endl;

    return 0;
}