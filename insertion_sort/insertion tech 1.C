#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={9,10,22,-3,5,7},i,j,k,l,temp,n;
	clrscr();
	n= sizeof( a ) / sizeof( a [ 0 ] );
	for(i=0;i<n-1;i++) // n-1= max 2nd last poss. of arr.
	{
		for(j=i+1;j<n;j++) //  n =last poss. of arr.
		{
			if(a[i]>a[j])
			{               //   1 2   3  4   i=1,j=4
				temp=a[j];// 9,10,22, 5   temp=5
				for(k=j-1;k>=i;k--)//i=1,j=4 from 3 to 1
				{
					a[k+1]=a[k];
				}      //9,9,10,22
				a[i]=temp; //5,9,10,2	2
			}
		}
		printf("\npass %d=",i+1);
		for(l=0;l<n;l++)
		{
			printf("%d ,",a[l]);
		}
	}
	printf("Sorted array=");
	for(i=0;i<n;i++)
	{
		printf("%d ,",a[i]);
	}
	printf("\n");
	getch();
}




