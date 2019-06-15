#include<stdio.h>
int input(int *n,int *s)
{
	printf("enter the size of the array:");
	scanf("%d",n);
	printf("enter no of times to be shifted:");
	scanf("%d",s);
} 
int inp(int n,int a[n])
{
	printf("enter the array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
}}
int shift(int n,int a[n],int s)
{      
	int temp,i;	
	for(int j=0;j<s;j++)
	{	
		temp=a[0];
        	for(i=0;i<n-1;i++)
		{
                	a[i]=a[i+1];
		}
		a[i]=temp;
	}
}
void display(int n,int a[n],int in)
{
	if(in==1){
        printf("array before shifting is:\n");
	}
        else if(in==2){
	printf("array after shifting is:\n");
	}
        for(int i=0;i<n;i++)
	printf("%d\t",	a[i]);
        printf("\n");	
}
int main()
{
	int n,s;
        input(&n,&s);
	int a[n];
	inp(n,a);
	display(n,a,1);
	shift(n,a,s);
	display(n,a,2);
}


