#include<stdio.h>
int main()
{
	int a[2][2],b[2][3],mul[2][3];              // declare 2D array 
	
	int i,j ;           //declare index for row and column
	int c , r ,k ;
	
    printf("Enter the row of 1st Matrix : ");
    scanf("%d",&r);
    printf("Enter the Column of 1st Matrix : ");
    scanf("%d",&c);
    
    printf("Enter the Elements of the 1st matrix:");
    
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
    
    printf("Enter the row of 2nd Matrix : ");
    scanf("%d",&r);
    printf("Enter the Column of 2nd Matrix : ");
    scanf("%d",&c);
    
    printf("Enter the Elements of the 2nd matrix:");
    
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		scanf("%d",&b[i][j]);
		}
	}
	
	printf("multiply:\n ");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
		
	
	for(k=0;k<c;k++)
	{
		mul[i][j]+=a[i][k]*b[k][j];
	}
}
}
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
printf("\n"); 
}  
}  	
}
