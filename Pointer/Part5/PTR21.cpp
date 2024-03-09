/*----------------------------------------------------------------------------*/
/* File : PTR21.cpp */
/* Deskripsi : contoh deklarasi list dan pemakaian makro */
/* Dibuat oleh : Tim Dosen SDP */
/* Tanggal : 13-09-2001 */
/*----------------------------------------------------------------------------*/
#include<stdlib.h>
#include<stdio.h>
/*Definisi akses komponen type, standard kuliah Algoritma dan pemrograman*/
#define info(P) (P)->info
#define next(P) (P)->next
#define Nil NULL
/* Definisi TYPE global (sebenarnya untuk soal ini tidak perlu global) */
/* Element list linier */
typedef int infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist {
infotype info;
address next;
} ElmtList;
/* Program Utama */
int main()
{
/* kamus */
address First;
address P, Q;
/* program */
/* Create list kosong */
First = Nil;
/* Alokasi, insert as first elemen */
P = (address) malloc(sizeof (ElmtList));
info(P) = 10;
next(P) = Nil;
First = P;
/* Alokasi, insert as first elemen */
Q = (address) malloc(sizeof (ElmtList));
info(Q) = 20;
next(Q) = Nil;
next(Q) = First;
First = Q;
/* Alokasi, insert as first elemen */
P = (address) malloc(sizeof (ElmtList));
info(P) = 30;
next(P) = Nil;
next(P) = First;
First = P;
printf("%d \n", info(next(next(First))));


/* Insert awal */
P = (address) malloc(sizeof (ElmtList));
info(P) = 40;
next(P) = Nil;
next(P) = First;
First = P;
printf("Insert Awal = %d \n", info(First));

/* Insert akhir */
P = (address) malloc(sizeof (ElmtList));
info(P) = 50;
next(P) = Nil;
next(next(next(next(First)))) = P;
printf("Insert Akhir = %d \n", info(next(next(next(next(First))))));

/* Insert tengah */
P = (address) malloc(sizeof (ElmtList));
info(P) = 60;
next(P) = Nil;
next(P) = next(Q);
next(Q) = P;

printf("Insert Tengah = %d \n", info(next(next(next(First)))));

/* Print semua List */
printf("\nList:\n");
while (First != Nil) {
	printf("%d \n", info(First));
	First = next(First);
}
return 0;
}
