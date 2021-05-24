#include <iostream>
#include "moduleskhovrenko.h"
#include <limits>
#include <locale.h>

using namespace std;

void j_s_calsulation()
{
    int x, y, z;
    do
    {
        cout << "Введiть число х: ";
        cin >> x;
        if (x<5)
                 cout << "Некоректно введенi данi, число повинно бути цiлим та бiльшим за 4. Спробуйте ще раз!" << endl;
    }while (x<5);
    cout << "х у шiстнадцятковiй системi числення: " << hex << x << dec << endl;
    cout << "Введiть число у: ";
    cin >> y;
    cout << "y у шiстнадцятковiй системi числення: " << hex << y << dec << endl;
    cout << "Введiть число z: ";
    cin >> z;
    cout << "z у шiстнадцятковiй системi числення: " << hex << z << dec << endl;
    cout << "S = " << s_calculation(x, z);
}

void z_task_9_1()
{
    double price;
    cout << "Введiть суму покупки у гривнях: ";
    cin >> price;
    cout << "Кiлькiсть нарахованих бонусiв: " << Bonus9_1(price).bonus << "\nСума до сплати: " << Bonus9_1(price).pay << " грн." << endl;
}

void x_task_9_2()
{
    float t;
    cout << "Введiть кiлькiсть градусiв за шкалою Фаренгейта: ";
    cin >> t;
    cout << "Конвертованi градуси у шкалу Цельсiя: " << Temperature9_2(t) << endl;
}

void c_task_9_3()
{
    int n;
    cout << "Введiть цiле число від 0 до 51950: ";
    do
    {
        cin >> n;
        if (n>51950 || n<0)
                 cout << "Некоректно введенi данi, число повинно бути цiлим та від 0 до 51950. Спробуйте ще раз!" << endl;
    }while (n>51950 || n<0);
   if((n>>4)&1)
        cout <<"Кiлькiсть двiйкових одиниць у числi "<< n << ": " << Binary9_3(n) << endl;
    else
        cout <<"Кiлькiсть двiйкових нулiв у числi "<< n << ": " << Binary9_3(n) << endl;
}

int main()
{
    char *locale=setlocale(LC_ALL, "");
    cout << "Виконала студентка групи КБ-20 Ховренко Є.Д.\n"
            "--------------------------------------------\n" << endl;

    char symbol;
    char command;
    do
    {
    cout << "\nВведiть символ (латиницею):\n"
            "j - для виклику функцiї s_calsulation;\n"
            "z - щоб дiзнатись кiлькiсть нарахованих бонусiв та суму до сплати (функцiя до задачi 9.1);\n"
            "x - щоб конвертувати градуси за шкалою Фаренгейта у шкалу Цельсiя (функцiя до задачi 9.2);\n"
            "с - щоб дiзнатись кiлькiсть двійкових одиниць або нулiв у числi (функцiя до задачi 9.3);\n" << endl;
    cin >> command;
    switch (command)
    {
        case 'j':
            j_s_calsulation();
            break;
        case 'z':
            z_task_9_1();
            break;
        case 'х':
        case 'x':
            x_task_9_2();
            break;
        case 'c':
        case 'с':
            c_task_9_3();
            break;
        default: cout << "\a";
    }
    cout << "\nДля виходу з програми введiть v, або V, або A, iнакше повториться виконання програми." << endl;
    cin >> symbol;
    }while (!(symbol == 'v' || symbol == 'V' || symbol == 'A'));

    return 0;
}
