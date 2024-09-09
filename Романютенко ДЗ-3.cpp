//������� 1.
#include <iostream>

int main() {
    int num;
    std::cout << "������� ����� ������ ����: ";
    std::cin >> num;

    if (num < 1) {
        std::cout << "����� ������ ���� ������ ����!" << std::endl;
        return 1;
    }

    for (int i = num; i > 0; i /= 10) {
        int digit = i % 10;
        std::cout << digit << ' ';
    }
    std::cout << std::endl;

    return 0;
}
//������� 2.
#include <iostream>

int main() {
    int num;
    std::cout << "������� �����: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "����� ������ ���� ���������������!" << std::endl;
        return 1;
    }

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    std::cout << "����� ���� ����� " << sum << std::endl;

    return 0;
}
//������� 3.
#include <iostream>

int calculateTotalDistance(int days) {
    int distance = 15; // ���������� ������� ���
    int totalDistance = distance; // ��������� ������ ����������

    for (int i = 2; i <= days; i++) {
        distance += 2; // ����������� ������ ���� �� 2 ��
        totalDistance += distance; // ������� ���������� ���������� � ���������� �� ����
    }

    return totalDistance;
}

int main() {
    int days;

    // ����
    std::cout << "������� ���������� ����: ";
    std::cin >> days;

    // ��������� ���������� �� �������� ����� ����
    int totalDistance = calculateTotalDistance(days);

    // ����� 
    std::cout << "������ ������-������ � ��������� �� " << days << " ���: " << totalDistance << " ��" << std::endl;

    return 0;
}
//������� 4.
#include <iostream>
using namespace std;

int main() {
    int result = 0;

    for (int i = 0; i < 9; i++) {
        cout << "������� 1 (���) ��� 0 (�����): ";
        int coin;
        cin >> coin;

        result += coin;
    }

    if (result % 2 == 0) {
        cout << "������� �������������.";
    }
    else {
        cout << "������� �������������.";
    }

    return 0;
}
//������� 5 � 6 

#include <iostream>
#include <iomanip>

// ��������� ���������� �� �������� ���
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// �������� ���������� ���� � ������
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

// ������� ���������
void displayCalendar(int month, int year, int startDay) {
    int daysInMonth = getDaysInMonth(month, year);

    // ����� � ���
    std::cout << "��������� ��  " << month << "/" << year << std::endl;

    // ������� ��� ������
    std::cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun" << std::endl;

    // ��������� ������ ������
    for (int i = 0; i < startDay; i++) {
        std::cout << "\t";
    }

    // ��� ������
    for (int day = 1; day <= daysInMonth; day++) {
        std::cout << day << "\t";

        // ����� �� ����� ������
        if ((startDay + day) % 7 == 0) {
            std::cout << std::endl;
        }
    }

    // �������� �������� ��� (�� � ��)
    int weekends = 0;
    for (int day = 1; day <= daysInMonth; day++) {
        int dayOfWeek = (startDay + day - 1) % 7;
        if (dayOfWeek == 5 || dayOfWeek == 6) {
            weekends++;
        }
    }

    std::cout << "\n�������� ���� � ���� ������: " << weekends << std::endl;
}

int main() {
    int month, year, startDay;

    // ������ ������� �����
    std::cout << "������� ����� ������ (1-12): ";
    std::cin >> month;

    std::cout << "������� ��� � ������� ����: ";
    std::cin >> year;

    std::cout << "� ������ ��� ������ ���������� �����? (������� ����� 0-6 , 0 = �����������): ";
    std::cin >> startDay;

    displayCalendar(month, year, startDay);

    return 0;
}



