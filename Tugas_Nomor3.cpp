
#include <iostream>

using namespace std;

bool prima(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
int main() {
    int a;
    cout<<"Masukan Nomor: ";
    cin>>a;
    if(a>0){
        cout<<a<<" adalah bilangan Positif"<<endl;
        if (prima(a)) {
        cout<<a<<" adalah bilangan Prima"<<endl;
        }
    } else if (a<0){
        cout<<a<<" adalah bilangan Negatif"<<endl;
    } else {
        cout<<a<<" adalah Nol"<<endl;
    }
    if(a%2==0){
        cout<<a<<" adalah bilangan Genap"<<endl;
        if(a=2){
            cout<<a<<" adalah bilangan Prima"<<endl;
        }
    } else {
        cout<<a<<" adalah bilangan Ganjil"<<endl;
    }
    
    cin.get();
    return 0;
}
