// C program for insertion sort
#include<math.h>
#include<stdio.h>
void printArray();
void insertionSort();
/* Driver program to test insertion sort */
int main()
{
	int arr[]={5,2,4,6,1,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	clrscr();
	printf("Orignal array:-\n");
	printArray(arr,n);
	insertionSort(arr,n);
	printf("Sorted array:-\n");
	printArray(arr,n);
	getch();
	return 0;
}
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key=arr[i];/* Move elements of arr[0...i-1], that are greater than key, to one position ahead	 of their current position */
		for(j=i-1;j>=0 && arr[j]>key;j--)
			arr[j+1]=arr[j];// swift ine step ahead
		arr[j+1]=key;
		printf("After Pass %d:-",i);
		printArray(arr,n);
	}
}
// A utility function to print an array of size n
void printArray(int arr[],int n)
{
	int i;
	for (i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n\n");
}