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
	
/*GABARITO
Capital? 100.00 
Juros? 10
Per�odo? 3		
1� m�s R$ 110,00
2� m�s R$ 121,00
3� m�s R$ 133,10*/
	
//VARI�VEIS
	int capital,juros,periodo;
	float mont1,mont2,mont3;
	capital=100;
	juros=10;
	periodo=3;
	
//C�LCULOS
	mont1=capital+(capital*10/100);
	mont2=mont1+(mont1*10/100);
	mont3=mont2+(mont2*10/100);
	
//IMPRESS�O
	printf("Juros: 10%c\nPer�odo: 3 meses\nCapital Inicial: R$100,00\n",37);
	Sleep(800);
	printf("\nMontante 1� m�s: R$%.2f",mont1);
	Sleep(800);
	printf("\nMontante 2� m�s: R$%.2f",mont2);
	Sleep(800);
	printf("\nMontante 3� m�s: R$%.2f",mont3);
	
return 0;
}
