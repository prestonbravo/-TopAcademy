//Задание 1.
#include <iostream>

int main() {
    int num;
    std::cout << "Введите число больше нуля: ";
    std::cin >> num;

    if (num < 1) {
        std::cout << "Число должно быть больше нуля!" << std::endl;
        return 1;
    }

    for (int i = num; i > 0; i /= 10) {
        int digit = i % 10;
        std::cout << digit << ' ';
    }
    std::cout << std::endl;

    return 0;
}
//Задание 2.
#include <iostream>

int main() {
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Число должно быть неотрицательным!" << std::endl;
        return 1;
    }

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    std::cout << "Сумма цифр равна " << sum << std::endl;

    return 0;
}
//Задание 3.
#include <iostream>

int calculateTotalDistance(int days) {
    int distance = 15; // Расстояние первого дня
    int totalDistance = distance; // Обозначим общеее расстояние

    for (int i = 2; i <= days; i++) {
        distance += 2; // Увеличиваем каждый день на 2 см
        totalDistance += distance; // Добавим пройденное расстояние к расстоянию за день
    }

    return totalDistance;
}

int main() {
    int days;

    // ВВОД
    std::cout << "Введите количество дней: ";
    std::cin >> days;

    // Высчитать расстояние за введеное число дней
    int totalDistance = calculateTotalDistance(days);

    // Вывод 
    std::cout << "Улитка ползла-ползла и проползла за " << days << " дня: " << totalDistance << " см" << std::endl;

    return 0;
}
//Задание 4.
#include <iostream>
using namespace std;

int main() {
    int result = 0;

    for (int i = 0; i < 9; i++) {
        cout << "Введите 1 (орёл) или 0 (решка): ";
        int coin;
        cin >> coin;

        result += coin;
    }

    if (result % 2 == 0) {
        cout << "Решение положительное.";
    }
    else {
        cout << "Решение отрицательное.";
    }

    return 0;
}
//Задания 5 и 6 

#include <iostream>
#include <iomanip>

// Проверяем високосный ли введеный год
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Получаем количество дней в месяце
int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        return 31;
    }
}

// Выводим календарь
void displayCalendar(int month, int year, int startDay) {
    int daysInMonth = getDaysInMonth(month, year);

    // Месяц и год
    std::cout << "Календарь на  " << month << "/" << year << std::endl;

    // Выводим дни недели
    std::cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun" << std::endl;

    // Разбиваем пустые клетки
    for (int i = 0; i < startDay; i++) {
        std::cout << "\t";
    }

    // дни месяца
    for (int day = 1; day <= daysInMonth; day++) {
        std::cout << day << "\t";

        // нужна ли новая строка
        if ((startDay + day) % 7 == 0) {
            std::cout << std::endl;
        }
    }

    // счиатаем выходные дни (сб и вс)
    int weekends = 0;
    for (int day = 1; day <= daysInMonth; day++) {
        int dayOfWeek = (startDay + day - 1) % 7;
        if (dayOfWeek == 5 || dayOfWeek == 6) {
            weekends++;
        }
    }

    std::cout << "\nВыходных дней в этом месяце: " << weekends << std::endl;
}

int main() {
    int month, year, startDay;

    // Задаем условия ввода
    std::cout << "Введите номер месяца (1-12): ";
    std::cin >> month;

    std::cout << "Введите год в формате ГГГГ: ";
    std::cin >> year;

    std::cout << "С какого дня недели начинается месяц? (введите число 0-6 , 0 = понедельник): ";
    std::cin >> startDay;

    displayCalendar(month, year, startDay);

    return 0;
}



