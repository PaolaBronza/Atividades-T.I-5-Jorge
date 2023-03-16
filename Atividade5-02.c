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
	
	int contagem, soma;
		system("color 02");
		
		for(contagem =0;contagem<=10;contagem--){
			//TODO
			printf("\n%d",contagem);
			Sleep(50); //1000=1seg 500=meio segundo
		}
return 0;
}
