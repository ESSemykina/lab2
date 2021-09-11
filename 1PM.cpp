/*Ввести натуральные числа A, B и C.
 Если A+B кратно C и C кратно B, то вывести (A+B)/C-C/B, если A+B кратно C и C не кратно B, то вывести (A+B)/С+B*C, в остальных случаях вывести A-B+C.
 */
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int A;
	int B;
	int C;
	cin >> A;
	cin >> B;
	cin >> C;

	if ((A + B) % C == 0 && C % B == 0)
	{
		cout << ((A + B) / C) - (C / B) << endl;
	}
	else if ((A + B) % C == 0 && C % B != 0)
	{
		cout << ((A + B) / C) + (C * B) << endl;
	}
	else
	{
		cout << A + B + C << endl;
	}
	return 0;
}

/*
Ввести число N, которое обозначает некоторую ошибку. При помощи оператора switch расшифровать значение ошибки.
Список ошибок:
0 – все хорошо, 1 – ошибка чтения файла, 2 – ошибка записи файла, 3 – не все поля определены.
Предусмотреть обработку ошибочного ввода N.
*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Rus");
	int N;
	cin >> N;
	switch (N)
	{
	case 0: cout << "Все хорошо" << endl;
		break;
	case 1: cout << "Ошибка чтения файла" << endl;
		break;
	case 2: cout << "Ошибка записи файла" << endl;
		break;
	case 3: cout << "Не все поля определены" << endl;
	}
	return 0;
}
