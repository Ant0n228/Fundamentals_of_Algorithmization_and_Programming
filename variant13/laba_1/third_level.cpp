#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

const double PI = acos(-1);

int main()
{
	SetConsoleOutputCP(1251);
    double x, y, z;
    cout << "������� x = "; cin >> x;
    cout << "������� y = "; cin >> y;
    cout << "������� z = "; cin >> z;
    double  a = sqrt(sqrt(y + cbrt(x - 1))),
			b = fabs(x - y),
			c = (sin(z) * sin(z) + tan(z));
	if(b * c == 0) {
		cout << "������, ������� �� ����\n";
		return 0;
	}
	double answ = a / (b * c);
	cout << "\nf = " << answ << '\n';
    system("pause");
    return 0;
}
