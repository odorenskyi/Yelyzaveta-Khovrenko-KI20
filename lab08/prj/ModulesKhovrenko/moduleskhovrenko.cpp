#include "moduleskhovrenko.h"
#include <cmath>
#include <fstream>
#include <string>
#include <ctime>
#include <bitset>

using namespace std;

double s_calculation(float x, float z)
{
    double S = pow(3*sin(sqrt((12*pow(x,2))/log10(x-3))),2)+(z/2);
    return S;
}

task_9_1 Bonus9_1(double price)
{
    task_9_1 task;
if (price < 100)
        task.bonus = 0;
    else
        if (price>=100 && price<200)
        task.bonus = 1;
    else
        if (price>=200 && price<500)
        task.bonus = 5;
    else
        if (price>=500 && price<1000)
        task.bonus = 10;
    else
        if (price>=1000 && price<2500)
        task.bonus = 50;
    else
        if (price>=2500 && price<5000)
        task.bonus = 150;
    else
        task.bonus = 300;
   task.pay = price - task.bonus*0.25;
   return task;
}

float Temperature9_2(float t)
   {
       return (5*(t-32))/9;
   }

int Binary9_3(int N)
{
    int result = 0;
    bool flag = false;
    for (int n=sizeof(int)*8-1; n>-1; n--)
    {
        if((N>>n)&1)
            if(!flag)
                flag = true;
        if (flag)
        {
            if((N>>4)&1)
                result += ((N>>n)&1)? 1 : 0;
            else
                result += ((N>>n)&1)? 0 : 1;
        }
    }
    return result;
}

void task_10_1(char *OutFile,char *InFile)
{
   ofstream outFile;
   outFile.open(OutFile);
   outFile << "Розробниця: Ховренко Є.Д.\n"
              "м. Кропивницький, Україна\n"
              "ЦНТУ, 2021\n";

   ifstream inFile;
   inFile.open(InFile);
   string fromFile;
   inFile >> fromFile;
   inFile.close();
   int amount = 0;
   for (int i=0; i<fromFile.length(); i++)
   {
       if (fromFile[i] == 'А' || fromFile[i] == 'а' || fromFile[i] == 'Е' || fromFile[i] == 'е' || fromFile[i] == 'Є' || fromFile[i] == 'є' || fromFile[i] == 'І' || fromFile[i] == 'і' || fromFile[i] == 'Ї' || fromFile[i] == 'ї' || fromFile[i] == 'О' || fromFile[i] == 'о' || fromFile[i] == 'У' || fromFile[i] == 'у' || fromFile[i] == 'Ю' || fromFile[i] == 'ю' || fromFile[i] == 'И' || fromFile[i] == 'и')
       amount++;
   }
   outFile << "\nКількість голосних літер у слові \"" << fromFile << "\": " << amount << endl;

   string kraplina = "До щастя не пускає лінощів орава."
                     "У чім воно - ніхто не знає до пуття."
                     "Навчитись радісно робити кожну справу -"
                     "Найперше правило щасливого життя.";

    if(kraplina.find(fromFile) != string::npos)
        outFile << "Cлово \"" << fromFile << "\" є в краплинці Віталія Іващенка." << endl;
    else
        outFile << "Cлово \"" << fromFile << "\" відсутнє в краплинці Віталія Іващенка." << endl;
    outFile.close();
}

void task_10_2(char *OutInFile)
{
   ifstream inFile;
   inFile.open(OutInFile);
   string fromFile;
   inFile >> fromFile;
   inFile.close();
   ofstream in_File;
   in_File.open(OutInFile, ios::app);
   int amoun = 0;

       for (int i=0; i<fromFile.length(); i++)
   {
       if (!(fromFile[i] == 'А' || fromFile[i] == 'а' || fromFile[i] == 'Е' || fromFile[i] == 'е' || fromFile[i] == 'Є' || fromFile[i] == 'є' || fromFile[i] == 'І' || fromFile[i] == 'і' || fromFile[i] == 'Ї' || fromFile[i] == 'ї' || fromFile[i] == 'О' || fromFile[i] == 'о' || fromFile[i] == 'У' || fromFile[i] == 'у' || fromFile[i] == 'Ю' || fromFile[i] == 'ю' || fromFile[i] == 'И' || fromFile[i] == 'и'))
       amoun++;
   }
    in_File << "\nКількість приголосних літер у слові: " << amoun << endl;
    time_t times = time(NULL);
    in_File << "Час дозапису :"  << asctime (localtime( &times )) << endl;
    in_File.close();

}

void task_10_3(float x, float z, float b,char *OutFile)
{
   ofstream outFile;
   outFile.open(OutFile, ios::app);
   if (x>4)
        outFile << "\nРезультат виконання функції s_calculation: S = " << s_calculation(x, z) << endl;
    else
        outFile << "\nРезультат виконання функції s_calculation неможливо обчислити (х повинно бути більшим за 4)!" << endl;
   if (b>0)
        outFile<< "Число " << b << " у двійковому коді: " << bitset<32>(b) << endl;
    else
        outFile<< "Число " << b << " не натуральне." << endl;
   outFile.close();
}
