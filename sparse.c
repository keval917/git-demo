#include<stdio.h>



int main()
{
	
	int a[3][3],i,j;
	
	printf("enter matrix");
	
	for(i=0;i<=2;i++){
	
	for(j=0;j<=2;j++)
	{
		if(i==j)
		{
			scanf("%d",&a[i][j]);
		}
		else
		a[i][j]=0;
		
	}
}
	for(i=0;i<=2;i++){
	
	for(j=0;j<=2;j++)
	{
	   printf("%d",a[i][j]);	
	}

}
	
	return 0;
	
}
