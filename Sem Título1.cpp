# include <iostream>
# include <cstring>
# include <math.h>
using namespace std;
//
int main(){
//
		char bin[8];//binario.
		int dec = 0, i;// decimal , contador.
		//
		cout <<"\n Binario: ";//Pedindo binario.
		cin >> bin;//Recebendo binario.
		//
		int num,mul; // inteior recebe 0 ou 1, multiplica��o de num por 2.
		//
		for(i=strlen(bin)-1; i>=0; i--)// lupe  multiplica variavel por 2 eleva pela posi��o e soma em decimal.
		{
			if(bin[i]== "0")// transformando str em int.			
				num = 0; 
			}
			else if(bin[i] == "1")// transformando str em int.
			{
				num = 1;
			}
			mul = num *2;// multiplica��o por 2
			dec += pow(mul,i);// somando potencia��o em decimal.
		}
		//
		cout <<" DECIMAL : "<<dec<<"\n";// mostrando resultado.
	return 0;
}
