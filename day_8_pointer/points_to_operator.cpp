// Listing 8.6
// access data members of objects on the heap using the -> operator

#include <iostream>

class SimpleCat
{
	public:
		SimpleCat() {itsAge = 2; }
		~SimpleCat() {}
		int GetAge() const { return itsAge; }
		void SetAge(int age) { itsAge = age; }
	private:
		int itsAge;
};

int main()
{
	using namespace std;
	SimpleCat * Frisky = new SimpleCat;
	cout << "Frisky is " << Frisky->GetAge() << " years old " << endl;
	Frisky->SetAge(5);
	cout << "Frisky is " << Frisky->GetAge() << " years old " << endl;
	delete Frisky;	

	return 0;
}
