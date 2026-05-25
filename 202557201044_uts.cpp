#include <iostream>
#include <iomanip>
using namespace std;

struct pegawai {
	int waktu, honor;
};

float lembur(int waktu){
	return (waktu - 8) * 10000;
}

int main() {
	cout << "======================================\n";
	cout << "PENENTUAN HONOR HARIAN PEGAWAI HONORER\n";
	cout << "======================================\n";
	
	int jumlah;
	cout << "\nBerapa pegawai yang akan didata\t: ";
	cin >> jumlah;
	
	pegawai iqbal[jumlah];
	
	for (int f = 0; f < jumlah; f++){
		cout << "\nBerapa jam pegawai ke " << f+1 << " bekerja (minimal 8 maksimal 12)\t: ";
		cin >> iqbal[f].waktu;
		
		if (iqbal[f].waktu < 8 || iqbal[f].waktu > 12){
			cout << "\n**********************************\n";
			cout << "MOHON MASUKKAN WAKTU YANG SESUAI\n";
			cout << "**********************************\n";
			f--;
		} else {
			iqbal[f].honor = 80000 + lembur(iqbal[f].waktu);
		}
	}
	
	system("cls");
	
	cout << "======================================\n";
	cout << "PENENTUAN HONOR HARIAN PEGAWAI HONORER\n";
	cout << "======================================\n";
	cout << left << setw(5) << "No." 
	     << setw(12) << "Jam Kerja" 
	     << setw(20) << "HONOR TOTAL" << "\n";
	
	cout << "--------------------------------------\n"; 
	
	for(int i = 0; i < jumlah; i++){
		cout << left << setw(5) << i + 1 
		     << setw(12) << iqbal[i].waktu 
		     << "Rp " << iqbal[i].honor << "\n";
	}
	
	return 0;
}
