#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* Dylan Brown
* CSE 2321
* Lab 1
* The purpose of this lab is to conduct a Depth First Search.
*
*/


int getNumberOfVerticesFromUser();
//int promptUserForAdjMatrix(int numVertices, int **matrix);
int promptUserForAdjMatrix(int numVertices, int matrix[12][12]);
int** allocateMemoryForAdjMatrix(int numVertices);
int printMatrix(int numVertices, int matrix[12][12]);

int main(){
	int matrix[12][12];
	int numVertices = getNumberOfVerticesFromUser();
	//int **matrix = allocateMemoryForAdjMatrix(numVertices);
	promptUserForAdjMatrix(numVertices, matrix);
	printMatrix(numVertices, matrix);
return 0;
}

int getNumberOfVerticesFromUser(){
  printf("Please enter the number of vertices in this graph.\n");
  
  int numVertices; 
  scanf("%i", &numVertices);

  return numVertices;
}

int** allocateMemoryForAdjMatrix(int numVertices){
 int **matrix;
 matrix = (int**) malloc (sizeof(int) * numVertices);
 int i = 0;
 while (i < numVertices){
	matrix[i] = (int*) malloc (sizeof(int) * numVertices);
	i++;
 }	
}

//int promptUserForAdjMatrix(int numVertices, int **matrix){
int promptUserForAdjMatrix(int numVertices, int matrix[12][12]){
	int i = 0;
	int val;
  	printf("\nPlease enter the Adjacency Matrix below.\n");
	while (i < numVertices){
		int j = 0;
		while (j < numVertices){
			scanf("%i", &val);
			matrix[i][j] = val;
			j++;
		}
		i++;
	}
	return 0;
}

int printMatrix(int numVertices, int matrix[12][12]){
	int i = 0;
	printf("\n***");
	while (i < numVertices){
		int j = 0;
		printf("\n");
		while (j < numVertices){
			printf("%i ", matrix[i][j]);
			j++;
		}
		i++;
	}
	printf("\n***");
}
