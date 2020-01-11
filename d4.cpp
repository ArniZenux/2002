#include <iostream>
using namespace std; 

int veldi(int a, int n){
	int m = 1;
    for(int i = 0 ; i < n; i++){
     	m *= a;
    }

    return m;
}

int main(){
	int a, n, b;
	std::cout <<"Fyrri a, heiltalan?: "; 
	cin >> a; 
	std::cout <<"\nSidari n, veldi talan?: ";
	cin >> n;

	b = veldi(a,n); 

	std:: cout << b; 

	return 0; 
}