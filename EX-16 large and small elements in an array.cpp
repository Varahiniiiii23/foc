#include<stdio.h>
int main()
{
	int a[50],n,i,large,small;
	printf("how many elements");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	large=small=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		large=a[i];
		if(a[i]<small)
		small=a[i];
	}
	printf("the largest element is %d\n",large);
	printf("the smallest element is %d \n",small);
	return 0;
}