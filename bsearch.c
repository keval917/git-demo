#include<stdio.h>

int main()
{
	int arr[10],min,max,key,i,flag=0;
	
	
	printf("enter array elements in ascending order-");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	min=0;
	max=9;
	printf("enter key element to be searched-");
	scanf("%d",&key);


int mid=(min+max)/2;

while(min<=max && flag==0)
{
	if(key==arr[mid])
	{
		flag=1;
	  
	}
	else if(key<arr[mid])
	{
		max=mid-1;
		
	}
	else{
		min=mid+1;
	
	}
	mid=(min+max)/2;
}
	if(flag==0)
	{
		printf("element not found");
	}
	else{
		printf("element found");
	}
	printf("position is %d",mid);

return 0;
}
