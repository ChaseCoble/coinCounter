#include <iostream>
using namespace std;
int main(){
	int quarters;
	int dimes;
	int nickels;
	int total;
	cout << "Enter number of quarters, then dimes, then nickels: ";
	cin >> quarters;
	cin >> dimes;
	cin >> nickels;
	total = 25 * quarters + 10 * dimes + 5 * nickels;
	cout << total;
	return 0;
}
