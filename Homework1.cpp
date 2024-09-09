//Task 1.In Russian
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Instasamka - ЗА ДЕНЬГИ ДА\n"
        << "Я вообще делаю, что хочу (А)\n"
        << "Хочу импланты — звоню врачу (Аллё)\n"
        << "Кто меня не любит — я вас не слышу (Чё?)\n"
        << "Вы просто мне завидуете, я молчу\n"
        << "Я не молчу, когда я хочу\n"
        << "Я не продаюсь, но за деньги — да (Да)\n"
        << "Мой продюсер говорит: «Ты — поп-звезда»\n"
        << "И кстати, мой продюсер — это мой муж, да\n";

    return 0;
}
//Task 2. In Russian
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Каждый" << "\n"
        << "\tОхотник" << "\n"
        << "\t\tЖелает" << "\n"
        << "\t\t\tЗнать" << "\n"
        << "\t\t\t\t Где" << "\n"
        << "\t\t\t\t\tСидит" << "\n"
        << "\t\t\t\t\t\t\tФазан" << "\n\n";

    return 0;
}

//Task  3. In Russian
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Сниму квартиру!\n";
    << "Ищу комфортное жильё в хорошем районе.\n";
    << "Мой номер телефона: +7 (999) 999-99-99.\n";
    << "Звонить с 9:00 до 21:00.\n";
    << "В любое время. Обращаться можно в мессенджерах.";
    return 0;
}

//Task 4.
#include <iostream>
using namespace std;

int main()
{
    double R0, R1, R2, R3;
    R1 = 2;
    R2 = 4;
    R3 = 8;

    // Calculating the value R0
    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "Value R0: " << R0 << endl;

    return 0;
}

//Task 5 5. 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double L, R, S;
    const double PI = 3.14;

    // entering the length of the circle
    cout << "Enter the length of the circle: ";
    cin >> L;

    // Calculate the radius of the circle
    R = L / (2 * PI);

    // Calculating the area of the circle
    S = PI * pow(R, 2);

    cout << "Radius of the circle: " << R << endl;
    cout << "Area of the circle: " << S << endl;

    return 0;
}
//Task 6.
#include <iostream>
using namespace std;

int main()
{
    double v, a, t, s;
    cout << "Enter the speed: ";
    cin >> v;
    cout << "Enter the acceleration: ";
    cin >> a;
    cout << "Enter the time: ";
    cin >> t;

    // Calculating the distance traveled
    s = v * t + (a * t * t) / 2;

    cout << "Distance traveled: " << s << endl;

    return 0;
}

//Task  7.
#include <iostream>
using namespace std;

int main()
{
    double distance_to_airport; // distance to the airport in km
    double time_to_arrive; // the time it takes  in hours
    double speed; // the speed  to drive in km/h

    cout << "Enter the distance to the airport: ";
    cin >> distance_to_airport;

    cout << "Enter the time you need to get there: ";
    cin >> time_to_arrive;

    speed = distance_to_airport / time_to_arrive;
    cout << "You need to drive with speed of " << speed << " km/h.";

    return 0;
}

//Task 8.
#include <iostream>
using namespace std;

int main()
{
    int start_hour, start_minute, start_second; // the start time of the call HH:ММ:SS
    int end_hour, end_minute, end_second; // the end time of the call HH:ММ:SS

    cout << "Enter the start time of the call (HH:ММ:SS): ";
    cin >> start_hour >> start_minute >> start_second;

    cout << "Enter the end time of the call (HH:ММ:SS): ";
    cin >> end_hour >> end_minute >> end_second;

    // calculating the time difference
    int total_seconds = (end_hour * 3600 + end_minute * 60 + end_second) - (start_hour * 3600 + start_minute * 60 + start_second);

    // calculating the cost of the call
    double cost = total_seconds * 0.3;

    cout << "Cost of the call: " << cost << " rubles.";

    return 0;
}

//Task 9.
#include <iostream>
using namespace std;

int main() {
    int distance; // distance in km
    double fuel_consumption; // fuel consumption per 100 km
    double cost_1, cost_2, cost_3; // the cost of three types of fuel

    cout << "Enter the distance: ";
    cin >> distance;

    cout << "Enter the fuel consumption per 100 km : ";
    cin >> fuel_consumption;

    cout << "Enter the the cost of three types of fuel: ";
    cin >> cost_1 >> cost_2 >> cost_3;

    // calculating the cost of a trip for each type of fuel
    double cost_1_trip = distance / 100 * cost_1 * fuel_consumption;
    double cost_2_trip = distance / 100 * cost_2 * fuel_consumption;
    double cost_3_trip = distance / 100 * cost_3 * fuel_consumption;

    // showing comparison table
    cout << "\nA comparative table of the cost of a trip on different types of fuel:\n";
    cout << "| Type of fuel | Cost of fuel | Cost of a trip |\n";
    cout << "|-------------|-------------------|------------------|\n";
    cout << "| 1           | " << cost_1 << "    | " << cost_1_trip << " |\n";
    cout << "| 2           | " << cost_2 << "    | " << cost_2_trip << " |\n";
    cout << "| 3           | " << cost_3 << "    | " << cost_3_trip << " |\n";

    return 0;
}
