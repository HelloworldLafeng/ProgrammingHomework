#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define        MAX        101

char **    create1( int n ) ;
char *    create2( int n ) ;
void    sort( char** strArray , int size ) ; 

int main()
{
    char**    strArray ;
    int        n , i ;

    scanf("%d",&n) ;
    strArray = create1( n ) ; 
    if ( strArray != NULL ) 
    {
        for ( i = 0 ; i < n ; i++ ) 
        {
            strArray[i] = create2( MAX ) ;
            if ( strArray[i] == NULL ) return -1 ;
        }            
    }
    else return -1 ;//这里两个 return -1 都是无法获得内存时直接结束程序 

    getchar();//吃掉前边输入的回车符 

    for( i = 0 ; i < n ; i++ ) 
        gets(strArray[i]); //读入字符串 

    sort( strArray , n ) ; //排序 

    for( i = 0 ; i < n ; i++ ) 
        printf("%s\n",strArray[i]); //输出

    for ( i = 0 ; i < n ; i++ )  
        free(strArray[i]) ;
    free(strArray) ;

    return 0;
}

/* 填写答案 */
char **    create1( int n )//根据整数n创建一个长度为n的字符指针型动态一维数组，并返回动态数组第一个元素的地址
{
	char **array;
	array=(char**)malloc(sizeof(char*)*n);
	return array;
}
char *    create2( int n )//根据整数n创建一个长度为n的字符型动态一维数组，并返回动态数组第一个元素的地址
{
	char *array;
	array=(char*)malloc(sizeof(char)*n);
	return array;
}
//该函数可将字符指针数组strArray所指向的所有字符串按从小到大排列
void    sort( char** strArray , int size )
{
	for (int m=0;m<size;m++){
		for (int p=size-1;p>m;p--){
			int compare=strcmp(strArray[p-1],strArray[p]);
			if (compare>0){
				char *temp=strArray[p-1];
				strArray[p-1]=strArray[p];
				strArray[p]=temp;
			}
		}
	} 	
}
