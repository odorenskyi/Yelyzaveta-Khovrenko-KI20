#include <iostream>
#include <iomanip>
#include "moduleskhovrenko.h"
#include <locale.h>
#include <io.h>
#include <windows.h>
#include <wchar.h>
#include <limits>
#include <fcntl.h>
#include <cmath>

using namespace std;

wstring devInfo()
{
    wstring info = L"┌─────────────────────────────────────────────────────────────────────┐\n"
                    "│          Виконала студентка групи КБ-20 Ховренко Є.Д.©              │\n"
                    "└─────────────────────────────────────────────────────────────────────┘\n";
    return info;
}

bool Logical(wchar_t a, wchar_t b)
{
    return a+1>abs(b-2);
}

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _wsetlocale(LC_ALL,L"");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    wcout << devInfo() << endl;

    wchar_t a, b;
    wcout << L"Введіть символ а: ";
    wcin >> a;
    wcin.clear();
    wcin.ignore(numeric_limits <streamsize> :: max(), '\n');
    wcout << L"Введіть символ b: ";
    wcin >> b;
    wcin.clear();
    wcin.ignore(numeric_limits <streamsize> :: max(), '\n');
    wcout << L"Результат логічного виразу a+1>|b-2| дорівнює " << boolalpha << Logical(a, b) << endl << endl;

    int x, y, z;
    do
    {
        wcout << L"Введіть число х: ";
        wcin >> x;
        if (x<5)
            wcout << L"Некоректно введені дані, число повинно бути цілим та більшим за 4. Спробуйте ще раз!" << endl;
    }while (x<5);
    wcout << L"х у шістнадцятковій системі числення: " << hex << x << dec << endl;
    wcout << L"Введіть число у: ";
    wcin >> y;
    wcout << L"y у шістнадцятковій системі числення: " << hex << y << dec << endl;
    wcout << L"Введіть число z: ";
    wcin >> z;
    wcout << L"z у шістнадцятковій системі числення: " << hex << z << dec << endl;
    wcout << L"S = " << s_calculation(x, z);

    wcin.clear();
    wcin.ignore(numeric_limits <streamsize> :: max(), '\n');
    wcin.get();
    wcin.get();
    return 0;
}
