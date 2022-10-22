#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, arr[20], i, low, mid , high,x;
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("enter the value to search : \n");
	scanf("%d",&x);
	
	low=0;
	high=n-1;
	mid=(high+low)/2;
	
	while( low <= high)
	{
		if( arr[mid] == x)
		{
			printf("element found at position %d ", mid+1);
			exit(1);
		}
		else if(arr[mid] <  x )
		{
			low=mid+1;
			mid=(low+high)/2;
		}
		else
		{
			high=mid-1;
			mid=(low+high)/2;
		}
	}
	printf("element not found ! \n");
	return 0;
}
