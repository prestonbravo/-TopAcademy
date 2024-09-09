//Çàäàíèå 1.
#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;

    cout << "Ââåäèòå ÷èñëî a: ";
    cin >> a;

    for (int i = a; i <= 500; i++) {
        sum += i;
    }

    cout << "Ñóììà ÷èñåë îò " << a << " äî 500 ðàâíà " << sum << endl;

    return 0;
}

//Çàäàíèå 2.
#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Ââåäèòå ÷èñëî x: ";
    cin >> x;

    cout << "Ââåäèòå ïîêàçàòåëü ñòåïåíè y: ";
    cin >> y;

    int result = 1;

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    cout << x << " â ñòåïåíè " << y << " ðàâíî " << result << endl;

    return 0;
}

//Çàäàíèå 3.
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; i++) {
        sum += i;
        count++;
    }

    cout << "Ñðåäíåå àðèôìåòè÷åñêîå ÷èñåë îò 1 äî 1000 ðàâíî " << (float)sum / count << endl;

    return 0;
}

//Çàäàíèå 4.
#include <iostream>
using namespace std;

int main() {
    int a, result = 1;

    cout << "Ââåäèòå ÷èñëî a: ";
    cin >> a;

    if (a >= 1 && a <= 20) {
        for (int i = a; i <= 20; i++) {
            result *= i;
        }
    }
    else {
        cout << "Íåâåðíîå çíà÷åíèå a. Ââåäèòå ÷èñëî îò 1 äî 20." << endl;
    }

    cout << "Ïðîèçâåäåíèå ÷èñåë îò " << a << " äî 20 ðàâíî " << result << endl;

    return 0;
}

//Çàäàíèå 5. Ïåðâîå ðåøåíèå:
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " * 9 = " << i * 9 << endl;
    }

    return 0;
}
//ðåøåíèå ïðè ñâîáîäíîì âûáîðå ÷èñëà:
#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Ââåäèòå çíà÷åíèå k: ";
    cin >> k;

    for (int i = 1; i <= 10; i++) {
        cout << i << " * " << k << " = " << i * k << endl;
    }

    return 0;
}

//Çàäàíèå 6.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ââåäèòå ÷èñëî: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        cout << i << " ";
    }

    return 0;
}

//Çàäàíèå 7. 
#include <iostream>
using namespace std;

int main() {
    int min, max;
    cout << "Ââåäèòå ãðàíèöû äèàïàçîíà: ";
    cin >> min >> max;

    if (min > max) {
        cout << "Íåâåðíîå çíà÷åíèå ãðàíèö äèàïàçîíà. Ââåäèòå ãðàíèöû â ïîðÿäêå âîçðàñòàíèÿ." << endl;
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

//Çàäàíèå 8.
#include <iostream>
using namespace std;

int main() {
    int min, max;
    cout << "Ââåäèòå ãðàíèöû äèàïàçîíà: ";
    cin >> min >> max;

    if (min > max) {
        cout << "Íåâåðíîå çíà÷åíèå ãðàíèö äèàïàçîíà. Ââåäèòå ãðàíèöû â ïîðÿäêå âîçðàñòàíèÿ." << endl;
        return 0;
    }

    int sum = 0;

    for (int i = min; i <= max; i++) {
        sum += i;
    }

    cout << "Ñóììà ÷èñåë îò " << min << " äî " << max << " ðàâíà " << sum << endl;

    return 0;
}

//Çàäàíèå 9. 
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Ââåäèòå ÷èñëî: ";
    cin >> num;

    while (num != 0) {
        sum += num;
        cout << "Ââåäèòå ÷èñëî: ";
        cin >> num;
    }

    if (sum != 0) {
        cout << "Ñóììà ÷èñåë ðàâíà " << sum << endl;
    }
    else {
        cout << "Âû ââåëè òîëüêî íîëü. Ñóììà ðàâíà 0." << endl;
    }

    return 0;
}
