// workmatrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cstdlib>
#include <clocale>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

void sum()
{

    setlocale(LC_ALL, "rus");

    int line, column, i, j;
    cout << "Введите количество строк в матрице: ";
    cin >> line;
    cout << endl << "Введите количество столбцов в матрице: ";
    cin >> column;

    cout << endl << "Введите элементы матрицы №1: " << endl;
    int** matr1 = new int* [line];
    for (int i = 0; i < line; i++) {
        matr1[i] = new int[column];
    }

    for (int i = 0; i < line; i++)
        for (int j = 0; j < column; j++) {
            cin >> matr1[i][j];
        }

    cout << "Матрица №1: " << endl;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++)
            cout << matr1[i][j] << " ";
        cout << endl;
    }

    cout << endl << "Введите элементы матрицы №2: " << endl;
    int** matr2 = new int* [line];
    for (int i = 0; i < line; i++) {
        matr2[i] = new int[column];
    }

    for (int i = 0; i < line; i++)
        for (int j = 0; j < column; j++) {
            cin >> matr2[i][j];
        }

    cout << "Матрица №2: " << endl;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++)
            cout << matr2[i][j] << " ";
        cout << endl;
    }

    int** matrsum = new int* [line];
    for (int i = 0; i < line; i++) {
        matrsum[i] = new int[column];
    }

    for (int i = 0; i < line; i++)
        for (int j = 0; j < column; j++) {
            matrsum[i][j] = matr1[i][j] + matr2[i][j];
        }

    cout << endl << "Сложение матрицы №1 и матрицы №2: " << endl;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++)
            cout << matrsum[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < line; i++)
        delete[]matr1[i];
    delete[]matr1;

    for (int i = 0; i < line; i++)
        delete[]matr2[i];
    delete[]matr2;

    for (int i = 0; i < line; i++)
        delete[]matrsum[i];
    delete[]matrsum;

}

void vichit() {

    setlocale(LC_ALL, "rus");

    int line, column, i, j;
    cout << "Введите количество строк в матрице: ";
    cin >> line;
    cout << endl << "Введите количество столбцов в матрице: ";
    cin >> column;

    cout << endl << "Введите элементы матрицы №1: " << endl;
    int** matr1 = new int* [line];
    for (int i = 0; i < line; i++) {
        matr1[i] = new int[column];
    }

    for (int i = 0; i < line; i++)
        for (int j = 0; j < column; j++) {
            cin >> matr1[i][j];
        }

    cout << "Матрица №1: " << endl;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++)
            cout << matr1[i][j] << " ";
        cout << endl;
    }

    cout << endl << "Введите элементы матрицы №2: " << endl;
    int** matr2 = new int* [line];
    for (int i = 0; i < line; i++) {
        matr2[i] = new int[column];
    }

    for (int i = 0; i < line; i++)
        for (int j = 0; j < column; j++) {
            cin >> matr2[i][j];;
        }

    cout << "Матрица №2: " << endl;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++)
            cout << matr2[i][j] << " ";
        cout << endl;
    }

    int** matrvichit = new int* [line];
    for (int i = 0; i < line; i++) {
        matrvichit[i] = new int[column];
    }

    cout << "Выберите:" << endl;
    cout << "1) Матрица №1 - Матрица №2" << endl;
    cout << "2) Матрица №2 - Матрица №1" << endl;
    int z;
    cin >> z;
    if (z == 1) {
        for (int i = 0; i < line; i++)
            for (int j = 0; j < column; j++) {
                matrvichit[i][j] = matr1[i][j] - matr2[i][j];
            }

        cout << endl << "Вычитание матрицы №2 из матрицы №1: " << endl;
        for (int i = 0; i < line; i++) {
            for (int j = 0; j < column; j++)
                cout << matrvichit[i][j] << " ";
            cout << endl;
        }
    }
    if (z == 2) {
        for (int i = 0; i < line; i++)
            for (int j = 0; j < column; j++) {
                matrvichit[i][j] = matr2[i][j] - matr1[i][j];
            }

        cout << endl << "Вычитание матрицы №1 из матрицы №2: " << endl;
        for (int i = 0; i < line; i++) {
            for (int j = 0; j < column; j++)
                cout << matrvichit[i][j] << " ";
            cout << endl;
        }
    }


    for (int i = 0; i < line; i++)
        delete[]matr1[i];
    delete[]matr1;

    for (int i = 0; i < line; i++)
        delete[]matr2[i];
    delete[]matr2;

    for (int i = 0; i < line; i++)
        delete[]matrvichit[i];
    delete[]matrvichit;

}

void mnoz_a() {

    setlocale(LC_ALL, "rus");

    int line, column;
    cout << "Введите количество строк в матрице: ";
    cin >> line;
    cout << endl << "Введите количество столбцов в матрице: ";
    cin >> column;

    cout << endl << "Введите элементы матрицы: " << endl;

    int** matr = new int* [line];
    for (int i = 0; i < line; i++) {
        matr[i] = new int[column];
    }

    for (int i = 0; i < line; i++)
        for (int j = 0; j < column; j++) {
            cin >> matr[i][j];;
        }

    cout << "Матрица: " << endl;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++)
            cout << matr[i][j] << " ";
        cout << endl;
    }

    cout << "Введите число A: ";
    int Q;
    cin >> Q;

    int** matrmnoz_a = new int* [line];
    for (int i = 0; i < line; i++) {
        matrmnoz_a[i] = new int[column];
    }

    for (int i = 0; i < line; i++)
        for (int j = 0; j < column; j++) {
            matrmnoz_a[i][j] = matr[i][j] * Q;
        }

    cout << endl << "Умножение матрицы на число X: " << endl;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++)
            cout << matrmnoz_a[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < line; i++)
        delete[]matr[i];
    delete[]matr;

    for (int i = 0; i < line; i++)
        delete[]matrmnoz_a[i];
    delete[]matrmnoz_a;


}

void mnoz() {

    setlocale(LC_ALL, "rus");

    int line, column, line1, column1, line2, column2;
    cout << "Введите количество строк в матрице: ";
    cin >> line1;
    cout << endl << "Введите количество столбцов в матрице: ";
    cin >> column1;

    cout << endl << "Введите элементы матрицы №1: " << endl;

    int** matr1 = new int* [line1];
    for (int i = 0; i < line1; i++) {
        matr1[i] = new int[column1];
    }

    for (int i = 0; i < line1; i++)
        for (int j = 0; j < column1; j++) {
            cin >> matr1[i][j];;
        }

    cout << "Матрица №1: " << endl;

    for (int i = 0; i < line1; i++) {
        for (int j = 0; j < column1; j++)
            cout << matr1[i][j] << " ";
        cout << endl;
    }


    cout << "Введите количество строк в матрице: ";
    cin >> line2;
    cout << endl << "Введите количество столбцов в матрице: ";
    cin >> column2;

    cout << endl << "Введите элементы матрицы №2: " << endl;

    int** matr2 = new int* [line2];
    for (int i = 0; i < line2; i++) {
        matr2[i] = new int[column2];
    }

    for (int i = 0; i < line2; i++)
        for (int j = 0; j < column2; j++) {
            cin >> matr2[i][j];;
        }

    cout << "Матрица №2: " << endl;

    for (int i = 0; i < line2; i++) {
        for (int j = 0; j < column2; j++)
            cout << matr2[i][j] << " ";
        cout << endl;
    }

    if (column1 != line2)
        cout << "Ошибка" << endl;
    else {
        line = line1;
        column = column2;
        int** matrmnoz = new int* [line];
        for (int i = 0; i < line; i++) {
            matrmnoz[i] = new int[column];
        }

        for (int i = 0; i < line; i++)
            for (int j = 0; j < column; j++) {
                matrmnoz[i][j] = 0;
                for (int v = 0; v < line2; v++)
                    matrmnoz[i][j] += matr1[i][v] * matr2[v][j];
            }

        cout << "Умножение матрицы №1 на матрицы №2: " << endl;

        for (int i = 0; i < line; i++) {
            for (int j = 0; j < column; j++)
                cout << matrmnoz[i][j] << " ";
            cout << endl;
        }

        for (int i = 0; i < line; i++)
            delete[]matr1[i];
        delete[]matr1;

        for (int i = 0; i < line2; i++)
            delete[]matr2[i];
        delete[]matr2;

        for (int i = 0; i < line

            ; i++)
            delete[]matrmnoz[i];
        delete[]matrmnoz;

    }

}
/*void mnoz(double matr1[10][10], double matr2[10][10], double matr3[10][10], int i, int j, int h, int l)
{
    int m, y;
    if (j == h)
    {
        for (m = 0; m < i; m++)
        {
            for (y = 0; y < l; y++)
            {
                matr3[m][y] = 0;
                for (int r = 0; r < h; r++)
                {
                    matr3[m][y] += matr1[m][r] * matr2[r][y];
                }

            }


        }*/
void trans() {

    setlocale(LC_ALL, "rus");

    int line, column;
    cout << "Введите количество строк в матрице: ";
    cin >> line;
    cout << endl << "Введите количество столбцов в матрице: ";
    cin >> column;

    cout << endl << "Введите элементы матрицы: " << endl;

    int** matr = new int* [line];
    for (int i = 0; i < line; i++) {
        matr[i] = new int[column];
    }

    for (int i = 0; i < line; i++)
        for (int j = 0; j < column; j++) {
            cin >> matr[i][j];;
        }

    cout << "Матрица: " << endl;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++)
            cout << matr[i][j] << " ";
        cout << endl;
    }

    int t;
    t = line;
    line = column;
    column = t;

    t = 0;
    for (int i = 0; i < line; i++) {
        for (int j = i; j < column; j++) {
            t = matr[i][j];
            matr[i][j] = matr[j][i];
            matr[j][i] = t;
        }
    }

    cout << "Транспонированная матрица: " << endl;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++)
            cout << matr[i][j] << " ";
        cout << endl;
    }

}

int main() {

    setlocale(LC_ALL, "rus");

    srand(time(NULL));

    int num_op;
    int x = 1;

    while (x == 1)
    {
        cout << "Введите номер операции: " << endl;
        cout << "1.Сложение матриц" << endl;
        cout << "2.Вычитание матриц" << endl;
        cout << "3.Умножение матрицы на число" << endl;
        cout << "4.Умножение матрицы на матрицу" << endl;
        cout << "5.Транспонирование матрицы" << endl;
        cin >> num_op;
        switch (num_op) {
        case 1:
            sum();
            break;
        case 2:
            vichit();
            break;
        case 3:
            mnoz_a();
            break;
        case 4:
            mnoz();
            break;
        case 5:
            trans();
            break;
        }

        cout << endl << "Продолжить работу калькулятора?" << endl << "1) Да" << endl << "2) Нет" << endl << "Выберете номер команды:" << endl;
        cin >> x;
        cout << endl << endl << endl;


    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
