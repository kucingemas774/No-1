#include <iostream>
#include <string>

#include "Server/Server.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    char lagi;
    do
    {
    Operator:
        system("cls");
        cout << "---------Kalkulator Bangun Datar---------" << endl;
        cout << "1.Luas : " << endl;
        cout << "2.Keliling : " << endl;
        cout << " Pilih [ 1 / 2 ] : ";
        int pil;
        cin >> pil;
        if (pil == 1)
        {
        MainMenu:
            system("cls");
            cout << "---------Kalkulator Bangun Datar---------" << endl;
            cout << "1.Persegi" << endl;
            cout << "2.Persegi Panjang" << endl;
            cout << "3.Lingkaran" << endl;
            cout << "4.Trapesium" << endl;
            cout << "5.Belah Ketupat" << endl;
            cout << "6.Kembali " << endl;
            cout << "Pilih [ 1 / 2 / 3 / 4 / 5 / 6 ]: ";
            cin >> pil;
            if (pil == 1)
            {
                Persegi Obj1;
                Obj1.luasPersegi();
                Obj1.Display();
            }
            else if (pil == 2)
            {
                PersegiPanjang Obj2;
                Obj2.luasPersegiPanjang();
                Obj2.Display();
            }
            else if (pil == 3)
            {
                Lingkaran Obj3;
                Obj3.luasLingkaran();
                Obj3.Display();
            }
            else if (pil == 4)
            {
                Trapesium Obj4;
                Obj4.LuasTrapesium();
                Obj4.Display();
            }
            else if (pil == 5)
            {
                BelahKetupat Obj5;
                Obj5.LuasBelahKetupat();
                Obj5.Display();
            }
            else if (pil == 6)
            {
                goto Operator;
            }
            else
            {
                goto MainMenu;
            }
        }
        else if (pil == 2)
        {
        MainMenu1:
            system("cls");
            cout << "---------Kalkulator Bangun Datar---------" << endl;
            cout << "1.Persegi" << endl;
            cout << "2.Persegi Panjang" << endl;
            cout << "3.Lingkaran" << endl;
            cout << "4.Trapesium" << endl;
            cout << "5.Belah Ketupat" << endl;
            cout << "6.Kembali " << endl;

            cout << "Pilih [ 1 / 2 / 3 / 4 / 5 / 6 ]: ";
            cin >> pil;
            if (pil == 1)
            {
                Persegi Obj1;
                Obj1.InputKeliling();
                Obj1.displayK();
            }
            else if (pil == 2)
            {
                PersegiPanjang Obj2;
                Obj2.InputanKeliling();
                Obj2.DisplayK();
            }
            else if (pil == 3)
            {
                Lingkaran Obj3;
                Obj3.InputanKeliling();
                Obj3.DisplayK();
            }
            else if (pil == 4)
            {
                Trapesium Obj4;
                Obj4.input();
                Obj4.DisplayK();
            }
            else if (pil == 5)
            {
                BelahKetupat Obj5;
                Obj5.Inputan();
                Obj5.DisplayK();
            }
            else if (pil == 6)
            {
                goto Operator;
            }

            else
            {
                goto MainMenu1;
            }
        }
        else
        {
            goto Operator;
        }

        cout << endl;

        cout << "Hitung Lagi ?? [Y / N]";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');
}
