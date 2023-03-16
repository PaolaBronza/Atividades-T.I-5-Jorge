#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	unsigned int cp = 1252; 
	unsigned int cpin  = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);       
	SetConsoleOutputCP(cp);
	
	system("color 02");
	
//006) Dado um número natural (n) desenhe um quadrado n x n. (for aninhado).	
	int i, num, linha, num2;
	
	printf("\nDigite um número igual ou acima de 10: ");
	scanf("%d", &num);
	
	linha = num-2;
	num2 = (num/2)-2;
	num2 = num;
	
	printf("\n\n\n\n");
	printf("\n%d X %d\n", num, num);
	Sleep(50);
		for(i=0;i<=num;i++){
			printf("-");
			Sleep(50);
		}for(i=0;i<=num2;i++){
			printf("\n|");
			Sleep(50);
			for(int i=0;i<=linha;i++){
				printf(" ");
				Sleep(50);
			}
			printf("|");
			Sleep(50);	
		}	
	
		printf("\n");
		Sleep(50);
		for(i=0;i<=num;i++){
				printf("-");
				Sleep(50);
		}
		
		printf("\n\n\n");
		Sleep(50);
	
	
	return 0;

}
