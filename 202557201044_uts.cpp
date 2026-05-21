#include <iostream>
#include <iomanip>
using namespace std;

	struct pegawai {
		int waktu;
		int honor;
	};

float gaji(float lembur){
	return lembur*10000;
}

int main() {
	cout<<"======================================\nPENENTUAN HONOR HARIAN PEGAWAI HONORER\n======================================";
	
	int jumlah;
	cout<<"\n\nBerapa pegawai yang akan didata\t:";
	cin>>jumlah;
	
	pegawai iqbal [jumlah];
	
	for (int f=0;f<jumlah;f++){
		cout<<"\nBerapa jam pegawai ke "<<f+1<<" bekerja\t:";
		cin>> iqbal[f].waktu;
		iqbal[f].honor=80000+10000*(iqbal[f].waktu-8);
		cout<<"------------------------------------";
	}
	
	system ("cls");
	
	cout<<"======================================\nPENENTUAN HONOR HARIAN PEGAWAI HONORER\n======================================\n";
	cout<<setiosflags(ios::left)<<setw(3)<<"No."<<setw(10)<<"Jam Kerja"<<setw(20)<<"Honor"<<"\n";
		
	for(int i=0;i<jumlah;i++){
		cout<<setiosflags(ios::left)<<setw(3)<<i+1<<setw(10)<<iqbal[i].waktu<<setw(20)<<iqbal[i].honor<<"\n";
	}
}
