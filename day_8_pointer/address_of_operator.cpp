// Listing 8.1
// demonstrates address-of operator
// and addresses of local variables

# include <iostream>
using namespace std;

int main()
{
	unsigned short shortVar=5;
	unsigned long longVar=65535;

	long sVar = -65535;

	cout << "shortVar:\t" << shortVar;
	cout << "\t Adresse von shortVar:\t";
	cout << &shortVar << "\n";

	cout << "longVar:\t" << longVar;
	cout << "\t Adresse von longVar:\t";
	cout << &longVar << "\n";

	cout << "sVar:\t" << sVar;
	cout << "\t Adresse von sVar:\t";
	cout << &sVar << "\n";

	return 0;
}
