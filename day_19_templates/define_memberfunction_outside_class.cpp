// zeigt wie man member functions außerhalb
// der Deklaration des zugehörigen "class template" definiert
// aus:
// cplusplus.com/doc/oldtutorial/templates/

#include <iostream>
using namespace std;

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
		T getmax ();
};

// definiere member function "::getmax()" des class template "mypair" außerhalb 
// der class Deklaration
// --------------------------------------------------------------------------------------------_
// merke: 3 "T"s in der function Definition:
// 1. template parameter
// 2. type returned by the function
// 3. specifies that this function's template parameter is also the class template parameter
// --------------------------------------------------------------------------------------------_
template <class T>
T mypair<T>::getmax ()
{
	T retval;
	retval = values[0]>values[1]? values[0] : values[1];
	return retval;
}

int main()
{
	mypair<int> myobject (115,36);
	cout << myobject.getmax();

	return 0;
}
