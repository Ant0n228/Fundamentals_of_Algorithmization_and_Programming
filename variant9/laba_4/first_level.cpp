#include <iostream>

using namespace std;

int main1() {

    setlocale(LC_ALL, "rus");

    int n;
    cout << "������� n: ";  cin >> n;

    double* a = new double[n], sum = 0.0;

    cout << "������� " << n << " ��������� �������: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 0) break;
        sum += a[i];
    }

    cout << "rez: " << sum << endl;
  
    delete[]a;

    system("pause");
    return 0;
}
