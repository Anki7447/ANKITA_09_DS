//Implement Insertion Sort Algorithm
#include<stdio.h>
#include<stdlib.h>

int n;
int a[10];

void insertion()
{
   int i,j,temp=0;
   
   for(i=1;i<n-1;i++)
	{
		j=i-1;
		temp=a[i];
		while(j>=0&&a[j]>temp)
		{
		  a[j+1]=a[j];
		  j--;
		}
		a[j+1]=temp;
	}
}
void main()
{

 int i;
  printf("\nenter the size:");
  scanf("%d",&n); 
  printf("enter the array element:");
 
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("insertion sort:");
   insertion();
    for(int i=0;i<n;i++)
   {
     printf("%d",a[i]);
   }
  printf("\n");
}