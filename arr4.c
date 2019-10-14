#include<stdio.h>
int main()
{
	int array[50], size, i, largest;
	
	printf("enter the size of the array\n");
	scanf("%d", &size);
	
	printf("enter %d elements of the array\n", size);
	
	for(i=0; i<size; i++)
	   scanf("%d", &array[i]);
	   
	   largest = array[0];
	   
	   for(i=1; i<size; i++)
	   {
	   	  if(largest < array[i])
	   	      largest = array[i];
	   }
	   
	   printf("largest element present in the given array is %d \n", largest);
	   
}
