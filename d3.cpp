#include <iostream>
using namespace std; 

int main()
{
	double a, b; 
	std::cout <<"Fyrri talan?: "; 
	cin >> a; 
	std::cout <<"\nSidari talan?: ";
	cin >> b; 

	if (a == b)
	{
		std::cout <<"Tolurnar eru jafnar :" << a << endl;		
	}
	else if(a < b)
	{
		std::cout << "Lower is " << a << endl;
		std::cout << "Higher is " << b << endl;  
	}
	else if(a > b)
	{
		std::cout << "Lower is " << b << endl;
		std::cout << "Higher is " << a << endl;
	}

	return 0; 
}