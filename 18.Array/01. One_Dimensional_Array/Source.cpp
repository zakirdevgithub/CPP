#include <iostream>

int main()
{
	char vowels[]{ 'a','e','i','o','u' };

	std::cout << vowels[0] << std::endl;
	std::cout << vowels[1] << std::endl;
	std::cout << vowels[2] << std::endl;
	std::cout << vowels[3] << std::endl;
	std::cout << vowels[4] << std::endl;

	///int number{5};  must be constant
	
	std::cout << std::endl;
	const int number{ 5 };
	int roll[number]{10,11,12,13,14};

	std::cout << "Roll:  " << roll[0] << std::endl;
	std::cout << "Roll:  " << roll[1] << std::endl;
	std::cout << "Roll:  " << roll[2] << std::endl;
	std::cout << "Roll:  " << roll[3] << std::endl;
	std::cout << "Roll:  " << roll[4] << std::endl;

	std::cout << std::endl;
	int person_age[5];
	std::cout << "Enter person ages: ";
	std::cin >> person_age[0];
	std::cin >> person_age[1];
	std::cin >> person_age[2];
	std::cin >> person_age[3];
	std::cin >> person_age[4];

	std::cout << "1st Person Age: " << person_age[0] << std::endl;
	std::cout << "2nd Person Age: " << person_age[1] << std::endl;
	std::cout << "3rd Person Age: " << person_age[2] << std::endl;
	std::cout << "4th Person Age: " << person_age[3] << std::endl;
	std::cout << "5th Person Age: " << person_age[4] << std::endl;


}