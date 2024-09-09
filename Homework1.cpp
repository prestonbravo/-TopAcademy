//Çàäàíèå 1.
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Instasamka - ÇÀ ÄÅÍÜÃÈ ÄÀ\n"
        << "ß âîîáùå äåëàþ, ÷òî õî÷ó (À)\n"
        << "Õî÷ó èìïëàíòû — çâîíþ âðà÷ó (Àëë¸)\n"
        << "Êòî ìåíÿ íå ëþáèò — ÿ âàñ íå ñëûøó (×¸?)\n"
        << "Âû ïðîñòî ìíå çàâèäóåòå, ÿ ìîë÷ó\n"
        << "ß íå ìîë÷ó, êîãäà ÿ õî÷ó\n"
        << "ß íå ïðîäàþñü, íî çà äåíüãè — äà (Äà)\n"
        << "Ìîé ïðîäþñåð ãîâîðèò: «Òû — ïîï-çâåçäà»\n"
        << "È êñòàòè, ìîé ïðîäþñåð — ýòî ìîé ìóæ, äà\n";

    return 0;
}
//Çàäàíèå 2.
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Êàæäûé" << "\n"
        << "\tÎõîòíèê" << "\n"
        << "\t\tÆåëàåò" << "\n"
        << "\t\t\tÇíàòü" << "\n"
        << "\t\t\t\t Ãäå" << "\n"
        << "\t\t\t\t\tÑèäèò" << "\n"
        << "\t\t\t\t\t\t\tÔàçàí" << "\n\n";

    return 0;
}

//Çàäàíèå 3.
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Ñíèìó êâàðòèðó!\n";
    << "Èùó êîìôîðòíîå æèëü¸ â õîðîøåì ðàéîíå.\n";
    << "Ìîé íîìåð òåëåôîíà: +7 (999) 999-99-99.\n";
    << "Çâîíèòü ñ 9:00 äî 21:00.\n";
    << "Â ëþáîå âðåìÿ. Îáðàùàòüñÿ ìîæíî â ìåññåíäæåðàõ.";
    return 0;
}

//Çàäàíèå 4.
#include <iostream>
using namespace std;

int main()
{
    double R0, R1, R2, R3;
    R1 = 2;
    R2 = 4;
    R3 = 8;

    // Âû÷èñëÿåì çíà÷åíèå R0
    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "Çíà÷åíèå R0: " << R0 << endl;

    return 0;
}

//Çàäàíèå 5. 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double L, R, S;
    const double PI = 3.14;

    // Ââîäèì äëèíó îêðóæíîñòè
    cout << "Ââåäèòå äëèíó îêðóæíîñòè: ";
    cin >> L;

    // Âû÷èñëÿåì ðàäèóñ îêðóæíîñòè
    R = L / (2 * PI);

    // Âû÷èñëÿåì ïëîùàäü êðóãà
    S = PI * pow(R, 2);

    cout << "Ðàäèóñ îêðóæíîñòè: " << R << endl;
    cout << "Ïëîùàäü êðóãà: " << S << endl;

    return 0;
}
//Çàäàíèå 6.
#include <iostream>
using namespace std;

int main()
{
    double v, a, t, s;
    cout << "Ââåäèòå ñêîðîñòü: ";
    cin >> v;
    cout << "Ââåäèòå óñêîðåíèå: ";
    cin >> a;
    cout << "Ââåäèòå âðåìÿ: ";
    cin >> t;

    // Âû÷èñëÿåì ïðîéäåííîå ðàññòîÿíèå
    s = v * t + (a * t * t) / 2;

    cout << "Ïðîéäåííîå ðàññòîÿíèå: " << s << endl;

    return 0;
}

//Çàäàíèå 7.
#include <iostream>
using namespace std;

int main()
{
    double distance_to_airport; // ðàññòîÿíèå äî àýðîïîðòà â êì
    double time_to_arrive; // âðåìÿ, çà êîòîðîå íóæíî äîåõàòü â ÷àñàõ
    double speed; // ñêîðîñòü, ñ êîòîðîé íóæíî åõàòü â êì/÷

    cout << "Ââåäèòå ðàññòîÿíèå äî àýðîïîðòà: ";
    cin >> distance_to_airport;

    cout << "Ââåäèòå âðåìÿ, çà êîòîðîå íóæíî äîåõàòü: ";
    cin >> time_to_arrive;

    speed = distance_to_airport / time_to_arrive;
    cout << "Âàì íóæíî åõàòü ñî ñêîðîñòüþ " << speed << " êì/÷.";

    return 0;
}

//Çàäàíèå 8.
#include <iostream>
using namespace std;

int main()
{
    int start_hour, start_minute, start_second; // âðåìÿ íà÷àëà ðàçãîâîðà â ôîðìàòå ××:ÌÌ:ÑÑ
    int end_hour, end_minute, end_second; // âðåìÿ çàâåðøåíèÿ ðàçãîâîðà â ôîðìàòå ××:ÌÌ:ÑÑ

    cout << "Ââåäèòå âðåìÿ íà÷àëà ðàçãîâîðà (××:ÌÌ:ÑÑ): ";
    cin >> start_hour >> start_minute >> start_second;

    cout << "Ââåäèòå âðåìÿ çàâåðøåíèÿ ðàçãîâîðà (××:ÌÌ:ÑÑ): ";
    cin >> end_hour >> end_minute >> end_second;

    // âû÷èñëÿåì ðàçíèöó âî âðåìåíè
    int total_seconds = (end_hour * 3600 + end_minute * 60 + end_second) - (start_hour * 3600 + start_minute * 60 + start_second);

    // âû÷èñëÿåì ñòîèìîñòü ðàçãîâîðà
    double cost = total_seconds * 0.3;

    cout << "Ñòîèìîñòü ðàçãîâîðà: " << cost << " ðóáëåé.";

    return 0;
}

//Çàäàíèå 9.
#include <iostream>
using namespace std;

int main() {
    int distance; // ðàññòîÿíèå â êì
    double fuel_consumption; // ðàñõîä áåíçèíà íà 100 êì
    double cost_1, cost_2, cost_3; // ñòîèìîñòü òð¸õ âèäîâ áåíçèíà

    cout << "Ââåäèòå ðàññòîÿíèå: ";
    cin >> distance;

    cout << "Ââåäèòå ðàñõîä áåíçèíà íà 100 êì: ";
    cin >> fuel_consumption;

    cout << "Ââåäèòå ñòîèìîñòü òð¸õ âèäîâ áåíçèíà: ";
    cin >> cost_1 >> cost_2 >> cost_3;

    // âû÷èñëÿåì ñòîèìîñòü ïîåçäêè íà êàæäîì âèäå áåíçèíà
    double cost_1_trip = distance / 100 * cost_1 * fuel_consumption;
    double cost_2_trip = distance / 100 * cost_2 * fuel_consumption;
    double cost_3_trip = distance / 100 * cost_3 * fuel_consumption;

    // âûâîäèì ñðàâíèòåëüíóþ òàáëèöó
    cout << "\nÑðàâíèòåëüíàÿ òàáëèöà ñòîèìîñòè ïîåçäêè íà ðàçíûõ âèäàõ áåíçèíà:\n";
    cout << "| Âèä áåíçèíà | Ñòîèìîñòü áåíçèíà | Ñòîèìîñòü ïîåçäêè |\n";
    cout << "|-------------|-------------------|------------------|\n";
    cout << "| 1           | " << cost_1 << "    | " << cost_1_trip << " |\n";
    cout << "| 2           | " << cost_2 << "    | " << cost_2_trip << " |\n";
    cout << "| 3           | " << cost_3 << "    | " << cost_3_trip << " |\n";

    return 0;
}
