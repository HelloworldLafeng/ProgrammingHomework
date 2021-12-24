#include<stdio.h>
#include<stdlib.h>


int * create(int n) ;
void cal(int * array, int size) ;

int main()
{
    int * array , n , i ;

    scanf( "%d", &n );

    array = create(n) ;
    if ( array == NULL )
        return -1 ; //这里的return是因为没有获得内存而直接结束程序。

    cal( array, n) ;
    for ( i = 0 ; i < n ; i++ )
    {
        printf("%d" , *(array+i) ) ;
        if ( i == n - 1 ) printf("\n") ;
        else printf(" ") ;
    }     

    free(array) ;

    return 0;
}

/* 请在这里填写答案 */
int * create(int n)
{
	int *array;
	array = (int*)malloc(sizeof(int)*n);
	return array;
 } 
void cal(int * array, int size){
	for (int i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	int min=212902333;//其实这里应该是MAXINT的，但是忘了。。。 
	int max=0;
	int sum=0;
	
	for (int i=0;i<size;i++){
		sum+=(*(array+i));
		if (max<array[i]) max=array[i];
		if (min>array[i]) min=array[i];
	}
	float ev=(float)sum/size;
	printf("%d\n%.2f\n%d\n%d\n",sum,ev,max,min);
}
