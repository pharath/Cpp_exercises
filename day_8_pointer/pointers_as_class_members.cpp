// Listing 8.7
// pointers as class members
// accessed with -> operator

#include <iostream>

class SimpleCat
{
	public:
		SimpleCat();
		~SimpleCat();
		int GetAge() const { return *itsAge; }
		void SetAge(int age) { *itsAge = age; }
		int GetWeight() const { return *itsWeight; }
		void SetWeight(int weight) { *itsWeight = weight; }
	private:
		int * itsAge;
		int * itsWeight;
};

SimpleCat::SimpleCat()
{
	itsAge = new int(2);
	itsWeight = new int(5);
	std::cout << "Constructor called... " << std::endl;
}

SimpleCat::~SimpleCat()
{
	delete itsAge; 
	delete itsWeight;
	std::cout << "Destructor called... " << std::endl;
}

int main()
{
	using namespace std;

	SimpleCat *Frisky = new SimpleCat;
	cout << "Frisky is " << Frisky->GetAge()
		<< " years old " << endl;
	Frisky->SetAge(5);
	cout << "Frisky is " << Frisky->GetAge()
		<< " years old " << endl;
	delete Frisky;
	
	return 0;
}
