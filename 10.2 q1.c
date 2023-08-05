#include<stdio.h> 

 int sum(int a[],int n)
 {
 	int i,sum=0;
 	for(i=0;i<n;i++)
 	{
 	   sum = sum +a[i];	
	}
 	
 	return sum;
 }
 	
 void main()
 {
 	int i,n,total;
 	
 	printf("Enter array size : ");
 	scanf("%d",&n);
 	
 	int a[n];
 	    printf("Enter array Elements : \n");

 	for(i=0;i<n;i++)
 	{
 		printf("a[%d] = ",i);
 		scanf("%d",&a[i]);
 		
	}
	
	total = sum(a,n);
 	
 	printf("The sum of an Array : %d\n",total);
 	
 }
