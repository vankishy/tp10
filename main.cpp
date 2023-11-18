#include "mod10.h"

int main() {
    queue Qmain, QOdd, QEven;
    address Ptmain, K;
    int i;
    infotype num;

    createQueue_1302220001(Qmain);

    for (i = 0; i < 10; i++) {
        cout << "Masukkan angka : " << endl;
        cin >> num;
        Ptmain = alokasi_1302220001(num);
        enqueque_1302220001(Qmain, Ptmain);
    }
    cout << "Kondisi awal" << endl;
    printInfo_1302220001(Qmain);
    cout << endl;

    ganjilGenap_1302220001(Qmain,QOdd,QEven);
    Ptmain = head(Qmain);
    while (Ptmain != NULL) {
        K = next(Ptmain);
        dequeque_1302220001(Qmain, Ptmain);
        Ptmain = K;
    }

    cout << "Kondisi Akhir" << endl;
    printInfo_1302220001(Qmain);
    cout << endl;

    cout << "Queue Ganjil" << endl;
    printInfo_1302220001(QOdd);
    cout << endl;

    cout << "Queue Genap" << endl;
    printInfo_1302220001(QEven);
    cout << endl;
    return 0;
}
