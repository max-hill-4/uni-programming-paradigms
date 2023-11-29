
#include <iostream>
#include <vector>

class Animal
{
public:
	virtual void speak(void) = 0;
};


class Sheep : public Animal
{
public:
	void speak(void) {
		std::cout << "Sheep says: \t\tbaa!" << std::endl;
	}
};

class Cow : public Animal
{
public:
	void speak(void) {
		std::cout << "Cow says: \t\tmoo!" << std::endl;
	}
};

class Frisian : public Cow
{
	void speak(void) {
		std::cout << "Frisian Cow says: \tmoo (in black and white)!" << std::endl;
	}
};

int main()
{
	// A vector of pointers is needed, as it cannot instantiate abstract classes
	std::vector<Animal*> container;
	// 'new' returns a pointer and allocates memory
	container.push_back(new Sheep());

	
	for (int a = 0; a < container.size(); a++)
	{
		// '->' is used to access the method of the pointer
		container[a]->speak();
	}
}
