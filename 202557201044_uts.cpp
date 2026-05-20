#include <iostream>
//function menghitung gaji
float gaji(float lembur){
	return lembur*10000;
}

int main() {
	cout<<"	======================================\nPENENTUAN HONOR HARIAN PEGAWAI HONORER\n======================================";
		
	struct pegawai {
		string nama;
		int waktu;
		int honor;
	};
	pegawaiiqbal [jumlah];
	
	int jumlah;
	cout<<"Berapa pegawai yang akan didata?";
	cin>>jumlah; 
	
	for (int f=1;f<=jumlah;f++){
		cout<<"Masukkan nama karyawan ke "+f"\t:";
		cin >>iqbal[f].nama;
		cout<<"Berapa jam karyawan "+f+" bekerja?";
		cin>> iqbal[f].waktu;
		iqbal[f].honor=80000+10000*(iqbal[f].waktu-8);
	}
	
	

}
