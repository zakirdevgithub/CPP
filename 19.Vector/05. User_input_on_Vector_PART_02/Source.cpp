#include<iostream>
#include<vector>

int main()
{
	std::vector<double> students_gpa{};
	
	double gpa_var{ 0 };
	std::cout << "Enter Student1 GPA: ";
	std::cin >> gpa_var;
	students_gpa.push_back(gpa_var);
	std::cout << students_gpa.at(0) << std::endl;

	std::cout << "Enter Student2 GPA: ";
	std::cin >> gpa_var;
	students_gpa.push_back(gpa_var);
	std::cout << students_gpa.at(1) << std::endl;
	
	std::cout << "Enter Student3 GPA: ";
	std::cin >> gpa_var;
	students_gpa.push_back(gpa_var);
	std::cout << students_gpa.at(2) << std::endl;


}