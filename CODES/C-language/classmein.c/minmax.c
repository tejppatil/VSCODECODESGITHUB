//write a c program to find the minimum and maximum from the array using the one sigle function
#include<stdio.h>
int minmax(int n, int x[], int *max, int *min)
{
	*min= x[0];
	*max= x[0];
	for(int i=0; i<n; i++)
    {
    	// Finding the maximum element
        if(*min > x[i])
	    	*min= x[i];
	    // Finding the minimum element
	    if(*max < x[i])
	    	*max= x[i];
    }
}

int main()
{
    int i,n,a,b;
    printf("Enter the size of array: ");
    scanf("%d",n);
    int arr[n];
    printf("Enter the values of array:\n ");
    for(i=0;i<n;i++)
    {
    scanf(" %d",&arr[i]);
    }
    minmax(n,arr,&a,&b);
    printf("maximum element is %d\n",a);
    printf("minimum element is %d\n",b);
    return 0;
}