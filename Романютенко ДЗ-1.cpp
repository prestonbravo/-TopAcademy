//������� 1.
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Instasamka - �� ������ ��\n"
        << "� ������ �����, ��� ���� (�)\n"
        << "���� �������� � ����� ����� (���)\n"
        << "��� ���� �� ����� � � ��� �� ����� (׸?)\n"
        << "�� ������ ��� ���������, � �����\n"
        << "� �� �����, ����� � ����\n"
        << "� �� ��������, �� �� ������ � �� (��)\n"
        << "��� �������� �������: ��� � ���-������\n"
        << "� ������, ��� �������� � ��� ��� ���, ��\n";

    return 0;
}
//������� 2.
#include <iostream>
using namespace std;

int main()
{
    std::cout << "������" << "\n"
        << "\t�������" << "\n"
        << "\t\t������" << "\n"
        << "\t\t\t�����" << "\n"
        << "\t\t\t\t ���" << "\n"
        << "\t\t\t\t\t�����" << "\n"
        << "\t\t\t\t\t\t\t�����" << "\n\n";

    return 0;
}

//������� 3.
#include <iostream>
using namespace std;

int main()
{
    std::cout << "����� ��������!\n";
    << "��� ���������� ����� � ������� ������.\n";
    << "��� ����� ��������: +7 (999) 999-99-99.\n";
    << "������� � 9:00 �� 21:00.\n";
    << "� ����� �����. ���������� ����� � ������������.";
    return 0;
}

//������� 4.
#include <iostream>
using namespace std;

int main()
{
    double R0, R1, R2, R3;
    R1 = 2;
    R2 = 4;
    R3 = 8;

    // ��������� �������� R0
    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "�������� R0: " << R0 << endl;

    return 0;
}

//������� 5. 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double L, R, S;
    const double PI = 3.14;

    // ������ ����� ����������
    cout << "������� ����� ����������: ";
    cin >> L;

    // ��������� ������ ����������
    R = L / (2 * PI);

    // ��������� ������� �����
    S = PI * pow(R, 2);

    cout << "������ ����������: " << R << endl;
    cout << "������� �����: " << S << endl;

    return 0;
}
//������� 6.
#include <iostream>
using namespace std;

int main()
{
    double v, a, t, s;
    cout << "������� ��������: ";
    cin >> v;
    cout << "������� ���������: ";
    cin >> a;
    cout << "������� �����: ";
    cin >> t;

    // ��������� ���������� ����������
    s = v * t + (a * t * t) / 2;

    cout << "���������� ����������: " << s << endl;

    return 0;
}

//������� 7.
#include <iostream>
using namespace std;

int main()
{
    double distance_to_airport; // ���������� �� ��������� � ��
    double time_to_arrive; // �����, �� ������� ����� ������� � �����
    double speed; // ��������, � ������� ����� ����� � ��/�

    cout << "������� ���������� �� ���������: ";
    cin >> distance_to_airport;

    cout << "������� �����, �� ������� ����� �������: ";
    cin >> time_to_arrive;

    speed = distance_to_airport / time_to_arrive;
    cout << "��� ����� ����� �� ��������� " << speed << " ��/�.";

    return 0;
}

//������� 8.
#include <iostream>
using namespace std;

int main()
{
    int start_hour, start_minute, start_second; // ����� ������ ��������� � ������� ��:��:��
    int end_hour, end_minute, end_second; // ����� ���������� ��������� � ������� ��:��:��

    cout << "������� ����� ������ ��������� (��:��:��): ";
    cin >> start_hour >> start_minute >> start_second;

    cout << "������� ����� ���������� ��������� (��:��:��): ";
    cin >> end_hour >> end_minute >> end_second;

    // ��������� ������� �� �������
    int total_seconds = (end_hour * 3600 + end_minute * 60 + end_second) - (start_hour * 3600 + start_minute * 60 + start_second);

    // ��������� ��������� ���������
    double cost = total_seconds * 0.3;

    cout << "��������� ���������: " << cost << " ������.";

    return 0;
}

//������� 9.
#include <iostream>
using namespace std;

int main() {
    int distance; // ���������� � ��
    double fuel_consumption; // ������ ������� �� 100 ��
    double cost_1, cost_2, cost_3; // ��������� ��� ����� �������

    cout << "������� ����������: ";
    cin >> distance;

    cout << "������� ������ ������� �� 100 ��: ";
    cin >> fuel_consumption;

    cout << "������� ��������� ��� ����� �������: ";
    cin >> cost_1 >> cost_2 >> cost_3;

    // ��������� ��������� ������� �� ������ ���� �������
    double cost_1_trip = distance / 100 * cost_1 * fuel_consumption;
    double cost_2_trip = distance / 100 * cost_2 * fuel_consumption;
    double cost_3_trip = distance / 100 * cost_3 * fuel_consumption;

    // ������� ������������� �������
    cout << "\n������������� ������� ��������� ������� �� ������ ����� �������:\n";
    cout << "| ��� ������� | ��������� ������� | ��������� ������� |\n";
    cout << "|-------------|-------------------|------------------|\n";
    cout << "| 1           | " << cost_1 << "    | " << cost_1_trip << " |\n";
    cout << "| 2           | " << cost_2 << "    | " << cost_2_trip << " |\n";
    cout << "| 3           | " << cost_3 << "    | " << cost_3_trip << " |\n";

    return 0;
}