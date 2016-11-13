#include <stdio.h>
#include <stdlib.h>

/**
* Dylan Brown
* CSE 2321
* Lab 2
* The purpose of this lab is to conduct a Breadth First Search given an
* inputted number of vertices and an adjacency matrix.
*
*/


int getNumberOfVerticesFromUser();
int promptUserForAdjMatrix(int numVertices, int matrix[12][12]);
Queue* initializeQueue(int numVertices);
Node* createNode(int nodeVal);
void enqueue(int data, Queue* queue);

typedef struct queue{
	Node* start;
	Node* end;
	int length;
} Queue;

typedef struct node{
	int data;
	struct node *next;
} Node;


int main(int argc, char *argv[]){
  int matrix[12][12];
  int numVertices = getNumberOfVerticesFromUser();
  int marked[numVertices];
  promptUserForAdjMatrix(numVertices, matrix);
  Queue* queue = initializeQueue(numVertices);
  promptUserForInputOfPositiveInt(list);
  
  return 0;
}

int getNumberOfVerticesFromUser(){
  printf("Please enter the number of vertices in this graph.\n");
  
  int numVertices; 
  scanf("%i", &numVertices);

  return numVertices;
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

Queue* initializeQueue(int numVertices){
	Queue* queue = malloc(sizeof(Queue));
	queue->start = NULL;
	queue->end = NULL;
	queue->length = numVertices;
	return queue;
}

Node* createNode(int nodeVal){
//Create a node structure from a value and return it
  Node* createdNode = malloc(sizeof(Node));
  createdNode->data = nodeVal;
  createdNode->next = NULL;
  return createdNode;
}

void enqueue(int data, Queue* queue){
	Node* node = creadeNode(data);
	if(queue->start == NULL){
		queue->start = node;
	}
	else {
	Node* priorNode = queue->start;
		while(priorNode->next != NULL){
			priorNode = priorNode->next;
		}
	priorNode->next = node;
	queue->end = node;
	}
}

Node* dequeue(Queue* queue){
	Node* head = queue->start;
	queue->start = head->next;
	return head;
}

//CSE lab 1

/**
int getNumberOfVerticesFromUser();
int promptUserForAdjMatrix(int numVertices, int matrix[12][12]);
int initializedMarkedArray(int numVertices, int *marked);
int depthFirstSearch(int *marked, int matrix[12][12], int i, int numVertices);
int beginDFS(int *marked, int matrix[12][12], int numVertices);

int main(){
	int matrix[12][12];
	int numVertices = getNumberOfVerticesFromUser();
	int marked[numVertices];
	promptUserForAdjMatrix(numVertices, matrix);
	initializedMarkedArray(numVertices, marked);
	beginDFS(marked, matrix, numVertices);

return 0;
}


int beginDFS(int *marked, int matrix[12][12], int numVertices){
	int numComponents = 0;
	int x = 0;

	while (x < numVertices){
		if (marked[x] == 0){
			numComponents++;
			printf("\nComponent:");
			depthFirstSearch(marked, matrix, x, numVertices);
		}
		x++;
	}
	printf("\nTotal number of components: %i \n", numComponents);

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
*/
