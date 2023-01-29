#include<iostream>

using namespace std;

int main()
{
    char nomenuMakanan, nomenuMinuman;
    int harga1, harga2;

    cout << "{>|---------- DAFTAR MENU ---------|<}" << endl;
    cout << "{>|     MAKANAN :        |  HARGA  |<}" << endl;
    cout << "{>|1. Nasi ayam rendang  |RP.15000 |<}" << endl;
    cout << "{>|2. Nasi telur rendang |RP.10000 |<}" << endl;
    cout << "{>|3. Nasi ikan kakap    |RP.20000 |<}" << endl;
    cout << "{>|4. Nasi gulai ayam    |RP.18000 |<}" << endl;
    cout << "{>|5. Nasi ayam balado   |RP.17000 |<}" << endl;
    cout << "{>|     MINUMAN :        |         |<}" << endl;
    cout << "{>|1. Teh manis panas    | RP.5000 |<}" << endl;
    cout << "{>|2. Es kelapa muda     | RP.8000 |<}" << endl;
    cout << "{>|3. Es jeruk manis     | RP.7000 |<}" << endl;
    cout << "{>|4. Jus markisa        | RP.10000|<}" << endl;
    cout << "{>|5. Jus strawberry     | RP.10000|<}" << endl;
    cout << "{>|--------------------------------|<}" << endl;
    cout << "silahkan inputkan menu makanan" << endl;
    cin >> nomenuMakanan;

    switch (nomenuMakanan){
    case '1':
         cout << "anda memesan Nasi ayam rendang" << endl;
        harga1 = 15000;
        break;
    case '2':
        cout << "anda memesan Nasi telur rendang" << endl;
        harga1 = 10000;
        break;
    case '3':
        cout << "anda memesan Nasi ikan kakap" << endl;
        harga1 = 20000;
        break;
    case '4':
        cout << "anda memesan Nasi gulai ayam" << endl;
        harga1 = 18000;
        break;
    case '5':
        cout << "anda memesan Nasi ayam balado" << endl;
        harga1 = 17000;
        break;
    default:
            cout << "tidak ada dimenu" << endl;
    }
        cout << "silahkan inputkan menu minuman" << endl;
        cin >> nomenuMinuman;

    switch (nomenuMinuman){
    case '1':
        cout << "anda memesan Teh manis panas" << endl;
        harga2 = 5000;
        break;
    case '2':
        cout << "anda memesan Es kelapa muda" << endl;
        harga2 = 8000;
        break;
    case '3':
        cout << "anda memesan Es jeruk manis" << endl;
        harga2 = 7000;
        break;
    case '4':
        cout << "anda memesan Jus markisa" << endl;
        harga2 = 10000;
        break;
    case '5':
        cout << "anda memesan Jus strawberry" << endl;
        harga2 = 10000;
        break;
    default:
            cout << "tidak ada dimenu" << endl;
    }

    cout << "============================" << endl;
    cout << "total harga yang harus anda bayar adalah: Rp" << harga1+harga2 << endl;
    return 0;
}
