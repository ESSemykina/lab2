
/*
#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Rus");
	int x;
	cin >> x;

	if (x > 0)
	{
		cout << "Положительное" << endl;
		if (x > 50)
		{
			cout <<"Больше 50" << endl;
		}
		else
		{
			cout << "Меньше 50" << endl;
		}
	}

	else if (x < 0)
	{
		cout << "Отрицательное" << endl;
	}

	else
	{
		cout << "Равно нулю" << endl;
	}
	return 0;
		

}
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
}
