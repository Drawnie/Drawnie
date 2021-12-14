#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
	cout << " Введите числа, что бы получить их сумму. 0 знак окончания" << endl;
	int sum = 0;
	int numb;
	while (numb != 0) {
		cout << " Введитее число:  ";
		cin >> numb;
		sum += numb;
	};

	cout << " Сумма: " << sum << endl;
	*/

	//product
	/*cout << " Введите числа, что бы получить их производное, 0 - знак окончания. Введите 1 для начала." << endl;
	int n;
	int mult=1;

	cin >> n;

	while (n != 0) {
		cout << " Введите число: ";
		cin >> n;
		if (n == 0) mult = mult * 1;
		else if (n % 2 == 0) mult = n * mult;
		else mult = mult * 1;
	};

	cout << " Производительное: " << mult << endl;*/  //---------------------Как перестать множить на 0 в конце? Ну что за бред. Надо узнать

	//countodd ------ Первое число должно быть 1
	/*
	int n;
	int count = 0;

	cout << " Введите число, 0 - знак окончания, введите 1 для начала" << endl;
	cin >> n;
	
	while (n!=0) {
	cout << " Введите число: ";
	cin >> n;
	if (n % 2 == 0) count = count * 1;
	else count = count + 1;
	}
	
	if (count == 0) cout << " Встретилось " << count << " непарных чисел" << endl; //0
	else if (count == 1) cout << " Встретилось " << count << " непарных число" << endl; //1
	else if (count == 2 || count == 3 || count == 4) cout << " Встретилось " << count << " непарных числа" <<  endl; //2
	else cout << " Встретилось " << count << " непарных чисел" <<  endl; //lf 
	*/

	//parrot2
	/*
	char text[101];
	cout << " Введите предложение, которое выведеться. Для завершения нажмите ENTER без текста." << endl;
	while (true) {
		cin.getline(text, 101);
		if (text[0] == '\0') {
			break;
		}
		cout << " Пользователь сказал: " << text << endl;
	}
	cout << " Конец." << endl; */
	
	//cin.getline()

	//menu 2 
	/*int numb;
	cout << " Работает информационная система ФПМ:\n 1.Новости дня\n 2.Анекдот недели\n 3.Авторы\n 0.Выход \n\n Введите номер того что вас интересует и нажмите Enter." << endl;

	
		cin >> numb;
		switch (numb)
		{
		case 1:
			cout << " Ночь была спокойной, день удачным, всё что есть из новостей - страшная грядущяя сесия." << endl;
			break;
		case 2:
			cout << " Буратино утопился." << endl;
			break;
		case 3:
			cout << " Автор 'Я'. " << endl;
			break;
		case 0:
			cout << " Спасибо за внимание" << endl;
			break;
		default:
			cout << " Неверно введено число." << endl;
			break;
		}

	while (numb!=0){
		cin >> numb;
	switch (numb)
	{
	case 1:
		cout << " Ночь была спокойной, день удачным, всё что есть из новостей - страшная грядущяя сесия." << endl;
		break;
	case 2:
		cout << " Буратино утопился." << endl;
		break;
	case 3:
		cout << " Автор 'Я'. " << endl;
		break;
	case 0: 
		cout << " Спасибо за внимание" << endl;
		break;
	default:
		cout << " Неверно введено число." << endl;
		break;
	}
	}*/
	
	//max
	/*int n, max = 0;
	cout << " Введите последовательность целых чисел. Ноль - знак окнчания." << endl;
	cout << " Введите число: ";
	cin >> n;
	if (n != 0) max = n;
	else  cout << " Может стоило что-то сначал ввести, прежде чем заканчивать?" << endl; 

	while (n != 0) {
		cout << " Введите число: ";
		cin >> n;
		if (n > max) max = n;
		else max = max;
	}
	cout << " MAX = " << max << endl;
	*/

	//fibanachi
	/*int n, n1, a = 0, b = 1, f;
	cout << " Fibonachchi: ";
	cin >> n;
	n1 = n - 1;

	for (int i = 0; i < n1; i++) {
		f = a + b;
		a = b;
		b = f;
	}
	cout << " N = " << n << endl;
	cout << " f(" << n << ") = " << f << endl;  */         //fixhggh
	

	//hit2
	/*int x, y;
	int x1 = 0, y1 = 0, R = 7;

	cout << " Угадайте центр окружности на площаде: ";
	cin >> x >> y;
	while (x != x1 && y != y1) {
		if (sqrt(x * x + y * y) < R) cout << " Тепло " << endl;
		else cout << " Холодно " << endl;
		cout << " Попытайте удачу ещё раз: " << endl;
		cin >> x >> y;
	}
	cout << " Угадали!" << endl;*/

	//factor

	/*int n, i, fact;
	cout << " Введите число для исчисления факториала: ";
	cin >> n;
	cout << " N = " << n << endl;
	fact = 1;
	for (i = 1; i <= n; i++) {
		fact = fact * i;
	}

	cout << " " << n << "! = " << fact << endl;*/
	

	system("pause");
}

