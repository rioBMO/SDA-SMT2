/* --------------------------------------------------------- */ 
/* File Program : PTR1.CPP */ 
/* Contoh pemakaian pointer */ 
/* Tujuan : mengetahui panjang dan posisi variabel di memory */ 
/* --------------------------------------------------------- */ 
#include <stdio.h> // standard input output library
int main() { // fungsi main
 int x, y; // deklarasi variabel
 int *px; // deklarasi pointer
 x = 87; // inisialisasi nilai variabel x
 px = &x; // pointer di assign mereferensi alamat dari x
 y = *px; // var y di assign nilai yang ditunjuk oleh pointer
 printf("Alamat x = %p\n", &x); // print address x
 printf("Alamat y = %p\n", &y); // print address y
 printf("Isi px = %d\n", x); // print isi pointer
 printf("Nilai yang ditunjuk oleh px = %d\n", *px); // print nilai yang ditunjuk oleh pointer
 printf("Nilai y = %d\n", y); // print nilai y setelah di assign pointer
 return 0; // nilai yang dikembalikan ke fungsi main
/* STUDI KASUS : */ 
/* - Eksekusi file program tersebut dan pahami maksud program ini */ 
/* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris program ) */ 
/* - Tambahkan pernyataan untuk menampilkan Alamat varabel y, eksekusi, dan perhatikan hasilnya */ 
/* - Bila pernyataan px = &x; diganti dengan y = *px; ,apa yang terjadi? */ 
/* - Tulis hasil pemahaman Anda pada kertas yang disediakan */ 
}
