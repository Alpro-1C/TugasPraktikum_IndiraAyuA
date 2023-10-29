#include <iostream>

using namespace std;

int main() {

    int firstValue = 10;
    int secondValue = 8;

    // Menukar nilai kedua variable memakai temp (variabel tambahan)

    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    // Outpout penukaran kedua variable memakai temp
    cout << "Fisrt Value:" << firstValue << endl;
    cout << "Second Value:" << secondValue << endl << endl;

    int nilaiPertama = 10;
    int nilaiKedua = 8;

    // Tukarlah Value kedua Variable tanpa memakai temp (variable tambahan)
    nilaiPertama = nilaiPertama + nilaiKedua;
    nilaiKedua = nilaiPertama - nilaiKedua;
    nilaiPertama = nilaiPertama - nilaiKedua;

    //Output penukaran kedua variable tanpa memakai temp (variable tambahan)
    cout << "Nilai Pertama: " << nilaiPertama << endl;
    cout << "Nilai Kedua: " << nilaiKedua << endl << endl;

    int N, M;

    cout << "Ekor bebek punya pak tatang: ";
    cin >> N;

    cout << "Diberikan kepada masing masing temannya: ";
    cin >> M;

    int jumlah_bebek_yang_diberikan = N / M;
    int sisa_bebek_pak_tatang = N % M;

    cout << "Jumlah bebek yang diberikan kepada masing masing temannya: " << jumlah_bebek_yang_diberikan << endl;
    cout << "Jumlah sisa bebek pak tatang: " << sisa_bebek_pak_tatang << endl;

    return 0;
}
