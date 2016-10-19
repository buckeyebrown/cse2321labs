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
int promptUserForAdjMatrix(int numVertices, int matrix[12][12]);
int printMatrix(int numVertices, int matrix[12][12]);
int initializedMarkedArray(int numVertices, int *marked);
int depthFirstSearch(int *marked, int matrix[12][12], int i, int numVertices);

int main(){
	int matrix[12][12];
	int numVertices = getNumberOfVerticesFromUser();
	int marked[numVertices];
	promptUserForAdjMatrix(numVertices, matrix);
	printMatrix(numVertices, matrix);
	initializedMarkedArray(numVertices, marked);
	printf("\nComponent: ");
	depthFirstSearch(marked, matrix, 0, numVertices);
	printf("\n");
	printf("Marked vertices: ");
	int a = 0;
	while (a < numVertices){
	printf(" %i", marked[a]);
	a++;
	}
	printf("\n");

return 0;
}

int depthFirstSearch(int *marked, int matrix[12][12], int i, int numVertices){
	int j=0;
	int num = i + 1;
	printf(" %i", num);
	marked[i]=1;
	while (j < numVertices){
	if (matrix[i][j] == 1 && !marked[j]){
		depthFirstSearch(marked, matrix, j, numVertices);
		}
	j++;
	}
	return 0;
}

int getNumberOfVerticesFromUser(){
  printf("Please enter the number of vertices in this graph.\n");
  
  int numVertices; 
  scanf("%i", &numVertices);

  return numVertices;
}

int initializedMarkedArray(int numVertices, int *marked){
 int a=0;
 while (a < numVertices){
	marked[a] = 0;
	a++;
 }
 return 0;
}

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
	printf("\n***\n");
	return 0;
}
