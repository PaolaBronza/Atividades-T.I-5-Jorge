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
	
	char nome[40];
	int num;
	printf("Insira um nome: ");
	scanf("%s",&nome);
	num=1;
	for(num=0;num<=9;num++){
		printf("\n%s",nome);
		Sleep(700);
	}
	return 0;
}
