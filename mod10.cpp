//
// Created by vankishy on 11/18/23.
//
#include "mod10.h"

address alokasi_1302220001(infotype info) {
    address P = new elmQ;
    info(P) = info;
    next(P) = NULL;

    return P;
}

address findElm_1302220001(queue Q, infotype num) {
    address P;
    boolean found;

    P = head(Q);
    found = false;

    while (P != NULL && found == false) {
        if (info(P) == num) {
            found = true;
        } else {
            P = next(P);
        }
    }
    return P;
}

bool queueEmpty_1302220001(queue Q) {
    if (head(Q) == NULL) {
        return true;
    } else {
        return false;
    }
}

void createQueue_1302220001(queue &Q) {
    head(Q) = NULL;
    tail(Q) = NULL;
}

void dealokasi(address P) {
    delete P;
}

void enqueque_1302220001(queue &Q, address P) {
    if (queueEmpty_1302220001(Q)) {
        head(Q) = P;
        tail(Q) = P;
    } else {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void dequeque_1302220001(queue &Q, address P) {
    if (queueEmpty_1302220001(Q)) {
        cout << "Queue kosong" << endl;
    } else if (next(head(Q)) == NULL) {
        P = head(Q);
        head(Q) = NULL;
        dealokasi(P) ;
    } else {
        P = head(Q);
        head(Q) = next(P);
        next(P) = NULL;
    }
}

void printInfo_1302220001(queue Q) {
    address P;
    int i = 1;

    P = head(Q);

    if (P == NULL) {
        cout << "Queue kosong" << endl;
    } else {
        while (P != NULL) {
            cout << "Antrian ke-" << i << " : " << info(P) << endl;
            P = next(P);
            i++;
        }
    }
}

int nbOfElm_1302220001(queue Q) {
    int bykElmt = 0;

    address P;
    P = head(Q);

    while (P != NULL) {
        bykElmt++;
        P = next(P);
    }

    return bykElmt;
}

void ganjilGenap_1302220001(queue &Q, queue &QOdd, queue &QEven) {
    address P, POdd, PEven;
    P = head(Q);

    createQueue_1302220001(QEven);
    createQueue_1302220001(QOdd);
    while (P != NULL) {
        if (info(P) % 2 == 0) {
            PEven = alokasi_1302220001(info(P));
            enqueque_1302220001(QEven, PEven);
        } else {
            POdd = alokasi_1302220001(info(P));
            enqueque_1302220001(QOdd, POdd);
        }
        P = next(P);
    }
}