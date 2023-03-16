#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	system("color 02");
	
//VARIÁVEIS
int num,fat;

//INÍCIO PROGRAMA
	printf("CALCULANDO O FATORIAL");
	Sleep(1000);
	printf("\nInsira um número: ");
	scanf("%d",&num);
	
    for(fat=1;num>1;num=num-1)
	fat=fat*num;
	printf("\nFatorial: %d",fat);
	
return 0;
}
