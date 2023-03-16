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
	
	int tab,num,num2,resu;
	system("color 02");
	printf("Digite um número: ");
	scanf("%d",&tab);
	printf("Digite até onde vai: ");
	scanf("%d",&num);
	
	num2=1;
	while(num2<=num){
		//TODO
		resu=tab+num2;
		printf("\n%d+%d=%d",tab,num2,resu);
		num2=num2+1;
		Sleep(50);
	}
	return 0;
}
