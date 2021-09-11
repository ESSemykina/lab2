
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
