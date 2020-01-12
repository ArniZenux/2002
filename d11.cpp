#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string line;
	ifstream myfile ("problemx.dat");

	if(myfile.is_open()){
		while( getline(myfile,line)){
		    std::cout << line << "\n"; 
		}
		myfile.close(); 
	}
	else 
		std::cout << "eorror";	
}