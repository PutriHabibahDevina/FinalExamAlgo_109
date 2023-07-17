#include <iostream>
#include <string>
using namespace std;


const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

void tambahMahasiswa(string element){
if (jumlahMahasiswa < MAX_MAHASISWA) 
	{
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();

		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}

};

//isi disini
void tampilkanSemuaMahasiswa();
//isi disini
void algorithmacariMahasiswaByNIM();
//isi disini
void algorithmaSortByTahunMasuk();

int main() {
	int pilihan;
	
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

//2. Berdasarkan studi kasus di atas, algoritma yang saya gunakan adalah stack.
//3. Perbedaan mendasar antara algoritma stack dan queue yaitu prinnsip dan elemen yang digunakan. 
//Stack menggunakan prinsip LIFO (Last In First Out), sedangkan queue menggunakan prinsip FIFO (First In First Out).
// Stack menggunakan operasi  push dan pop, sedangkan queue menggunakan elemen front dan rear.
//4. Algoritma stack digunakan saat ingin menyimpan data.
//5a. Struktur tersebut memiliki kedalaman 5.
//5b. Cara membaca struktur pohon di atas menggunakan metode in (salah), preorder (benar), post(salah).