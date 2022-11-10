# include <iostream>
# include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	double number, power, result;
	cout << "¬ведите число: ";
	cin >> number;
	cout << "¬ведите степень числа: ";
	cin >> power;

	result = pow(number, power);

	cout << "\n" << number << "^" << power << " = " << result;

	return 0;
}



