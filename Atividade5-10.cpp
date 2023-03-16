#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <math.h>
	

int main(void){
	setlocale(LC_ALL,"portuguese");
	unsigned int cp = 1252; 
    unsigned int cpin  = GetConsoleCP();
    unsigned int cpout = GetConsoleOutputCP();
    SetConsoleCP(cp);       
	SetConsoleOutputCP(cp); 
	system("color 02");
	
//VARIÁVEIS
	int num,soma,resu,zero;

//CÓDIGO
	printf("Insira num número: ");
	scanf("%d",&num);
	
	for(soma=0;soma>=-1;soma++){
		resu=num+soma;
		printf("\n%d+%d=%d",num,soma,resu);
		soma=soma+1;
		Sleep(50);
			
		printf("\nDeseja parar o programa? 0-Sim 1-Não ");
		scanf("%d",&zero);
		if(zero==0){
			abort();
		}
		else{
			continue;
		}
}
return 0;
}





