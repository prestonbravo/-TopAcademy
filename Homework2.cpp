//Task 1.
#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;

    cout << "Enter the number a: ";
    cin >> a;

    for (int i = a; i <= 500; i++) {
        sum += i;
    }

    cout << "The sum of the numbers from " << a << " to 500 is " << sum << endl;

    return 0;
}

//Task 2.
#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter the number x: ";
    cin >> x;

    cout << "Enter the degree indicator y: ";
    cin >> y;

    int result = 1;

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    cout << x << " in degree " << y << " is " << result << endl;

    return 0;
}

//Task 3.
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; i++) {
        sum += i;
        count++;
    }

    cout << "The arithmetic mean of numbers from 1 to 1000 is " << (float)sum / count << endl;

    return 0;
}

//Task 4.
#include <iostream>
using namespace std;

int main() {
    int a, result = 1;

    cout << "Enter the number  a: ";
    cin >> a;

    if (a >= 1 && a <= 20) {
        for (int i = a; i <= 20; i++) {
            result *= i;
        }
    }
    else {
        cout << "Invalid value of a . Enter a number from 1 to 20." << endl;
    }

    cout << "The product of numbers from " << a << " up to 20 is equal to " << result << endl;

    return 0;
}

//Task 5. The first solution:
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " * 9 = " << i * 9 << endl;
    }

    return 0;
}
//the solution with the free choice of a number:
#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Enter a value k: ";
    cin >> k;

    for (int i = 1; i <= 10; i++) {
        cout << i << " * " << k << " = " << i * k << endl;
    }

    return 0;
}

//Task 6.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        cout << i << " ";
    }

    return 0;
}

//Task 7. 
#include <iostream>
using namespace std;

int main() {
    int min, max;
    cout << "Enter the range boundaries: ";
    cin >> min >> max;

    if (min > max) {
        cout << "The value of the range boundaries is incorrect. Enter the boundaries in ascending order." << endl;
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

//Task 8.
#include <iostream>
using namespace std;

int main() {
    int min, max;
    cout << "Enter the range boundaries: ";
    cin >> min >> max;

    if (min > max) {
        cout << "The value of the range boundaries is incorrect. Enter the boundaries in ascending order." << endl;
        return 0;
    }

    int sum = 0;

    for (int i = min; i <= max; i++) {
        sum += i;
    }

    cout << "The sum of the numbers from " << min << " up to " << max << " is " << sum << endl;

    return 0;
}

//Task 9. 
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        sum += num;
        cout << "Enter a number: ";
        cin >> num;
    }

    if (sum != 0) {
        cout << "The sum of the numbers is " << sum << endl;
    }
    else {
        cout << "You have entered only zero. The sum is 0." << endl;
    }

    return 0;
}
