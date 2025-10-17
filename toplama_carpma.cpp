#include <iostream>
using namespace std;

int main()
{

    float sayi1, sayi2;
    char islem;
    cout << "Lutfen ilk sayiyi girin: ";
    cin >> sayi1;

    cout << "Lutfen yapacaginiz islemi seciniz: ";
    cin >> islem;

    if (islem != '+' && islem != '*')
    {
        cout << "Lutfen gecerli bir islem seciniz (+,*)";
        return 0;
    }

    cout << "Lutfen ikinci sayiyi girin: ";
    cin >> sayi2;

    switch (islem)
    {
    case '+':
        cout << sayi1 + sayi2;
        break;

    case '*':
        cout << sayi1 * sayi2;
        break;
    }

    return 0;
}