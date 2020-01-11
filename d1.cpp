#include <iostream>
using namespace std; 

double medaltal(double a, double b){
	double c = a + b; 
	return c / 2;
}

int main(){
	double a, b; 
	std::cout <<"Fyrri talan?: "; 
	cin >> a; 
	std::cout <<"\nSidari talan?: ";
	cin >> b; 

    double c = medaltal(a,b);
	
	std::cout <<"medaltal talnanna er: " << c <<endl; 
	
	return 0; 
}