#include "pch.h"
#include "Item.h"
#include "Spisok.h"
#include "Zayvka.h"
#include<iostream>
#include <fstream>
#include<string>

using namespace std;



int main()
{
    setlocale(LC_ALL, "rus");
    Spisok s;
    s.Add(Zayvka("MSK", 1, "Dasha", "14.06"));
    s.Add(Zayvka("MSK", 2, "Dasha.S", "15.06"));
    s.Add(Zayvka("MSK", 3, "Dasha.A", "16.06"));
    s.Add(Zayvka("ASN", 4, "Dasha.A", "30.06"));
    s.Add(Zayvka("MSK", 5, "Dasha.A", "1.07"));
    s.Add(Zayvka("SCH", 6, "Dasha.A", "4.08"));
    s.Print();
    int n;
    const char* F = "D:\\add.txt";
    for (int j = 0; j < 100000; j++) {
        cout << "Меню:" << endl;
        cout << "Введите 1, чтобы вывести весь список;" << endl;
        cout << "Введите 2, чтобы вывести заявки по заданным номеру и дате рейса;" << endl;
        cout << "Введите 3, чтобы добавить заявки;" << endl;
        cout << "Введите 4, чтобы удалить заявку по индексу;" << endl;
        cout << "Введите 5, чтобы выйти." << endl;
        cin >> n;
        if (n == 1) {
            s.Print();
        }
        if (n == 2) {
            cout << "Введите номер и дату рейса" << endl;
            int x;
            string da;
            cin >> x;
            cin >> da;
            s.SpecPrint(x, da);
        }
        if (n == 3) {
            cout << "Введите город прибытия рейса" << endl;
            string town;
            cin >> town;
            cout << "Введите номер рейса" << endl;
            int x;
            cin >> x;
            cout << "Введите Ф.И.О пассажира" << endl;
            string fio;
            cin >> fio;
            cout << "Введите дату рейса" << endl;
            string da;
            cin >> da;
            Zayvka T1(town, x, fio, da);
            s.Add(T1);

        }
        if (n == 4) {
            cout << "Введите индекс(номер в списке) заявки" << endl;
            int i;
            cin >> i;
            s.Remove(i);
        }
        if (n == 5)
            break;
    }
    system("pause");
    return 0;
}