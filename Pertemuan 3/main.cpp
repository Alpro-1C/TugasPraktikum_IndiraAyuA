#include <iostream>

using namespace std;

int main (){
   float nilai;
   cout << "Input Nilai Kamu:";
   cin >> nilai; //Untuk memasukkan variabel nilai agar If Else dapat terdefinisi
   if (nilai <= 100 && nilai >= 90){
      cout <<  "Anda Mendapatkan Nilai A" << endl;//Dikatakan benar jika nilainya <= 100 dan jika nilainya >= 90
   }

   else if (nilai>= 80){
      cout << "Anda Mendapatkan Nilai B" << endl;
   }

   else if (nilai>= 70){
      cout << "Anda Mendapatkan Nilai C" << endl;
   }

   else if (nilai>= 60){
      cout << "Anda Mendapatkan Nilai D" << endl;
   }

   else if (nilai<= 59 && nilai>= 0){
      cout << "Anda Mendapatkan Nilai E" << endl;//Dikatakan benar jika nilainya <= 59 dan jika nilainya >= 0
   } else {
      cout << "Tidak Terdefinisi" << endl;//Diakatakan benar jika nilai yang diinput > 100 atau < 0
   }

    return 0;
}
