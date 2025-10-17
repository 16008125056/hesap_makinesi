#include <iostream>
using namespace std;

int main(){
    float sayi1,sayi2;
    char islem;

    cout<<"Lutfen ilk sayiyi girin: ";
    cin>>sayi1;

    cout<<"Lutfen ikinci sayiyi girin: ";
    cin>>sayi2;

    cout<<"Lutfen yapacaginiz islemi seciniz(-,/): ";
    cin>>islem;

    if ( islem == '-') {
        cout<< "Sonuc: " <<sayi1 - sayi2 << endl;
    }
    else if ( islem == '/') {
        if (sayi2 != 0) {
            cout<< "Sonuc: " <<sayi1 / sayi2 << endl;
        } else {
            cout<< "Hata! Bir sayi sifira bolunemez" << endl;
        }
    }
    else {
        cout<< "Gecersiz islem girdiniz." << endl;
    }
    return 0;

}
