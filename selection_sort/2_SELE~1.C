#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={20,12,10,15,2},i,j,k,temp,n;
	clrscr();
	n= sizeof(a)/sizeof(a[0]);
	for(i=0;i<n-1;i++) // n-1= max 2nd last poss. of arr.
	{
		for(j=i+1;j<n;j++) //  n =last poss. of arr.
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("\npass %d=",i+1);
		for(k=0;k<n;k++)
		{
			printf("%d ,",a[k]);
		}
	}
	printf("\nSorted array=");
	for(i=0;i<n;i++)
	{
		printf("%d ,",a[i]);
	}
	getch();
}
