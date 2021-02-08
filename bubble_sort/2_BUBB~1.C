#include<stdio.h>
//#include<conio.h>

void printArray();
void swap();
void bubbleSort();

int main()//Callee Fun. //Bhavik Caling Vishal -> Bhavik = Callee & Vishal=caller
{
    int arr[] = {-64,1,-2,4,3,5,-7};
    int n = sizeof(arr)/sizeof(arr[0]);//14/2=7
//    clrscr();
    bubbleSort(arr, n);//55 Actual parameter//n=call by value->xerox of my book
    printf("Sorted array: \n");
    printArray(arr, n);
//    getch();
    return 0;
}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)// Formal parameter // Caller Fun.
{
   int j,i;
   for(i = 0; i < n-1; i++)//i=0+1=1+1=2+1=3+1=4
       for (j = 0; j < n-i-1; j++)
	   if (arr[j] > arr[j+1])
	      swap(&arr[j],&arr[j+1]);// call by reference->passing orignal book
}
void swap(int *xp,int *yp)
{
    int temp = *xp;//value at(&arr[j])->value at(100)->100-102
    *xp = *yp;
    *yp = temp;
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
	printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
/*
main()
{
	get_array(); //
	sort_it();   //
	print_sorted_array();//
}

main()
{
	get_array();
	get_search_value();
	searching();
	print_result();
}
*/
