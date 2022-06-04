#include<iostream>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main(){
	int ordem, b, l=1, counter=0;
	float value, soma=0;
	
	cout<<"\n\n    Entre ordem da matriz :";
	cin>>ordem;
	int c=1;
	
	float *matriz_original,*matriz_inversa, *matriz_pequena, *matriz_resultado;

	matriz_original = new float [ordem*ordem];
	matriz_inversa = new float [ordem*ordem];
	matriz_pequena = new float [ordem];
	matriz_resultado = new float [ordem];

	cout << "\n";
//0000000000000000000000000 Matriz Original 00000000000000000000000000000000000000000000000000
	cout<<"\n**** Entre com valores da Matriz Original ****\n\n";
	
    cout << "\n    Digite o valor da base para linha " << l << " : ";
	cin>>value;

	for(int i=1; i<(ordem*ordem); i++){	

		
		matriz_original[i-1] = pow(value, (c-1));
		c++;

		if((i)%ordem==0){ //resetar numero da coluna para 1 (estetico)
			l++;
			cout << "    Digite o valor da base para linha "<< l << " : ";
			cin>>value;
			c=1;
		}
		if((i+1) == ordem*ordem){
			matriz_original[i] = pow(value, (c-1));
		}	
	}
//000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
    c=1;
	l=1;  
//0000000000000000000000000000000000 Matriz inversa 0000000000000000000000000000000000000000000

    cout<<"\n**** Entre com valores da Matriz inversa ****\n\n";
    
    for(int i=0; i<(ordem*ordem); i++){	

		cout<<"  i["<<l<<c<<"] : ";

		cin>>value;
		matriz_inversa[i] = value;
		c++;
		if((i+1)%ordem==0){ //resetar numero da coluna para 1 (estetico)
			l++; c=1;
		}			
	}
    
//000000000000000000000000000000000000 Matriz Y 00000000000000000000000000000000000000000000
    l=1;
    cout<<"\n**** Entre com valores da Matriz Y ****\n\n";
    
    for(int i=0; i<(ordem); i++){	

		cout<<"  y["<<l<<1<<"] : ";
		cin>>value;
		matriz_pequena[i] = value;
		l++;
					
	}

//00000000000000000000000000000000000000000000000 Mostrar na Tela 0000000000000000000000000000000000000000000000000000000
system("cls");

	cout <<"\n\n**** Matriz original ****\n" <<"\n  | ";
		
	for(int i=0; i<(ordem*ordem); i++){	
		cout<<setprecision(4)<<setw(4)<<matriz_original[i]<<" ";
			if((i+1)%ordem==0){
				cout<<"|\n";
				if(i!=((ordem*ordem)-1)){
				cout<<"  | ";
				}
			}
		}

	
	cout <<"\n**** Matriz Inversa ****\n" <<"\n  | ";
		
	for(int i=0; i<(ordem*ordem); i++){	
		cout<<setprecision(4)<<setw(5)<<matriz_inversa[i]<<" ";
			if((i+1)%ordem==0){
				cout<<"|\n";
				if(i!=((ordem*ordem)-1)){
				cout<<"  | ";
				}
			}
		}

	cout <<"\n**** Matriz Y ****\n";

	for(int i=0; i<(ordem); i++){
        cout<<"\n  | ";
		cout<<setprecision(4)<<setw(5)<<matriz_pequena[i];
		cout<<"  | ";
			
		}
		
//0000000000000000000000000000000000000 Fazendo Calculo Da Matriz Resultante 0000000000000000000000000000000000000000000000000000

	for(int i=0; i<(ordem*ordem); i=i+3){	

		for(int j=0; j<ordem; j++){
        soma = soma + (matriz_inversa[i+j]*matriz_pequena[j]);
    }

		matriz_resultado[counter] = soma;
        soma = 0;
        counter++;
	}


//000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

    cout <<"\n\n****** Matriz Resultante ******\n";

	for(int i=0; i<(ordem); i++){
        cout<<"\n  | ";
		cout<<setw(3)<<"a"<<i;
		cout<<"  | ";

        cout<<"  | ";
		cout<<setprecision(4)<<setw(6)<<matriz_resultado[i];
		cout<<"  | ";
			
		}
cout<<"\n\n\n";


//000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

//000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

	system ("pause");
    return 0;
}


