#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");
	
    string s;
    cout << "������� ������, ��������� �� �����: ";
    getline(cin, s);
    int l = s.length();

    for (int i = 0; i < l; i += 2)
        for (int j = i + 2; j < l; j += 2)
            if (s[i] > s[j])
                swap(s[i], s[j]);

    cout <<"���������: " << s << endl;

    system("pause");
	return 0;
}
