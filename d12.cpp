#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main(){
	
	fstream mydrasl("Newkeppendur.dat", ios::out| ios::in);

	string line; 
	std::cout <<"Keppendur" << endl; 
	ifstream myfile("keppendur.dat");
	
	ofstream myNewFile("Tilkeppendur.dat");
	
	if(myNewFile.is_open()){
		std::cout << "New file is open" << endl; 
	}

	if(myfile.is_open()){
		std::cout << "File is open" << endl;
		while(getline(myfile,line)){
			if(line == )
			std::cout << "Welcome " << line << " til Íslands \n"; 
		    myNewFile << "Welcome " << line << " til Íslands \n"; 
		} 
	}	
	else {
		std::cout << "Unable open a file" << endl; 
 	}
 	myfile.close();
 	myNewFile.close(); 
	return 0; 
}