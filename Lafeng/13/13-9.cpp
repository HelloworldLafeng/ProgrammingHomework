#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char**a,char**b){
	char *temp=*a;
	*a=*b;
	*b=temp;
}
//搞一个指针数组，保留每个字符的起始地址，再搞一个一维数组 
main()
{
	int n;
	char A[100001];
	scanf("%d",&n);
	getchar();//吸收一个空格 
	char* array[n];
	char* p=A;
	for (int i=0;i<n;i++){ 
		array[i]=p;
		gets(p);
		while (*p) {
			p++;
		}
		p++;
	} 
	
	for (int i=0;i<n-1;i++){
		for (int p=0;p<n-1-i;p++){
			if (strcmp(array[p],array[p+1])>0){
				swap(&array[p],&array[p+1]);
			}
		}
	}
	for (int i=0;i<n;i++){
		puts(array[i]);
	}
	return 0;
}
