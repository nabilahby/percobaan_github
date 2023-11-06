#include <iostream>

using namespace std;

int main() {
	string jenis, baik_rusak;
	int minjam, jumlah;
	cout << "Program Persewaan DVD" << endl;
	cout << "Masukkan jenis apa dvd kamu : ";
	cin >> jenis;
	cout << "Masukkan jumlah dvd yang kamu pinjam : ";
	cin >> jumlah;
	if (jenis == "baru" || jenis == "Baru") {
		cout << "Masukkan berapa hari lamanya kamu meminjam : ";
		cin >> minjam;
		cout << "Masukkan kondisi dvd : ";
		cin >> baik_rusak;
		if (baik_rusak == "baik" || baik_rusak == "Baik") {
			if (minjam <= 2) {
				cout << "Kamu tidak mendapatkan DENDA";
			}
			else if (minjam < 7) {
				cout << "Kamu mendapatkan denda sebesar 3.000 / keping \n";
				cout << "Total Denda = " << jumlah * 3000;
			} else {
				cout << "Kamu mendapatkan denda sebesar 5.000 / keping \n";
				cout << "Total denda = " << jumlah * 5000;
			}
		} else {
			if (minjam <= 2) {
				cout << "Kamu tidak mendapatkan DENDA";
			}
			else if (minjam < 7) {
				cout << "Kamu mendapatkan denda sebesar 20.000 / keping \n";
				cout << "Total Denda = " << jumlah * 20000;
			} else {
				cout << "Kamu mendapatkan denda sebesar 30.000 / keping \n";
				cout << "Total denda = " << jumlah * 30000;
			}
		}
	}
	else if (jenis == "biasa" || jenis == "Biasa") {
		cout << "Masukkan berapa hari lamanya kamu meminjam : ";
		cin >> minjam;
		cout << "Masukkan kondisi dvd : ";
		cin >> baik_rusak;
		if (baik_rusak == "baik" || baik_rusak == "Baik") {
			if (minjam <= 2) {
				cout << "Kamu tidak mendapatkan DENDA";
			}
			else if (minjam < 7) {
				cout << "Kamu mendapatkan denda sebesar 3.000 / keping \n";
				cout << "Total Denda = " << jumlah * 3000;
			} else {
				cout << "Kamu mendapatkan denda sebesar 5.000 / keping \n";
				cout << "Total denda = " << jumlah * 5000;
			}
		} else {
			if (minjam <= 2) {
				cout << "Kamu tidak mendapatkan DENDA";
			}
			else if (minjam < 7) {
				cout << "Kamu mendapatkan denda sebesar 10.000 / keping \n";
				cout << "Total Denda = " << jumlah * 10000;
			} else {
				cout << "Kamu mendapatkan denda sebesar 15.000 / keping \n";
				cout << "Total denda = " << jumlah * 15000;
			}
		}
	}
}



