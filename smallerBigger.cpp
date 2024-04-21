#include <iostream>

void inputNumbers()
{
	std::cout << "Please enter a smaller integer: " << std::endl;
	int smaller;
	std::cin >> smaller;
	std::cout << "Please enter a bigger integer: " << std::endl;
	int bigger;
	std::cin >> bigger;

		if (smaller > bigger)
		{
			std::cout << "Smaller is bigger! Swapping values..." << std::endl;
			int temp = smaller; //temp is made
			smaller = bigger;
			bigger = temp;
		} //temp dies here

		std::cout << "The bigger number is " << bigger << std::endl;
		std::cout << "The smaller number is " << smaller << std::endl;
}

int main()
{
	inputNumbers();
}