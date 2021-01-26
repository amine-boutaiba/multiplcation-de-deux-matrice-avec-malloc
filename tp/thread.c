#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "thread.h"

typedef struct les_variables_utulise{
	int n;
	int debut;
	int fin;
	int **A;
	int **B;
	int **C;
}les_variables_utulise;

void*multiplication_matrix_thread(void * args){
les_variables_utulise * bloc = (les_variables_utulise *) args;
for(int i=debut;i<=fin;i++){
for(int j=0; j<n; j++)
for(int k=0; k<n; k++){
C[i][j]+ = A[i][k] *B[k][j];			
			}
		}
	
}
}

