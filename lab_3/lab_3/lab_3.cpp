#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");
    int n, number_capacitors;
    double capacity, C=0;
    cout << "\t\tРозрахунок ємностi паралельно та послiдовно увiмкнених конденсаторiв"<<endl;
    cout << "Виберiть схему увiмкнення конденсаторiв" << endl;
    cout << "1) Схема паралельно увiмкнених конденсаторiв (натиснiть 1)" << endl;
    cout << "2) Схема послiдовно увiмкнених конденсаторiв (натиснiть 2)" << endl;
    do
    {
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Введiть кiлькiсть конденсаторiв: " << endl;
            cin >> number_capacitors;
            for (int i = 1; i <= number_capacitors; i++)
            {
                cout << "Введiть ємнiсть " << i << "-го конденсатора:";
                cin >> capacity;
                C = C + 1/capacity;
            }
            cout << "Загальна ємнiсть послiдовно з'єднаних конднсаторiв = " << 1/C << " Ф";
            break;
        case 2:
            cout << "Введiть кiлькiсть конденсаторiв: "<<endl;
            cin >> number_capacitors;
            for (int i = 1; i <= number_capacitors; i++)
            {
                cout << "Введiть ємнiсть " << i << "-го конденсатора";
                cin >> capacity;
                C = C + capacity;
            }
            cout << "Загальна ємнiсть послiдовно з'єднаних конднсаторiв = " << C<<" Ф";

            break;
        default:
            cout << "Введiть правильну нумерацiю";
        } 
    }
    while (n < 1 || n>2);
}

