#include <iostream>
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
	
		cout<<"\n no.\twaktu\t\thonor\n";
	for(int i=0;i<jumlah;i++){
		cout<<i+1<<"\t"<<iqbal[i].waktu<<"\t\t"<<iqbal[i].honor<<"\n";
	}
}
