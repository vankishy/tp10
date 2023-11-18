//
// Created by vankishy on 11/18/23.
//

#ifndef UNTITLED1_MOD10_H
#define UNTITLED1_MOD10_H
#include <iostream>
#define info(P) (P)->info
#define next(P) (P)->next
#define head(Q) (Q).head
#define tail(Q) (Q).tail

using namespace std;

typedef bool boolean;
typedef int infotype;
typedef struct elmQ *address;

struct elmQ {
    infotype info;
    address next;
};

struct queue {
    address head, tail;
};

address alokasi_1302220001(infotype info);
address findElm_1302220001(queue Q, infotype num);
bool queueEmpty_1302220001(queue Q);
void createQueue_1302220001(queue &Q);
void dealokasi_1302220001(address P);
void enqueque_1302220001(queue &Q, address P);
void dequeque_1302220001(queue &Q, address P);
void printInfo_1302220001(queue Q);
int nbOfElm_1302220001(queue Q);
void ganjilGenap_1302220001(queue &Q, queue &QOdd, queue &QEven);
#endif //UNTITLED1_MOD10_H
