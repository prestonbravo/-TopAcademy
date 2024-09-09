//Çàäàíèå 1.
#include <iostream>

int main() {
    int num;
    std::cout << "Ââåäèòå ÷èñëî áîëüøå íóëÿ: ";
    std::cin >> num;

    if (num < 1) {
        std::cout << "×èñëî äîëæíî áûòü áîëüøå íóëÿ!" << std::endl;
        return 1;
    }

    for (int i = num; i > 0; i /= 10) {
        int digit = i % 10;
        std::cout << digit << ' ';
    }
    std::cout << std::endl;

    return 0;
}
//Çàäàíèå 2.
#include <iostream>

int main() {
    int num;
    std::cout << "Ââåäèòå ÷èñëî: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "×èñëî äîëæíî áûòü íåîòðèöàòåëüíûì!" << std::endl;
        return 1;
    }

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    std::cout << "Ñóììà öèôð ðàâíà " << sum << std::endl;

    return 0;
}
//Çàäàíèå 3.
#include <iostream>

int calculateTotalDistance(int days) {
    int distance = 15; // Ðàññòîÿíèå ïåðâîãî äíÿ
    int totalDistance = distance; // Îáîçíà÷èì îáùååå ðàññòîÿíèå

    for (int i = 2; i <= days; i++) {
        distance += 2; // Óâåëè÷èâàåì êàæäûé äåíü íà 2 ñì
        totalDistance += distance; // Äîáàâèì ïðîéäåííîå ðàññòîÿíèå ê ðàññòîÿíèþ çà äåíü
    }

    return totalDistance;
}

int main() {
    int days;

    // ÂÂÎÄ
    std::cout << "Ââåäèòå êîëè÷åñòâî äíåé: ";
    std::cin >> days;

    // Âûñ÷èòàòü ðàññòîÿíèå çà ââåäåíîå ÷èñëî äíåé
    int totalDistance = calculateTotalDistance(days);

    // Âûâîä 
    std::cout << "Óëèòêà ïîëçëà-ïîëçëà è ïðîïîëçëà çà " << days << " äíÿ: " << totalDistance << " ñì" << std::endl;

    return 0;
}
//Çàäàíèå 4.
#include <iostream>
using namespace std;

int main() {
    int result = 0;

    for (int i = 0; i < 9; i++) {
        cout << "Ââåäèòå 1 (îð¸ë) èëè 0 (ðåøêà): ";
        int coin;
        cin >> coin;

        result += coin;
    }

    if (result % 2 == 0) {
        cout << "Ðåøåíèå ïîëîæèòåëüíîå.";
    }
    else {
        cout << "Ðåøåíèå îòðèöàòåëüíîå.";
    }

    return 0;
}
//Çàäàíèÿ 5 è 6 

#include <iostream>
#include <iomanip>

// Ïðîâåðÿåì âèñîêîñíûé ëè ââåäåíûé ãîä
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Ïîëó÷àåì êîëè÷åñòâî äíåé â ìåñÿöå
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

// Âûâîäèì êàëåíäàðü
void displayCalendar(int month, int year, int startDay) {
    int daysInMonth = getDaysInMonth(month, year);

    // Ìåñÿö è ãîä
    std::cout << "Êàëåíäàðü íà  " << month << "/" << year << std::endl;

    // Âûâîäèì äíè íåäåëè
    std::cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun" << std::endl;

    // Ðàçáèâàåì ïóñòûå êëåòêè
    for (int i = 0; i < startDay; i++) {
        std::cout << "\t";
    }

    // äíè ìåñÿöà
    for (int day = 1; day <= daysInMonth; day++) {
        std::cout << day << "\t";

        // íóæíà ëè íîâàÿ ñòðîêà
        if ((startDay + day) % 7 == 0) {
            std::cout << std::endl;
        }
    }

    // ñ÷èàòàåì âûõîäíûå äíè (ñá è âñ)
    int weekends = 0;
    for (int day = 1; day <= daysInMonth; day++) {
        int dayOfWeek = (startDay + day - 1) % 7;
        if (dayOfWeek == 5 || dayOfWeek == 6) {
            weekends++;
        }
    }

    std::cout << "\nÂûõîäíûõ äíåé â ýòîì ìåñÿöå: " << weekends << std::endl;
}

int main() {
    int month, year, startDay;

    // Çàäàåì óñëîâèÿ ââîäà
    std::cout << "Ââåäèòå íîìåð ìåñÿöà (1-12): ";
    std::cin >> month;

    std::cout << "Ââåäèòå ãîä â ôîðìàòå ÃÃÃÃ: ";
    std::cin >> year;

    std::cout << "Ñ êàêîãî äíÿ íåäåëè íà÷èíàåòñÿ ìåñÿö? (ââåäèòå ÷èñëî 0-6 , 0 = ïîíåäåëüíèê): ";
    std::cin >> startDay;

    displayCalendar(month, year, startDay);

    return 0;
}



