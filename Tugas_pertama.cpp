#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
main ()
{
char nama [30], nim[10];
string jrs,jkl;
float nilai1, nilai2, nilai3, rerata;

/* judul Program dan Input */
cout<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
cout<<"//                                             //"<<endl;
cout<<"//\t PROGRAM MENGHITUNG RATA RATA        //"<<endl;
cout<<"//                                             //"<<endl;
cout<<"........................."<<endl;
cout<<endl;
cout<<"Nama   : ";
gets(nama);
cout<<"NIM    : ";
cin>>nim;
cout<<"Jenis kelamin: ";
cin>>jkl;
cout<<"Jurusan: ";
cin>>jrs;
cout<<endl;
cout<<"Masukkan Nilai Ulangan Harian 1  : "; cin>>nilai1;
cout<<"Masukkan Nilai Ulangan Harian 2   : "; cin>>nilai2;
cout<<"Masukkan Nilai Ulangan Harian 3   : "; cin>>nilai3;

/* Proses Penghitungan */
rerata=(nilai1*0.2+nilai2*0.4+nilai3*0.4);
cout<<"--------------------------------"<<endl;
cout<<endl;
cout<<endl;
cout<<"-------------------------------------------"<<endl;
cout<<"Siswa Atas Nama : "<<nama<<endl;
cout<<"NIM: "<<nim;
cout<<endl;
cout<<"Memperoleh Rata rata :"<<rerata<<endl;
cout<<"-------------------------------------------"<<endl;
getch ();
}
