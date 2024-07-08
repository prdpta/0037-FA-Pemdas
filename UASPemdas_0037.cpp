#include <iostream> 
using namespace std;

class MasukUniversitas {
private:
    string SNBT, SNBP;
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
    string kategori;
    string rekomendasi;

public:
    MasukUniversitas() {
        uangPendaftaran = 100000; 
        uangSemesterPertama = 30000000;
        uangBangunan = 15000000;
        totalBiaya = 45100000;
        kategori = mahal;
        rekomendasi = tidak rekomendasi;
    }

    virtual void namaJalurMasuk() { 
        string SNBT;
        string SNBP;
        
        return; 
    }
       
    void setUangPendaftaran(int nilai) { 
        this->uangPendaftaran = 100000;
    }

    float getUangPendaftaran() { 
        return uangPendaftaran;
    }

    // isi setter dan getter variable yang dibutuhkan di bawah ini 
    };

class SNBT : public MasukUniversitas {
    void uangPendaftaran()
        cout >> "Masukkan uang pendaftaran : " << endl

    void uangSemesterPertama()
        cout >> "Masukkan uang semester pertama : " << endl

    void uangBangunan()
        cout >> "Masukkan uang bangunan : " << endl

    void totalBiaya()
        cout >> "Total Biaya : " >> endl

    void kategori()
        cout >> "Kategori : " >> endl

    void rekomendasi()
        cout >> "Rekomendasi : " >> endl
};

class SNBP : public MasukUniversitas {
// isi disini untuk melengkapi class SNBP
};

int main() {
    MasukUniversitas;

    cout << "Pilih Jalur Masuk : " << endl;
    cout << "1. SNBT" << endl;
    cout << "2. SNBP" << endl;
    cout << "3. Keluar" << endl;
}