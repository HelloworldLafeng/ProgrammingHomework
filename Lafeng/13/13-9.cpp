#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char**a,char**b){
	char *temp=*a;
	*a=*b;
	*b=temp;
}
//��һ��ָ�����飬����ÿ���ַ�����ʼ��ַ���ٸ�һ��һά���� 
main()
{
	int n;
	char A[100001];
	scanf("%d",&n);
	getchar();//����һ���ո� 
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
