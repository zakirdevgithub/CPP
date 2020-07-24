#include<iostream>

int main()
{
	const int rows{ 3 };
	const int cols{ 4 };
	int my_array[rows][cols]{{1,2,3,4},
							{10,20,30,40},
							{100,200,300,400}
							};

	std::cout << my_array[0][0]<<std::endl;
	std::cout << my_array[0][1]<<std::endl;
	std::cout << my_array[0][2]<<std::endl;
	std::cout << my_array[0][3]<<std::endl;
	std::cout << my_array[1][0]<<std::endl;
	std::cout << my_array[2][0]<<std::endl;


}