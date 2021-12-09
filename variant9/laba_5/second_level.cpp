#include<iostream>
#include<stdio.h>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int N, M, i, j;

    int sum_even_rows = 0, sum_odd_rows = 0, sum_even_cols = 0, sum_odd_cols = 0;

    cout << "������� ���������� ����� �������: ";    cin >> N;
    cout << "������� ���������� �������� �������: ";   cin >> M;
    int** mass = new int* [N]; 
    cout << endl;
    cout << "��������� ������� " << N << '�' << M << endl;

    for (i = 0; i < N; i++)
    {
        mass[i] = new int[M]; 
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << "������� �����: ";
            cin >> mass[i][j];
        }
    }

    cout << "���������� �������: " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (i % 2 == 0)
                sum_even_rows += mass[i][j];
            else
                sum_odd_rows += mass[i][j];

            if (j % 2 == 0)
                sum_even_cols += mass[i][j];
            else
                sum_odd_cols += mass[i][j];

            cout << setw(6) << mass[i][j] << " ";
        }
        cout << endl;
    }

    cout << "����� ��������� � �������� �������   :  " << sum_even_rows << endl;

    cout << "����� ��������� � ������ ��������:  " << sum_odd_cols << endl;

    return 0;

}