#include<stdio.h>

void swapVariables(int *first,int *second){
	int temp = *first;
	*first = *second;
	*second = temp;
}
void reverseArray(int array[],int length){
	int counter;
	int half_length = length/2;
	for(counter = 0; counter < half_length; counter++){
		swapVariables(&array[counter],&array[length-counter-1]);
	}
}


/* DRIVER PROGRAM */
#include<stdlib.h>

int MAX_DIGIT = 5;

int getNumber(){
	char strNumber[MAX_DIGIT];
	int number;

	fflush(stdin);
	scanf("%s", strNumber);
	sscanf(strNumber, "%d", &number);
	
	return number;
}

int takeNumberFromUser(char *prompt){
	printf("\n%s:", prompt);
	
	return getNumber();
}

void printArray(int array[],int length){
	int counter;

	printf("The contents of array are:-\n");
	for(counter = 0; counter < length; counter++){
		printf("Element %d:\t %d\n",counter, array[counter]);
	}	
}

void inputArray(int** array, int* length){
	int counter;

	*length = takeNumberFromUser("Enter the size of numerical array");
	*array = (int*)malloc(*length * sizeof(int));

	printf("\nEnter the contents of array:\n");
	for(counter =0; counter < *length; counter++){
		(*array)[counter] = getNumber();
	}
}


void test(){
	int *array,length;
	
	inputArray(&array,&length);
	printArray(array,length);

	printf("\n>>>>>>>>Reversing Array<<<<<<<<<<\n");
	
	reverseArray(array,length);
	printArray(array,length);
}

void driverProgram(){
	test();
}

int main(){
	driverProgram();

	return 0;
}