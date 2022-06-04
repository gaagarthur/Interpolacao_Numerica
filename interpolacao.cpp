#include<iostream>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main(){
	int ordem, b, l=1;
	float value;
	
	cout<<" Entre ordem da matriz :";
	cin>>ordem;
	int c=1;
	
	float *matriz_original,*matriz_inversa, *matriz_pequena, *matriz_resultado;

	matriz_original = new float [ordem*ordem];
	matriz_inversa = new float [ordem*ordem];
	matriz_pequena = new float [ordem];
	matriz_resultado = new float [ordem];

	cout << "\n";

	cout<<"\n Entre com valores da Matriz Original\n\n";
	/*
	for(int i=0; i<(ordem*ordem); i++){	

		cout<<"o["<<l<<c<<"] : ";
		//cout<<"entre numero :";
		cin>>value;
		matriz_original[i] = value;
		c++;
		if((i+1)%ordem==0){ //resetar numero da coluna para 1 (estetico)
			l++; c=1;
		}			
	}
	c=1;
	l=1;

	system("cls");

	cout<<"\n Entre com valores da Matriz inversa\n\n";


	
	for(int i=0; i<(ordem*ordem); i++){	

		cout<<"i["<<l<<c<<"] : ";
		//cout<<"entre numero :";
		cin>>value;
		matriz_inversa[i] = value;
		c++;
		if((i+1)%ordem==0){ //resetar numero da coluna para 1 (estetico)
			l++; c=1;
		}			
	}

	system("cls");

	cout<<"\n Entre com valores da Matriz inversa\n\n";


	for(int i=0; i<(ordem*ordem); i++){	

		cout<<"i["<<l<<c<<"] : ";
		//cout<<"entre numero :";
		cin>>value;
		matriz_inversa[i] = value;
		c++;
		if((i+1)%ordem==0){ //resetar numero da coluna para 1 (estetico)
			l++; c=1;
		}			
	}
	*/

	cout << "\n    Digite o valor da base para linha " << l << " : ";
	cin>>value;

	for(int i=1; i<(ordem*ordem); i++){	

		
		matriz_original[i-1] = pow(value, (c-1));
		c++;

		if((i)%ordem==0){ //resetar numero da coluna para 1 (estetico)
			l++;
			cout << "\n    Digite o valor da base para linha "<< l << " : ";
			cin>>value;
			c=1;
		}
		if((i+1) == ordem*ordem){
			matriz_original[i] = pow(value, (c-1));
		}	
	}








	cout<<"\n  | ";
		
	for(int i=0; i<(ordem*ordem); i++){	
		cout<<setprecision(4)<<setw(6)<<matriz_original[i]<<" ";
			if((i+1)%ordem==0){
				cout<<"|\n";
				if(i!=((ordem*ordem)-1)){
				cout<<"  | ";
				}
			}
		}

	/*
	cout<<"\n  | ";
		
	for(int i=0; i<(ordem*ordem); i++){	
		cout<<setprecision(4)<<setw(6)<<matriz_inversa[i]<<" ";
			if((i+1)%ordem==0){
				cout<<"|\n";
				if(i!=((ordem*ordem)-1)){
				cout<<"  | ";
				}
			}
		}
		*/


	system ("pause");
    return 0;
}


