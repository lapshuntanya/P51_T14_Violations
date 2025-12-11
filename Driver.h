#pragma once
#include "Violation.h"
#include "ArrayTemplate.h"

struct Driver {
    char name[100] = "";            // Імʼя водія
    char carNumber[12] = "";        //Номер авто
    int sizeViol = 0;               //Розмір масиву порушень
    Violation* arrViol = nullptr;    //Масив порушень


    void fillDriver() {
        cout << "Input name: ";
        cin.getline(name, 100); //!!!!!!!!!!!
        cout << "Input car`s number: ";
        cin >> carNumber;

        sizeViol = 1; // Встановлюємо кількість порушень 1
        arrViol = new Violation[1]; // Створюємо масив на 1 клітинку

        arrViol[0].fillViolation(); //Заповнюємо інформацію по порушенню
    }

    void printDriver() {
        cout << "Driver: " << name << endl;
        cout << "Number: " << carNumber << endl;
        cout << "Violations: " << sizeViol << endl;
        for (int i = 0; i < sizeViol; i++) {
            arrViol[i].printTableViolation();
        }
        cout << endl;
    }

};