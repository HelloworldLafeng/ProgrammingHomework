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
    else return -1 ;//�������� return -1 �����޷�����ڴ�ʱֱ�ӽ������� 

    getchar();//�Ե�ǰ������Ļس��� 

    for( i = 0 ; i < n ; i++ ) 
        gets(strArray[i]); //�����ַ��� 

    sort( strArray , n ) ; //���� 

    for( i = 0 ; i < n ; i++ ) 
        printf("%s\n",strArray[i]); //���

    for ( i = 0 ; i < n ; i++ )  
        free(strArray[i]) ;
    free(strArray) ;

    return 0;
}

/* ��д�� */
char **    create1( int n )//��������n����һ������Ϊn���ַ�ָ���Ͷ�̬һά���飬�����ض�̬�����һ��Ԫ�صĵ�ַ
{
	char **array;
	array=(char**)malloc(sizeof(char*)*n);
	return array;
}
char *    create2( int n )//��������n����һ������Ϊn���ַ��Ͷ�̬һά���飬�����ض�̬�����һ��Ԫ�صĵ�ַ
{
	char *array;
	array=(char*)malloc(sizeof(char)*n);
	return array;
}
//�ú����ɽ��ַ�ָ������strArray��ָ��������ַ�������С��������
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
