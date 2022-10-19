#include <iostream>
using namespace std;
int main() {

/*	int sum = 0;	
* int i;
for (int i = 1; i <= 10; i++) {
		cin >> i;
		sum = sum + i;
		cout << sum << " " << endl;

	}*/

/*	int pr = 1;
	int i = 1;
	double x;
	
	while ( i <= 10) {
		cin >> x;
		pr=pr*i;
		
		i++;
		

	}
	cout << pr;*/
	//Series3.Даны десять вещественных чисел.Найти их среднее арифметическое.


	/*int r = 0;
	int i ;
	double x;

	  for (i = 1; i <= 10; ++i) {
        cin>>x;
        x += r;
		

	}  cout<< x;
	cout << x<< " "<< endl;*/

	////////Series4.Дано целое число N и набор из N вещественных чисел.Вывести сумму
	////////	и произведение чисел из данного набора.
	
	/*int a = 1;
	int r = 0;
	int i=1;
	double x;

	while( i <= 10 && ++i) {
		cin >> x;
		x += r;
		a = a * x;

	}  cout << x;
	cout << x << " " << a << " " << endl;*/
	//Series5.Дано целое число N и набор из N положительных вещественных чисел.
	//	Вывести в том же порядке целые части всех чисел из данного набора
	//	(как вещественные числа с нулевой дробной частью),	
    //	 а также сумму всех целых	частей.
	int n;
	cin >> n;
	int b;
	double x;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		cout << i << i;
		b =+ x;

		cout << b << endl;
	}
	






}