
#include <iostream>

using namespace std;

int main() {
    char repeat;
    do {
   int a;

    cout<<"Silahkan pilih (1-3) jumlah uang yang akan anda ambil: "<<endl;
    cout<<"1. 100.000"<<endl;
    cout<<"2. 250.000"<<endl;
    cout<<"3. 500.000"<<endl;
    cout<<"Pilihan: ";
    cin>>a;

    switch (a) {
        case 1:
            cout<<"Silahkan ambil uang 100.000 anda."<<endl;
            break;

        case 2:
            cout<<"Silahkan ambil uang 250.000 anda."<<endl;
            break;

        case 3:
            cout<<"Silahkan ambil uang 500.000 anda."<<endl;
            break;

        default:
            std::cout << "Invalid." << std::endl;
    }
    cout<<"Apakah anda ingin mengulang Program (Y/N)";
    cin>>repeat;
    } 
    while (repeat == 'y' || repeat == 'Y');
    cout<<"Terima kasih telah menggunakan ATM ini.";
    cin.get();
    return 0;
}
