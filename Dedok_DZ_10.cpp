#include <iostream>
using namespace std;
//К заданию 3(Task_3)
bool isValidTime(int hours, int minutes, int seconds) {
    return (hours >= 0 && hours <= 23) &&
        (minutes >= 0 && minutes <= 59) &&
        (seconds >= 0 && seconds <= 59);
}
/////////////////////////////////////////
////////////////////////////////////////

//К заданию 4(Task_4)
bool isLuckyTicket(int ticketNumber) {
    int digit1 = ticketNumber / 100000;
    int digit2 = (ticketNumber / 10000) % 10;
    int digit3 = (ticketNumber / 1000) % 10;
    int digit4 = (ticketNumber / 100) % 10;
    int digit5 = (ticketNumber / 10) % 10;
    int digit6 = ticketNumber % 10;

    int sumFirstThree = digit1 + digit2 + digit3;
    int sumLastThree = digit4 + digit5 + digit6;

    return sumFirstThree == sumLastThree;
}

int main() {
    setlocale(LC_ALL, "RUS");

    //Task_1
    double x1;
    double y1;
    double x2;
    double y2;

    cout << "Введите координаты первой точки(x1,y1)\n";
    cin >> x1;
    cin >> y1;

    cout << "Введите координаты второй точки(x2,y2)\n";
    cin >> x2;
    cin >> y2;

    if(y1 == y2) {
        cout << "Прямая параллельна оси ординат." << "\n";
    }
    else if (x1 == x2) {
        cout << "Прямая параллельна оси абсцисс." << "\n";
    }
    else {
        cout << "Прямая не параллельна ни оси ординат, ни оси абсцисс." << "\n";
    }
    cout << "\n";
    
    //Task_2
    double number;
    cout << "Введите число: ";
    cin >> number;

    int integerPart = static_cast<int>(number);

    if (number != integerPart) {
        cout << "Число имеет вещественную часть." << "\n";
    }
    else {
        cout << "Число не имеет вещественной части." << "\n";
    }
    cout << "\n";

    //Task_3
    int hours, minutes, seconds;
    cout << "Введите текущее время (часы минуты секунды): ";
    cin >> hours >> minutes >> seconds;
    if(isValidTime(hours, minutes, seconds)) {
        cout << "Время введено корректно." << "\n";
    }
     else {
     cout << "Некорректное время!" << "\n";
    }
    cout << "\n";

    //Task_4
    int ticketNumber;
    cout << "Введите шестизначный номер трамвайного билета: ";
    cin >> ticketNumber;

    if (ticketNumber >= 0 && ticketNumber <= 999999) {
        if (isLuckyTicket(ticketNumber)) {
            cout << "Билет является счастливым!" << "\n";
        }
        else {
            cout << "Билет не является счастливым." << "\n";
        }
    }
    else {
        cout << "Некорректный номер билета!" << "\n";
    }
}