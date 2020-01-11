#include <iostream>
using namespace std;

int main(){
  
  int stett[14];
  int oddur[14];
  int oddur2[14];
  
  int n = 0; 

  for(int i = 0; i <= 15; i++){
  	stett[i] = 1 + i;
  	oddur[i] = 1 + 2*i;
  }
   
  do{
      
   n++; 
  }while(n != 15);
  
  for(int i = 0; i <= 14; i++){
  	std::cout << stett[i] << " " << oddur[i] << "\n" ; 
  }
  return 0; 
}