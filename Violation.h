#pragma once
#include "DateMac.h"

struct Violation {
    Date date_viol; // 0 0 0   Дата порушення
    char info[100] = "";  //Опис порушення
    float fine = 0; //Сума штрафу

    void fillViolation() {
        cout << "Input date (dd mm yyyy): ";
        cin >> date_viol.day >> date_viol.month >> date_viol.year;
        //date_viol.fillDate();

        cout << "Input info: ";
        cin.getline(info, 100); // !!!!!!!!!!!!!!!

        cout << "Input fine: ";
        cin >> fine;
    }

    void printViolation() {
        cout << "\t Date: " << date_viol.toString() << endl;
        cout << "\t Info: " << info << endl;
        cout << "\t Fine: " << fine << " UAH \n\n";
    }
};

