#include <iostream>
#include <string>
#include <sstream>
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;
using std::string;
int  mcd(int divisor,int dividendo){
	int num=0;
        if(divisor%dividendo==0){
                return dividendo;
        }else{
        num=divisor%dividendo;
        divisor =dividendo;
        dividendo=num;
        return mcd(divisor,dividendo);
        }
}
int* initArray(){
        int* num_primos= new int[25];
	//int primos2[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	num_primos[0] = 2;
        num_primos[1] = 3;
        num_primos[2] = 5;
        num_primos[3] = 7;
        num_primos[4] = 11;
        num_primos[5] = 13;
        num_primos[6] = 17;
        num_primos[7] = 19;
        num_primos[8] = 23;
        num_primos[9] = 29;
        num_primos[10] = 31;
        num_primos[11] = 37;
        num_primos[12] = 41;
        num_primos[13] = 43;
        num_primos[14] = 47;
        num_primos[15] = 53;
        num_primos[16] = 59;
        num_primos[17] = 61;
        num_primos[18] = 67;
        num_primos[19] = 71;
        num_primos[20] = 73;
        num_primos[21] = 79;
        num_primos[22] = 83;
        num_primos[23] = 89;
        num_primos[24] = 97;

        return num_primos;
}


int main(){
	char r='s';
	int divisor=1;
	int* primos;
	int dividendo=2;
	stringstream cadena;
	int numero_usuario=0,exponente=0;
	while(r=='s'){
		cout<<"1.Euclides\n"
		      "2.Primos\n"
		      "3.Guerras"<<endl;
		int opcion=0;
		cin>>opcion;
		switch(opcion){
			case 1:
			while(divisor<dividendo){
				cout<<"Ingrese un numero"<<endl;
				cin>>divisor;
                                cout<<"Ingrese un numero menor al anterior "<<divisor<<dividendo<<endl;
				cin>>dividendo;	
			}
			cout<<"El maximo comun divisor es: "<<mcd(divisor,dividendo)<<endl;
			primos=initArray();
			for (int i = 0; i < 25; i++)
				cout<<primos[i]<<endl;
			break;
			case 2:
			cout<<"Ingrese un numero"<<endl;
			cin>>numero_usuario;
			primos=initArray();
			cout << numero_usuario<<"= ";
			for(int i=0;i<25;i++){
				while(numero_usuario%primos[i]==0){
					exponente++;
					numero_usuario=numero_usuario/primos[i];
					}
				if(exponente>0){
				cadena<<std::to_string(primos[i])<<"^"<<std::to_string(exponente)<<"*";
				exponente=0;
					}
				}
			cout<<cadena.str()<<endl;


				break;
			case 3:
				break;


			}
		r='n';
       		}
}

