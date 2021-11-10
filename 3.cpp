#include <iostream>
#include <cstdlib>
//#include "stdafx.h" - chto eto
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // ABS
    int X1;

    cout << "Введите значение Х" << endl;
    cin >> X1;
    cout << "| " << X1 << " | = ";
    if (X1 < 0) X1 = -X1;
    cout << X1 << endl; 

    //Max0
    int A, B, Max;

    cout << "\n Введите значение А и В" << endl;
    cin >> A >> B;
    cout << "A = " << A << " B = " << B << endl;
    if (A > B) Max = A;
    else (A < B) Max = B; 
    cout << "Max( " << A << ", " << B << ") = " << Max << endl; 

    // AB
    int A1, B1, x1;

    cout << "Введите значение А и В" << endl;
    cin >> A1 >> B1;
    cout << "A = " << A1 << " B = " << B1 << endl;
    if (A1 < B1) {
    x1=A1;
    A1=B1;
    B1=x1;
    } else {
    x1=A1;
    A1=B1;
    B1=x1;
    }
    cout << "A = " << A1 << " B = " << B1 << endl;
    

    //ABC god with me

    
    int a2, b2, c2;    
    cout << "Введите А В и С: " << endl;     
    cin >> a2 >> b2 >> c2;     
    cout << " A = " << a2 << " B = " << b2 << " C = " << c2 << endl;

    if (a2 < b2 && b2 < c2) cout << " A = " << a2 << " B = " << b2 << " C = " << c2 << endl;      // 123 > 123
    else if (a2 < c2 && c2 < b2) cout << " A = " << a2 << " B = " << c2 << " C = " << b2 << endl; // 132 > 123
    else if (b2 < a2 && a2 < c2) cout << " A = " << b2 << " B = " << a2 << " C = " << c2 << endl; // 213 > 123
    else if (b2 < c2 && c2 < a2) cout << " A = " << b2 << " B = " << c2 << " C = " << a2 << endl; // 231 > 123
    else if (c2 < b2 && b2 < a2) cout << " A = " << c2 << " B = " << b2 << " C = " << a2 << endl; // 321 > 123
    else  cout << " A = " << c2 << " B = " << a2 << " C = " << b2 << endl;                        // 312 > 123
    

    // ABCD 
   
    int a3, b3, c3, d3;
    cout << "Введите А В C и D: " << endl;
    cin >> a3 >> b3 >> c3 >> d3;
    cout << " A = " << a3 << " B = " << b3 << " C = " << c3 << " D = " << d3 << endl;
   
    if (a3 > b3) swap (a3, b3);
    else if (c3 > d3) swap (c3, d3);
    else if (a3 > c3) swap (a3, c3);
    else if (b3 > d3) swap (b3, d3);
    else if (b3 > c3) swap (b3, c3);

    cout << " A = " << a3 << " B = " << b3 << " C = " << c3 << " D = " << d3 << endl;

    

    //hit

    float x;
   int y;
   int R = 7;

    cout << " Введите значение точки на системе кординат (X и Y):" << endl;
    cin >> x >> y;
    if (sqrt(x * x + y * y) < R * R)
        cout << " Точка ( " << x << ", " << y << " ) - попадает в окружность с центром в 0 и радиусов в 7 " << endl;
    else 
        cout << " Точка ( " << x << ", " << y << " ) - не попадает в окружность с центром в 0 и радиусов в 7 " << endl;
        

    // menu

    int numb;
    cout << " Работает информационная система факультета прикладной математики: \n 1)Новости дня \n 2)Анекдот недели \n 3) Авторы \n Введите определённый номер и нажмите ENTER." << endl;
    cin >> numb;
    switch (numb) 
    {
    case 1:
        cout << " Шок контент, вместо обычных 2-вух минут на блиц-тест по программирыванию первокурсники получили 4, хотя многие ожидали отчисление..." << endl;
        break;
    case 2: 
        cout << " Колобок повесился" << endl;
        break;
    case 3: 
        cout << " Автор 'Я' " << endl;
        break;
    default:
        cout << " Неправильно введён номер, выберите что-то из выше упомянутых" << endl;
        break;
    }


    system("pause");
    return 0;
}

