/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
	int RI,RF,TI,TF,MULT;
	cout<<Ingresa el numero de la tabla que deseas que se ejecute>> endl;
	cin>>RI;
	cout<<Ingresa el numero de la ultima tabla que deseas que se ejecute>> endl;
	cin>>RF;
	cout<<Ingresa el numero de la tabla que deseas que se ejecute>> endl;
	cin>>TI;
	cout<<Ingresa el numero de la tabla que deseas que se ejecute al final>> endl;
	cin>>TF
	
	for (int i=RI; i<=RF; i++){
		for (int j=TI; j=TF; j++){
			MULT= i*j;
			cout <<""<<i<<"A"<<j<<"="<<MULT<<endl;
		}
	}

	return 0;
}