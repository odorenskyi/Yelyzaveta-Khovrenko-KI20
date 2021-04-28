#include <iostream>
#include "moduleskhovrenko.h"
#include <locale.h>
#include <io.h>
#include <windows.h>
#include <wchar.h>
#include <limits>
#include <fcntl.h>
#include <cmath>

using namespace std;

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _wsetlocale(LC_ALL,L"");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float x[7] = {9,5,12,6,7,8,10};
    float z[7] = {1,5,3,6,7,12,10};
    double result = 0, s = 0;
    wstring message = L"";


    for (int i=0; i<7; i++)
    {
        result = pow(3*sin(sqrt((12*pow(x[i],2))/log10(x[i]-3))),2)+(z[i]/2);
        s = s_calculation(x[i],z[i]);
        if (fabs(result - s) < 0.00001)
           message = L"Passed! ";
        else
           message = L"Failed!!! ";
        wcout << L"Test case № " << i+1 << L"  іs  " << message <<  endl;

    }
    return 0;
}
