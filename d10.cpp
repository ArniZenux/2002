#include <iostream>
#include <string> 
using namespace std;

int main(){
	//string kennitala; 
	char kt[11];

	std::cout <<"Sladu kennitala: " ;
	cin.getline(kt,11); 
	//std::getline(std::cin,kennitala); 
	//std::getline(std::cin,kt); 
	std::cout << kt[4] << " , " << kt[5] <<"\n"; 

	return 0; 	
}
