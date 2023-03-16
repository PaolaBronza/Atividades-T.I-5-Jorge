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
	
	int num, num1,num2,num3,num4,num5;
	num=num1,num2,num3,num4,num5;
	printf("Insira 5 números:\nN°1: ");
	scanf("%d",&num1);
	printf("N°2: ");
	scanf("%d",&num2);
	printf("N°3: ");
	scanf("%d",&num3);
	printf("N°4: ");
	scanf("%d",&num4);
	printf("N°5: ");
	scanf("%d",&num5);
	
	while(num1,num2,num3,num4,num5>=0){
		printf("%d %d %d %d %d %d",num1,num2,num3,num4,num5);
	}
	
return 0;
}
