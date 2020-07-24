#include<iostream>


using std::cout;
using std::endl;

int main()

{
	int array[3][4][4]  { { 
		                  {1,2,3,4},
	                      {5,6,7,8},
	                      {9,10,11,12},
	                      {13,14,15,16}
		                  }, 

	                     {
						  {21,22,23,24},
	                      {25,26,27,28},
	                      {29,30,31,32},
	                      {33,34,35,36}
	                      }, 
		 
						{
					     {37,38,39,40},
	                     {41,42,43,44},
	                     {45,46,47,48},
	                     {49,50,51,52}
	                     }
	
	       };



	int array_size = sizeof(array) / sizeof(array[0][0][0]);
	cout << "Array Size of array: " << array_size << endl; // Ans 48

	int array2[]{100,200,300,400};
	cout << "Array size of array2: " << sizeof(array2) / sizeof(array2[0])<<endl; // Ans 4

		              
	for (int i{ 0 }; i <3; i++)
	{
		for (int j{ 0 }; j < 4; j++) 
		{
			for (int k{ 0 }; k < 4; k++) {
				cout << array[i][j][k]<<" ";
			}
		}

	}
}