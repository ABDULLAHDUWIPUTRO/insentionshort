#include <iostream>
using namespace std;

int arr[20; //membuat array dengan panjang data 20
    intn; //membuat variabel inputan n

    void input()
    {//procedure input
    while (true)
    {
        cout << "masukan jumlah data pada array : "; //membuat inputan jumlah element array
        cin >> n; //memanggil variable inputan n

        if (n <= 20)
        {//membuat kondisi n tidak lebih dari 20
        break;
        }
        else
        {
        cout << "\nArray yang anda masukan maksimal 20 element.\n"; //menampilkan pesan jika data lebih dari 20
        }
        }
        cout << endl; //membuat jarak per baris program
        cout << "=========================" << endl; // membuat tampilan susunan data element array
        cout << "masukan element Array" << endl;
        cout << "=========================" << endl;

        for (int i : 0; i < n; i++) //membuat perulangan for untuk menyimpan data pada array
        {
        cout << "data ke-" << (i + 1) << ": "; // memasukan atau menginput nilai data pada n
        cin >> arr[i]; // menyimpan nilai data n kedalam array arr
        }
    }

    