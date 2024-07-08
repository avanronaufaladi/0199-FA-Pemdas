#include <iostream>
using namespace std;
class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	
	
public:
	MasukUniversitas() {
		uangPendaftaran = 1000;
		uangBangunan = 500;
		uangSemesterPertama = 800;
		totalBiaya = 2300 ;
	}
	virtual void namaJalurMasuk() {
		cout << "pilih jalur masuk" << endl;
		cout << " SNBT " << endl;
		cout << " SNBP " << endl;
		return;
	}
	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
	void uangPendaftaran();
	void uangSemesterpertama();
	void uangBangunan();

	// isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
	void uangPendaftaran();
	void uangSemesterpertama();
	// isi disini untuk melengkapi class SNBP
};
int main() 
{
	cout << "\nMenu" << endl;
	cout << "1. SNBT" << endl;
	cout << "2. SNBP" << endl;
	cout << "5. exit" << endl;
	cout << "\nEnter your choice (1-3) : ";
	
	return 0;
	
	// isi disini untuk fungsi main
}