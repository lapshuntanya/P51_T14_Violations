#include <iostream>

#include "Violation.h"
using namespace std;
#include "DateMac.h"
#include "Violation.h"

int main() {
    /*Date d1 = {1, 1, 2000};
    Date d2;// 0 0 0
    d2.getNowDate();

    d1.printDate();
    d2.printDate();*/

    Violation v1 = {{10, 12, 2025}, "Speed 200 km/h", 35000};

    Violation v2;
    v2.fillViolation(); // cin

    cout << "===================================\n";

    v1.printTableViolation();
    v2.printTableViolation();

    return 0;
}