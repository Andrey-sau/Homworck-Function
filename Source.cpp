# include <iostream>
# include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	double number, power, result;
	cout << "������� �����: ";
	cin >> number;
	cout << "������� ������� �����: ";
	cin >> power;

	result = pow(number, power);

	cout << "\n" << number << "^" << power << " = " << result;

	return 0;
}



