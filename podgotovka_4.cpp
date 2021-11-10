#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	// Nahojdenie min chisla
	/*int a, min;
	cout << " Vvedite chislo, 0 oznaka kintsya" << endl;
	cin >> a;
	if (a != 0) min = a;
	else {
		cout << "ti chevo nadelal..." << endl;
		return 0;
	}
	while(a!=0)
	{
		if (min > a) min = a;
		cout << " Vvedite chislo, 0 oznaka kintsya" << endl;
		cin >> a;
	}
	cout << "Minimum = " << a << endl;*/


	//summa (ubundu)
	/*int a;
	double sum = 0;

	cout << " Vvedite chislo, 0 oznaka kintsya" << endl;
	cin >> a;
	if (a == 0) ;
	{
		cout << "zachem srazu zakonchil, bro..." << endl;
		return 0;
	}
	while (a != 0) 
	{
		sum = sum + a; // sum+=a;
		cout << " Vvedite chislo, 0 oznaka kintsya" << endl;
		cin >> a;
	}

	cout << "Sum = " << sum << endl;*/

	//sum s deleniem na dva

	/*int a, flag = 0;
	double sum = 0;
	std::cout << "Vvedite chislo, 0 - oznaka kontsa " << std::endl;
	std::cin >> a;
	if (a == 0)
	{
		std::cout << " ne moze t bit 0" << std::endl;
		return 0;
	}
	while (a != 0)
	{
		if (a % 2 == 0) {
			sum = sum + a;//sum+ = a;
			flag = 1;
		}
		std::cout << "Vvedite chislo, 0 - oznaka kontsa " << std::endl;
		std::cin >> a;
	}
	if (flag == 1) std::cout << "Sum =" << sum;
	else std::cout << "Sumu vidaty nemosglivo - parnyh chisel nema" << std::endl;*/

	int a, b, c;
	int max = 0;
	cout << "Vvedite 3 chisla" << endl;
	cin >> a >> b >> c;
	if (a > b > c)
		max = a;
	else if (b > a > c)
		max = b;
	else (c > a > b)
		max = c;
					
	cout << "Max = " << max;


}
