// https://www.geeksforgeeks.org/understanding-nullptr-c/
// difference between NULL and nullptr
// Unlike NULL, nullptr is not implicitly convertible or comparable to integral types

#include <iostream>

int main()
{
	//geht:
	int x = NULL;

	//geht nicht:
	//int x = nullptr;

	return 0;
}
