#include<iostream>
#include<vector>

int main()
{
	std::vector<double> students_gpa(3);

	std::cout << "Enter 3 GPA:";
	std::cin >> students_gpa.at(0);
	std::cin >> students_gpa.at(1);
	std::cin >> students_gpa.at(2);

	std::cout << "Output of 3 Students GPA" << std::endl;
	std::cout << students_gpa.at(0)<<std::endl;
	std::cout << students_gpa.at(1)<<std::endl;
	std::cout << students_gpa.at(2)<<std::endl;






}