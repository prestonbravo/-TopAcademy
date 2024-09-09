//Задание 1.
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
//Задание 2.
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

//Задание 3.
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

//Задание 4.
#include <iostream>
using namespace std;

int main()
{
    double R0, R1, R2, R3;
    R1 = 2;
    R2 = 4;
    R3 = 8;

    // Вычисляем значение R0
    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "Значение R0: " << R0 << endl;

    return 0;
}

//Задание 5. 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double L, R, S;
    const double PI = 3.14;

    // Вводим длину окружности
    cout << "Введите длину окружности: ";
    cin >> L;

    // Вычисляем радиус окружности
    R = L / (2 * PI);

    // Вычисляем площадь круга
    S = PI * pow(R, 2);

    cout << "Радиус окружности: " << R << endl;
    cout << "Площадь круга: " << S << endl;

    return 0;
}
//Задание 6.
#include <iostream>
using namespace std;

int main()
{
    double v, a, t, s;
    cout << "Введите скорость: ";
    cin >> v;
    cout << "Введите ускорение: ";
    cin >> a;
    cout << "Введите время: ";
    cin >> t;

    // Вычисляем пройденное расстояние
    s = v * t + (a * t * t) / 2;

    cout << "Пройденное расстояние: " << s << endl;

    return 0;
}

//Задание 7.
#include <iostream>
using namespace std;

int main()
{
    double distance_to_airport; // расстояние до аэропорта в км
    double time_to_arrive; // время, за которое нужно доехать в часах
    double speed; // скорость, с которой нужно ехать в км/ч

    cout << "Введите расстояние до аэропорта: ";
    cin >> distance_to_airport;

    cout << "Введите время, за которое нужно доехать: ";
    cin >> time_to_arrive;

    speed = distance_to_airport / time_to_arrive;
    cout << "Вам нужно ехать со скоростью " << speed << " км/ч.";

    return 0;
}

//Задание 8.
#include <iostream>
using namespace std;

int main()
{
    int start_hour, start_minute, start_second; // время начала разговора в формате ЧЧ:ММ:СС
    int end_hour, end_minute, end_second; // время завершения разговора в формате ЧЧ:ММ:СС

    cout << "Введите время начала разговора (ЧЧ:ММ:СС): ";
    cin >> start_hour >> start_minute >> start_second;

    cout << "Введите время завершения разговора (ЧЧ:ММ:СС): ";
    cin >> end_hour >> end_minute >> end_second;

    // вычисляем разницу во времени
    int total_seconds = (end_hour * 3600 + end_minute * 60 + end_second) - (start_hour * 3600 + start_minute * 60 + start_second);

    // вычисляем стоимость разговора
    double cost = total_seconds * 0.3;

    cout << "Стоимость разговора: " << cost << " рублей.";

    return 0;
}

//Задание 9.
#include <iostream>
using namespace std;

int main() {
    int distance; // расстояние в км
    double fuel_consumption; // расход бензина на 100 км
    double cost_1, cost_2, cost_3; // стоимость трёх видов бензина

    cout << "Введите расстояние: ";
    cin >> distance;

    cout << "Введите расход бензина на 100 км: ";
    cin >> fuel_consumption;

    cout << "Введите стоимость трёх видов бензина: ";
    cin >> cost_1 >> cost_2 >> cost_3;

    // вычисляем стоимость поездки на каждом виде бензина
    double cost_1_trip = distance / 100 * cost_1 * fuel_consumption;
    double cost_2_trip = distance / 100 * cost_2 * fuel_consumption;
    double cost_3_trip = distance / 100 * cost_3 * fuel_consumption;

    // выводим сравнительную таблицу
    cout << "\nСравнительная таблица стоимости поездки на разных видах бензина:\n";
    cout << "| Вид бензина | Стоимость бензина | Стоимость поездки |\n";
    cout << "|-------------|-------------------|------------------|\n";
    cout << "| 1           | " << cost_1 << "    | " << cost_1_trip << " |\n";
    cout << "| 2           | " << cost_2 << "    | " << cost_2_trip << " |\n";
    cout << "| 3           | " << cost_3 << "    | " << cost_3_trip << " |\n";

    return 0;
}