// 1. Berikan contoh deklarasi variabel. Berikan minimal 3 variabel dengan tipe data yang berbeda
//    1. Integer(INT). biasanya untuk menampilkan bilangan bulat. contoh,  int umur ; 21
//    2. string. biasanyan untuk menampilkan teks. contoh, string nama;Damar
//    3. float. biasanya untuk menampilkan bilangan desimal. contoh, float ipk ; 3,45 

// 2. Berikan contoh minimal satu implementasi dari conditional statement 
//
// int nilai = 85;
// if (nilai >= 80) {
//     cout << "Nilai A" << endl;
// }
// Output: Nilai A


// 3. berikan contoh implementasi dari struct
//#include <iostream>
//#include <string>
//using namespace std;

// Deklarasi struct mahasiswa
//struct Mahasiswa {
//    string nama;
//    string jurusan;
//    float ipk;
//};

//int main() {
    // Inisialisasi variabel mhs dengan tipe data struct Mahasiswa
//    Mahasiswa mhs;

    // Memberikan nilai pada elemen-elemen struct
    //mhs.nama = "Damar";
    //mhs.jurusan = "Teknologi informasi";
    //mhs.ipk = 3.45;

    // Menampilkan data mahasiswa
    //cout << "DATA MAHASISWA" << endl;
    //cout << "--------------------" << endl;
    //cout << "Nama    : " << mhs.nama << endl;
    //cout << "Jurusan : " << mhs.jurusan << endl;
    //cout << "IPK     : " << mhs.ipk << endl;

    //return 0;
//}



// 4. berikan contoh implementasi dari prosedur dan fungsi.
// prosedur
//#include <iostream>
//using namespace std;

// Deklarasi prosedur tanpa parameter dan tanpa nilai balik
//void sapa() {
//    cout << "Halo, selamat datang!" << endl;
//}

//int main() {
//    sapa(); // Memanggil prosedur sapa
//    return 0;
//}

//fungsi
//#include <iostream>
//using namespace std;

// Deklarasi fungsi dengan parameter dan nilai balik
//int penjumlahan(int a, int b) {
//    return a + b;
//}

//int main() {
//    int hasil = penjumlahan(5, 3); // Memanggil fungsi penjumlahan
//    cout << "Hasil penjumlahan: " << hasil << endl;
//    return 0;
//}


// 5. berikan contoh implementasi dari looping.
//#include <iostream>
//using namespace std;

//int main() {
//    for (int i = 0; i < 10; i++) {
//        cout << "Perulangan ke-" << i << endl;
//    }
//    return 0;
//}







    //Pada penerimaan mahasiswa baru tercatat ada 20 kandidat yang telah terdaftar.Kemudian diadakan tes tertulis untuk 2 mata pelajaran
    //yaitu matematika dan bahasa inggris.Nilai dari hasil tes tersebut kemudian diolah dengan menggunakan bantuan program komputer,dengan
    //ketentuan sebagai berikut:

    // a. Seorang kandidat dinyatakan diterima jika nilai rata - rata dari kedua tes tersebut tidak kurang dari 70 atau nilai matematikanya
    //    lebih dari 80

#include <iostream>
    using namespace std;

    int main() {
        char ulang; 

        do {
            float nMat, nInggris, rerata;
            string status;

            cout << "Masukkan nilai matematika: ";
            cin >> nMat;
            cout << "Masukkan nilai Bahasa Inggris: ";
            cin >> nInggris;

            rerata = (nInggris + nMat) / 2;

            if (rerata >= 70) {
                status = "diterima jalur rerata";
            }
            else if (nMat >= 80) {
                status = "diterima jalur matematika";
            }
            else {
                status = "ditolak";
            }

            cout << "Status kelulusan: " << status << endl;

            cout << "Apakah ingin mengulang? (y/n): ";
            cin >> ulang;
        } while (ulang == 'y' || ulang == 'Y');

        cout << "Terima kasih!" << endl;

        return 0;
    }



