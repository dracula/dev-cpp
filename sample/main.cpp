#include <iostream>
#include <vector>

class Vampire
{
private:
	std::string location;
	int birthDate;
	int deathDate;

public:	
	Vampire(std::string location, int birthDate, int deathDate)
	{
		this->location = location;
		this->birthDate = birthDate;
		this->deathDate = deathDate;
	}
	
	int getAge()
	{
		return this->calculateAge();
	}
	
	int calculateAge()
	{
		return this->deathDate - this->birthDate;
	}
};

int main(void)
{
	Vampire dracula = Vampire(std::string("Transylvania"), 1428, 1476);
	std::cout << "Dracula was " << dracula.calculateAge() << " years of pure spookiness." << std::endl;
}
