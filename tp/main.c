#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>


#include "initMatrix.h"
#include "displayMatrix.h"
#include "mul.h"






int main(int argc, char **argv) {

	int n;  	// MATRIX DIMENSION
	int i, j;

	if (argc == 1){
		printf("Usage: ./app-hw1 <matrix-size>\n");
		return 1;
	}

	n = atoi (argv[1]);
	printf("Matrix size = %d\n", n);
	int **A = (int **)malloc(n * sizeof(int *));
	for (i = 0; i < n; i++)
		A[i] = (int *)malloc(n * sizeof(int));
// genere la matrice A ar la fct rand
generateRandomMatrix(A, n, 0, 99);
//affichage de la matrice A	
	printMatrix(A, n);

	
	
printf("\n");
	
printf("Matrix 2 size = %d\n", n);
	int **B = (int **)malloc(n * sizeof(int *));
	for (i = 0; i < n; i++)
		B[i] = (int *)malloc(n * sizeof(int));
// genere la matrice A ar la fct rand
	generateRandomMatrix(B, n, 1, 99);
//affichage de la matrice B	
	printMatrix(B, n);
// la matrice resutat de la mult	
	int **C = (int **)malloc(n * sizeof(int *));
	for (i = 0; i < n; i++)
		C[i] = (int *)malloc(n * sizeof(int));
		    
 printf("Le resultat de notre matrice \n" );       	    
        mulMatrix (C,A,B,n);
        printMatrix(C, n);
 
 	return 0;
}
