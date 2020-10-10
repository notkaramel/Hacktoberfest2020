#include <stdio.h>

int main()
{
    int a[100],n,swap,i,j;
	printf("Enter the total number of elements to be taken for sorting.\n");
	scanf("%d",&n);
	printf("Enter the elements.\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("Sorted elements after using Bubble Sorting.\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
		    if(a[j]>a[j+1])
		    {
			    swap=a[j];
			    a[j]=a[j+1];
			    a[j+1]=swap;	
		    }
		}
	}

	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i]);
	}

    return 0;
}