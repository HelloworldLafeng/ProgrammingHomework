#include<stdio.h>
#include<stdlib.h> 
main()
{
	int n;
	scanf("%d",&n);
	
	int *array;
	array=(int*)malloc(sizeof(int)*n);
	for (int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for(int i=0;i<n-1;i++){
		printf("%d ",-array[i]*10);
	}
	printf("%d\n",-array[n-1]*10);
	free(array);
	array=NULL;
	return 0;
} 
