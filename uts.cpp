#include <iostream>
#include <conio.h>
using namespace std;
main(){
	char peminjam[50],*judul,idbuku;
	float denda,lama, telat;
	int pinjam, kembali;
	
	cout<<" Input Peminjam : "; gets(peminjam);
	cout<<" Input Id Buku : "; cin >> idbuku;
	
	switch(idbuku){
		case 'A':
			judul = "ALGORITMA";
			break;
		case 'B':
			judul = "BISNIS DAN MASYARAKAT";
			break;
		case 'C':
			judul = "CITRA DIGITAL";
			break;
		Default :
			cout<<"Inputan Tidak Valud";
		
	}
	cout<<" Input Tanggal Pinjam : "; cin >> pinjam;
	cout<<" Input Tanggal Kembali : "; cin >> kembali;
	lama = kembali-pinjam;
	cout<<" Lama Pinjam : " <<lama <<endl;
	if(lama - 3 <0){
		telat = 0;
		denda = 0;
	}else{
		telat = lama - 3;
		denda = 2000*telat;
	}
	
	cout<<" Telat : " <<telat <<endl;
	cout<<" Denda : " <<denda <<endl;
	
	
	cout<<" Peminjam : " <<peminjam <<endl;
	cout<<" Judul : " <<judul <<endl;
	cout<<" lama : " <<lama <<endl;
	cout<<" Denda : " <<denda <<endl;
	
}
