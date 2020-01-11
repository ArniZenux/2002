#include <iostream>
using namespace std; 

int main(){
	int a, b, c; 
    int i = 0; 
    std::cout <<"a : " ; 
    cin >> a;
    std::cout <<"b : ";
    cin >> b; 
    
    do{
    	if(a > b){
    		c = a % b;
    		std::cout << "a : " << a << " og b " << b << " afgangur : " << c << "\n";  
   		    a = b; 
   		    b = c;
   		    i++;  
   		}
    }while(c > 0);
    
    std::cout << c << " og Staersti sameiginlegi deilir er tha :" << i; 

    return 0; 
}