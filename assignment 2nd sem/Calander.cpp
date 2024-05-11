#include <iostream>
#include <iomanip>

int main() {
    int year, month;

    std::cout << "Enter year: ";
    std::cin >> year;

    std::cout << "Enter month (1-12): ";
    std::cin >> month;

    int daysInMonth;
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    int startDay = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    for (int i = 1; i < month; i++) {
        if (i == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                startDay += 29;
            } else {
                startDay += 28;
            }
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            startDay += 30;
        } else {
            startDay += 31;
        }
    }
    startDay %= 7;

    std::cout << "---------------------------" << std::endl;
    std::cout << "        " << std::setw(4) << year << "         " << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << " Sun Mon Tue Wed Thu Fri Sat" << std::endl;
    std::cout << "---------------------------" << std::endl;

    for (int i = 0; i < startDay; i++) {
        std::cout << "    ";
    }

    for (int day = 1; day <= daysInMonth; day++) {
        std::cout << std::setw(4) << day;

        if ((startDay + day) % 7 == 0) {
            std::cout << std::endl;
        }
    }

    std::cout << std::endl << "---------------------------" << std::endl;

    return 0;
}