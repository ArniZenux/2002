#include <iostream>
using namespace std; 

double tomma(double a){
	return a * 2.54;
}

int main(){
	double a; 
	std::cout <<"Lengd (cm)?: "; 
	cin >> a; 
	
    double c = tomma(a);
	
	std::cout <<"Tomma talnanna er: " << c <<endl; 
	
	return 0; 
}