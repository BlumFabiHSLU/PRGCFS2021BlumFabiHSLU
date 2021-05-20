#include <stdio.h>

void insertionSort(int array[], int n) 
{ 
	int i, element, j, a, faktor;
	printf("Aufsteigend drücke 1,\n absteigend drücke 0\n");
	scanf("%d", &a);
	
	if(a == 0)
	{
		faktor = -1;
	}
	
	else
	{
		faktor = 1;
	}
	
	for (i = 1; i < n; i++) 
	{ 
		element = array[i];//temporäre Kopie
		j = i - 1; 
		// compare "element" to its neighbor to the left
		while (j >= 0 && (array[j]*faktor > element*faktor))  // compare elemet, mit faktor multiplizieren
		{ 
			array[j + 1] = array[j]; 
			j = j - 1; 
		}
 		array[j + 1] = element; 
	}	 
}
   
// Function to print the elements of an array
void printArray(int array[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
	{
		printf("%d ", array[i]); 
	}
	printf("\n"); 
}  

// Main Function 
int main() 
{ 
	int array[] = { 122, 17, 93, 3, 56, -5, -378, 65, 37, 37 }; 
	int n = sizeof(array) / sizeof(array[0]); 
	printf("unsorted: ");
	printArray(array, n);
	insertionSort(array, n); 
	printf("sorted: ");
	printArray(array, n); 
	return 0; 
}
