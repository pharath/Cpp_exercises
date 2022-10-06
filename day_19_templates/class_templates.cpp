// zeigt wie man "class templates" definiert
// aus:
// cplusplus.com/doc/oldtutorial/templates/

#include <iostream>

template <class T>
class mypair
{
		//T values[2]; 		// wäre private (per default), sodass "cout << myobject.values[0]" nicht geht !
	public:
		T values[2];
		// benutze den "template parameter" "T" als type
		mypair (T first, T second)
		{
			values[0]=first;
			values[1]=second;
		}
};

int main()
{
	using namespace std;

	mypair<int> myobject (115,36);
	mypair<double> myfloats (3.0, 2.18);
	cout << "myobject: " << myobject.values[0] << endl;
	cout << "myfloats: " << myfloats.values[1] << endl;

	return 0;
}
