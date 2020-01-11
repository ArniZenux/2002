#include <iostream>
using namespace std; 

int main(){
	int high = 0; 
	int low = 0; 
	int input; 
    int i = 0; 
    int array[9];

    do {
    	std::cout << "Input: [" << i << "]"; 
		cin >> input;
		array[i] = input;
		i++;
	}while( i != 10 );
	
	high = low = array[0];

	for(int i = 1; i < 10; i++){
		
		std::cout << " [" << array[i] << "] " ;
	    
	    if( high <= array[i] )
	    {
	    	high = array[i];
	    }
	    else if( low >= array[i] )
	    {
	    	low = array[i];
	    }
	
	}

	std::cout <<"\nHigh er : " << high << endl; 
	std::cout <<"Low er : " << low << endl; 
	return 0; 
}