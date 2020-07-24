#include<iostream>
#include<vector>
#include<string>

int main()
{
	std::vector<std::vector<std::string>>  movie_name{ {"Mission Impossible", "Thor","Hulk","Superman"}, 
														{"Ready","Kick","Chennai Express","Wanted"},
														{"Aynabazi","Monpura","Noy nombor bipod sonket"} };

	std::cout << "My favorite Super hero: " << movie_name.at(0).at(1)<<std::endl;
	std::cout << "Shahrukh Khan's Movie: " << movie_name.at(1).at(2) << std::endl;
	std::cout << "Humayun Ahmed's Impress Telefilm: " << movie_name.at(2).at(2) << std::endl;
}