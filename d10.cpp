#include <iostream>
#include <string> 
using namespace std;

void checkDagur(int dagur, int manud){
	if(1 == manud){
		if(1 <= dagur && dagur <= 20){
			std::cout << "Steingeit" << endl; 
		}
		else if (21 <= dagur && dagur <= 31){
			std::cout << "Vatnsberi" << endl; 
		}
	}
	if (2 == manud){
		if(1 <= dagur && dagur <= 19){
			std::cout << "Vatnsberi" << endl; 
		}
		else if (21 <= dagur && dagur <= 31){
			std::cout << "Fiskur" << endl; 
		}	
	}
	if (3 == manud){
		if(1 <= dagur && dagur <= 20){
			std::cout << "Fiskur" << endl; 
		}
		else if (21 <= dagur && dagur <= 31){
			std::cout << "Hrutur" << endl; 
		}	
	}
	if (4 == manud){
		if(1 <= dagur && dagur <= 20){
			std::cout << "Hrutur" << endl; 
		}
		else if (21 <= dagur && dagur <= 31){
			std::cout << "Naut" << endl; 
		}	
	}
	if (5 == manud){
		if(1 <= dagur && dagur <= 21){
			std::cout << "Naut" << endl; 
		}
		else if (22 <= dagur && dagur <= 31){
			std::cout << "Tviburi 1" << endl; 
		}	
	}
	if (6 == manud){
		if(1 <= dagur && dagur <= 21){
			std::cout << "Tviburi 2" << endl; 
		}
		else if (22 <= dagur && dagur <= 31){
			std::cout << "Krabbi" << endl; 
		}	
	}
	if (7 == manud){
		if(1 <= dagur && dagur <= 23){
			std::cout << "Krabbi" << endl; 
		}
		else if (24 <= dagur && dagur <= 31){
			std::cout << "Ljos" << endl; 
		}	
	}
	if (8 == manud){
		if(1 <= dagur && dagur <= 24){
			std::cout << "Ljos" << endl; 
		}
		else if (25 <= dagur && dagur <= 31){
			std::cout << "Meyja" << endl; 
		}	
	}
	if (9 == manud){
		if(1 <= dagur && dagur <= 23){
			std::cout << "Meyja" << endl; 
		}
		else if (24 <= dagur && dagur <= 31){
			std::cout << "Vog" << endl; 
		}	
	}
	if (10 == manud){
		if(1 <= dagur && dagur <= 22){
			std::cout << "Vog" << endl; 
		}
		else if (22 <= dagur && dagur <= 31){
			std::cout << "Sporddreki" << endl; 
		}	
	}
	if (11 == manud){
		if(1 <= dagur && dagur <= 21){
			std::cout << "Sporddreki" << endl; 
		}
		else if (22 <= dagur && dagur <= 31){
			std::cout << "Bogmadur" << endl; 
		}	
	}
	if (12 == manud){
		if(1 <= dagur && dagur <= 21){
			std::cout << "Bogmadur" << endl; 
		}
		else if (22 <= dagur && dagur <= 31){
			std::cout << "Steingeit" << endl; 
		}	
	}
}

int main(){
	string kennitala; 
	int dagur, manud; 
    
    /*
	std::cout <<"Sladu kennitala: \n" ;
	std::cout <<"Dagur: " ;
	std::cin >> dagur; 
	std::cout <<"Manud: ";
	std::cin >> manud; 
    std::cout << dagur << " " << manud << endl; 
    */
    
    //checkDagur(dagur, manud); 
	std::cout << "Kennitala: ";
	std::getline(std::cin,kennitala);
	char kt[kennitala.length()];
	char dagKT[2];
	std::cout << kennitala << endl; 
	
	for(int i=0; i < 2; i++){
		dagKT[i] = kennitala[i];
	}

	for(int i=0; i <= 1; i++){
		std::cout << "[" << dagKT[i] << "]" ; 
	}

	char dag = kt[0] + kt[1]; 
	std::cout<< dag; 
	//dagur = (int)kt[0] + (int)kt[1]; 
	//std::getline(std::cin,kennitala); 
	//std::getline(std::cin,kt); 
	//std::cout << dagur << " , " << kt[5] <<"\n"; 
    
	return 0; 	
}
