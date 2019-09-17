#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	char str[256];
	cout << "Vvedite chislo v dec ";
	cin >> str;
	int a = atoi(str);
	cout << "V oct " << oct << a << endl;
	cout << "V hex " << hex << a << endl;
}
