/*Filtro de promedio movil, 
Erick O. Melian, 1065375
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float x[16];
	float y[16];
	for(int i=0; i<=15;i++){
		cout<<"Ingrese el valor #"<<i+1<<": ";
		cin>>x[i];
	}
	for(int n=2;n<=16;n++){
		y[n] = (x[n] + x[n-1] + x[n-2])/3; 
	}
	
	for (int m = 2; m <= 16; m++){
     cout << y[m] << " ";
    }

}
# moving-average-filter
