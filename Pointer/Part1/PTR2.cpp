/* --------------------------------------------------------- */ 
/* File Program : PTR2.CPP */ 
/* Contoh pemakaian pointer yang salah */ 
/* Tujuan : mengetahui panjang dan posisi variabel di memory */ 
/* --------------------------------------------------------- */ 
#include <stdio.h> // standard input output library
int main() { // fungsi main
 float *pu; // deklarasi pointer pu bertipe float
 float nu; // deklarasi variabel bertipe float
 int u = 1234; // deklarasi var u yang memiliki nilai 1234
 pu = &u; // pointer di assign mereferensi alamat u
 nu = *pu; // var nu di assign 
 printf("u = %d\n", u); // print nilai var u
 printf("nu = %f\n", nu); // print nilai var nu
 return 0; 
/* STUDI KASUS : */ 
/* - Eksekusi file program tersebut dan pahami maksud program ini */ 
/* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris program ) */ 
/* - Tulis hasil pemahaman Anda pada kertas yang disediakan */ 
}

// - pointer pu harus di assign dengan tipe data yg sama dengan pointernya
//   jika pointer pu bertipe float, maka u harus di deklarasikan menjadi tipe data float juga
