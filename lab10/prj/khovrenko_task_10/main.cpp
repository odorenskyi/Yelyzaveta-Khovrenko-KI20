#include <iostream>
#include "moduleskhovrenko.h"
#include <fstream>
#include <string>
#include <windows.h>
#include <locale.h>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char in_file[] = "InPut.txt";
    char out_file[] = "OutPut.txt";
    cout << "Введіть слово українською мовою: ";
    string slovo;
    cin >> slovo;
    ofstream in_slovo("InPut.txt");
    in_slovo << slovo;
    in_slovo.close();
    task_10_1(out_file, in_file);
    task_10_2(in_file);
    float x, y, z, b;
    cout << "Введіть число х:";
    cin >> x;
    cout << "Введіть число y:";
    cin >> y;
    cout << "Введіть число z:";
    cin >> z;
    cout << "Введіть число b:";
    cin >> b;
    task_10_3(x, z, b, out_file);
    cout << "Перевірте вміст файлів \"InPut.txt\" та \"OutPut.txt\"!";
    cin.get();
    cin.get();
    return 0;
}
