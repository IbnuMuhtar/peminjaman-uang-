#include<iostream>
using namespace std;

int total(int pinjam, int bunga){
	return pinjam + bunga;
}

int main(){
	int pinjam, bunga, bulan, n = 5;
	char pilih, nama[20];
	
	cout<<"-----------------\n";
	for (int i = 0; i < n; i++ ){
        for(int x = n; x > i; x--){
            cout<<" ";
        }for(int f = 1; f <= 2 * i - 1; f++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\nPiramida Finance\n\n";
    cout<<"-----------------\n";
	cout<<"Masukan Nama Anda : ";
	cin.getline(nama, 20);
	cout<<"\nApakah Anda Ingin Melakukan Pinjaman [y/t] : ";
	cin>>pilih;
	cout<<endl;
	
	switch(pilih){
		case 'y':
		case 'Y':
			cout<<"\nMasukan Nominal Yang Ingin Anda Pinjam : ";
			cin>>pinjam;
			cout<<"\nLama Pinjaman (bulan) : ";
			cin>>bulan;
			bunga = 0.05 * pinjam;
			cout<<"\nBunga : "<<bunga;
			cout<<"\n\nTotal Yang Harus dibayar Dalam "<<bulan<<" Bulan Kedepan : "<<total(pinjam, bunga);
			cout<<"\n\nSelamat Anda  Berhasil Melakukan Pinjaman Di Piramida Finance";
			
		case 't':
		case 'T':
			cout<<"\n\nTerima Kasih Sudah Menggunakan Layanan Kami";
	}
	
	return 0;
}
	
	
