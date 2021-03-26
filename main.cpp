//Программа с функцией для вычисления суммы нечетных натуральных чисел
#include <iostream>
using namespace std;
int main ()
{
    int kol;
    int i;
    int sum = 0;
    cout << " Vvedite colichestvo chisel ";
    cin >> kol;
    if (kol <= 0)
    {
        cout << " Oshibka";
        return 0;
    }
    if ( kol %2 == 0)
    {
    cout << " Kolichestvo nechetnix chisel iz nix: " << kol / 2 << endl;
    }
else
        cout << " Kolichestvo nechetnix chisel iz nix: " << (kol / 2) + 1 << endl;

    for ( i=1; i <= kol; i+=2)
    {

       sum = sum + i;
    }
    cout << " Summa ravna: " << sum;
}
