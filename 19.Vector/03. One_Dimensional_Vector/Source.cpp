#include<iostream>
#include<vector>

int main()
{
	std::vector <int> roll_number{101,102,103,104,105,106,107,108,109,110};

	std::cout << "Using Array Syntax roll_number[n] " << std::endl;

	std::cout << roll_number[0] << std::endl;
	std::cout << roll_number[1] << std::endl;
	std::cout << roll_number[2] << std::endl;
	std::cout << roll_number[3] << std::endl;
	std::cout << roll_number[4] << std::endl;
	std::cout << roll_number[5] << std::endl;
	std::cout << roll_number[6] << std::endl;
	std::cout << roll_number[7] << std::endl;
	std::cout << roll_number[8] << std::endl;
	std::cout << roll_number[9] << std::endl;

	std::cout << "Size of Vector is: " << roll_number.size() << std::endl;

	std::cout << "\nUsing Vector Syntax roll_number.at(n)" << std::endl;
	
	std::cout << roll_number.at(0) << std::endl;
	std::cout << roll_number.at(1) << std::endl;
	std::cout << roll_number.at(2) << std::endl;
	std::cout << roll_number.at(3) << std::endl;
	std::cout << roll_number.at(4) << std::endl;
	std::cout << roll_number.at(5) << std::endl;
	std::cout << roll_number.at(6) << std::endl;
	std::cout << roll_number.at(7) << std::endl;
	std::cout << roll_number.at(8) << std::endl;
	std::cout << roll_number.at(9) << std::endl;

	std::cout << "Size of Vector is: " << roll_number.size() << std::endl;

}