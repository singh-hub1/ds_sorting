#include<stdio.h>
#include<conio.h>
void main()
{
	int array[]={6,5,8,3,7,2,4},n,i,j,k,temp;
	clrscr();
	n=sizeof(array)/sizeof(array[0]);
	printf("Orignal array=");
	for (i=0;i<n;i++)
		printf("%d,", array[i]);
	for (i=0;i<n-1;i++) // no. pass
	{
		for (j=0;j<n-i-1;j++) // Comp.
		{
			if (array[j]>array[j+1]) /* For decreasing order use < */
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
		printf("\n\nAfter Pass - %d = ",i+1);
		for (k=0;k<n;k++)
			printf("%d,", array[k]);

	}
	printf("\nSorted list in ascending order:\n");
	for (i=0;i<n;i++)
		printf("%d,", array[i]);
	getch();
}