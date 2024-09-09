//Задание 1.
#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;

    cout << "Введите число a: ";
    cin >> a;

    for (int i = a; i <= 500; i++) {
        sum += i;
    }

    cout << "Сумма чисел от " << a << " до 500 равна " << sum << endl;

    return 0;
}

//Задание 2.
#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Введите число x: ";
    cin >> x;

    cout << "Введите показатель степени y: ";
    cin >> y;

    int result = 1;

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    cout << x << " в степени " << y << " равно " << result << endl;

    return 0;
}

//Задание 3.
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; i++) {
        sum += i;
        count++;
    }

    cout << "Среднее арифметическое чисел от 1 до 1000 равно " << (float)sum / count << endl;

    return 0;
}

//Задание 4.
#include <iostream>
using namespace std;

int main() {
    int a, result = 1;

    cout << "Введите число a: ";
    cin >> a;

    if (a >= 1 && a <= 20) {
        for (int i = a; i <= 20; i++) {
            result *= i;
        }
    }
    else {
        cout << "Неверное значение a. Введите число от 1 до 20." << endl;
    }

    cout << "Произведение чисел от " << a << " до 20 равно " << result << endl;

    return 0;
}

//Задание 5. Первое решение:
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " * 9 = " << i * 9 << endl;
    }

    return 0;
}
//решение при свободном выборе числа:
#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Введите значение k: ";
    cin >> k;

    for (int i = 1; i <= 10; i++) {
        cout << i << " * " << k << " = " << i * k << endl;
    }

    return 0;
}

//Задание 6.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введите число: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        cout << i << " ";
    }

    return 0;
}

//Задание 7. 
#include <iostream>
using namespace std;

int main() {
    int min, max;
    cout << "Введите границы диапазона: ";
    cin >> min >> max;

    if (min > max) {
        cout << "Неверное значение границ диапазона. Введите границы в порядке возрастания." << endl;
        return 0;
    }

    for (int i = min; i <= max; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        else if (i % 7 == 0) {
            cout << i << " ";
        }
        else {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

//Задание 8.
#include <iostream>
using namespace std;

int main() {
    int min, max;
    cout << "Введите границы диапазона: ";
    cin >> min >> max;

    if (min > max) {
        cout << "Неверное значение границ диапазона. Введите границы в порядке возрастания." << endl;
        return 0;
    }

    int sum = 0;

    for (int i = min; i <= max; i++) {
        sum += i;
    }

    cout << "Сумма чисел от " << min << " до " << max << " равна " << sum << endl;

    return 0;
}

//Задание 9. 
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Введите число: ";
    cin >> num;

    while (num != 0) {
        sum += num;
        cout << "Введите число: ";
        cin >> num;
    }

    if (sum != 0) {
        cout << "Сумма чисел равна " << sum << endl;
    }
    else {
        cout << "Вы ввели только ноль. Сумма равна 0." << endl;
    }

    return 0;
}