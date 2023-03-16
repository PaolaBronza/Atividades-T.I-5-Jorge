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

//VARI�VEIS
	int A, B, C, eleitores, voto, rand_voto;
	
//IN�CIO C�DIGO	
	printf("Quantos eleitores v�o participar dessa Elei��o:");
	scanf("%d", &eleitores);
	srand(time(NULL));
	A=0;
	B=0;
	C=0;			
	for(voto=1; voto<=eleitores;voto++){
		rand_voto = rand() % 3+1;

			if(rand_voto==1){
				A = A +1;
			}else if(rand_voto==2){
				B = B +1;
			}else if(rand_voto==3){
				C = C +1;
			}
	
	}
	
	printf("\n\nO candidatos A tem: %d Votos\nO  candidatos B tem: %d Votos\n O candidatos C tem: %d Votos\n", A, B, C);
	if(A>B&&B>C){
		printf("O candidatos A Ganhou dos outros Candidatos com %d de Votos, e em segundo lugar esta o candidatos B com %d Votos e em Ultimo o candidatos C com %d Votos", A, B, C );
	}
	if(A>C&&C>B){
		printf("O candidatos A Ganhou dos outros Candidatos com %d de Votos, e em segundo lugar esta o candidatos C com %d Votos e em Ultimo o candidatos B com %d Votos", A, C, B );
	}
	if(B>A&&A>C){
		printf("O candidatos B Ganhou dos outros Candidatos com %d de Votos, e em segundo lugar esta o candidatos A com %d Votos e em Ultimo o candidatos C com %d Votos", B, A, C );
	}
	if(B>C&&C>A){
		printf("O candidatos B Ganhou dos outros Candidatos com %d de Votos, e em segundo lugar esta o candidatos C com %d Votos e em Ultimo o candidatos A com %d Votos", B, C, A );
	}
	if(C>A&&A>B){
		printf("O candidatos C Ganhou dos outros Candidatos com %d de Votos, e em segundo lugar esta o candidatos A com %d Votos e em Ultimo o candidatos B com %d Votos", C, A, B );
	}
	if(C>B&&B>A){
		printf("O candidatos C Ganhou dos outros Candidatos com %d de Votos, e em segundo lugar esta o candidatos B com %d Votos e em Ultimo o candidatos A com %d Votos", C, B, A );
	}	
	
	return 0;

}
