#include <iostream>

#include "Violation.h"
using namespace std;
#include "DateMac.h"
#include "Violation.h"
#include "Driver.h"
int main() {
    /*Date d1 = {1, 1, 2000};
    Date d2;// 0 0 0
    d2.getNowDate();

    d1.printDate();
    d2.printDate();*/

    /*Violation v1 = {{10, 12, 2025}, "Speed 200 km/h", 35000};

    Violation v2;
    v2.fillViolation(); // cin

    cout << "===================================\n";

    v1.printTableViolation();
    v2.printTableViolation();*/


    Driver d1 = {"Pupkin Anton", "AX1234AX", 3, new Violation[3] {
        {{10, 12, 2025}, "Speed 200 km/h", 35000},
        {{9, 12, 2025}, "Speed 200 km/h", 0},
        {{11, 12, 2025}, "Parking", 5000}
    }};

    //d1.addViolation();
    cout << "------------------------------------------\n";
    d1.printDriver();
    d1.showActiveViolations();

    d1.delViolations();
    d1.printDriver();

    return 0;
}