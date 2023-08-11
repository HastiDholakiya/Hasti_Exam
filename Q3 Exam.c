#include<stdio.h>

void main()
{
	int h,p;
	int i;
	
	FILE *ptr;
	
	printf("Find leap year : \n");
	
	printf("Enter starting year : \n");
	scanf("%d",&h);
	
	printf("Enter ending year : \n");
	scanf("%d",&p);
	
	ptr = fopen("leap year.txt","w");
	
	printf("\n");
	
	if(ptr!=NULL)
	{
		printf("File created successfully...\n");
	}else
	{
		printf("File created failed...\n");
		
	}
	
	for(i=h;i<=p;i++)
	{
		if(i%4==0 || i%100==0 || i%400==0)
		{
			fprintf(ptr,"%d\n",i);
		}
	}
}
