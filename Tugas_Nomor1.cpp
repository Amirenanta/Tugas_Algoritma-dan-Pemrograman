
#include <iostream>

using namespace std;

int main() {
    char repeat;
    do {
    int a = 0;
    cout<<"Masukan Jumlah Baris (Angka GANJIL): ";
    cin>>a;
    if (a%2 == 0){
        cout<<"Anda memasukkan jumlah Genap. Masukkan hanya jumlah Ganjil"<<endl;
        cout<<"Apakah anda ingin mengulang Program (Y/N)";
        cin>>repeat;
    }
    else {
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < a; ++j) {
                if (i == a / 2 || j == a / 2) {
                cout << "* ";
                } else {
                cout << "  "; //baris kosong biar rapih ketengah
                }
            }
        cout<<endl;
    }
    cout<<"Apakah anda ingin mengulang Program (Y/N)";
    cin>>repeat;
}
} while (repeat == 'y' || repeat == 'Y');
    cout<<"Terima kasih telah menggunakan program ini.";
    cin.get();
    return 0;
}
