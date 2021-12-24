/*1����ƺ���char ** create1(int n) ;��
��������n����һ������Ϊn���ַ���ָ�붯̬һά���飬�����ض�̬�����һ��Ԫ�صĵ�ַ��

2����ƺ���void create2( char ** strPtr , int n ) ;��Ϊ�ַ���ָ�붯̬һά����strPtr�е�
ÿһ��Ԫ�ش���һ������Ϊn+1�ַ��Ͷ�̬һά���顣����nΪ�ַ���ָ�붯̬һά����strPtr�ĳ��ȡ�

3����ƺ���void fill(char ** strPtr , int n) ;��Ҫȥ����Ӧ���ַ������ά��̬����strPtr�С�*/
#include<stdio.h>
#include<stdlib.h>

char ** create1(int n) ;
void create2( char ** strPtr , int n ) ;
void fill(char ** strPtr , int n) ;


int main()
{
    int        n, i, j;
    char**    strPtr ;

    scanf("%d", &n );
    strPtr = create1( n * 2 + 1 ) ;
    create2( strPtr ,  n * 2 + 1 ) ;
    fill(strPtr , n) ;
    for (i = 0; i < 2 * n + 1; i++)
    {
        printf("%s\n" , strPtr[i]);
    }

    for ( i = 0 ; i < n * 2 + 1 ; i++ )
        free(strPtr[i]) ;
    free(strPtr) ;

    return 0;
}

/* ����������д�� */
char ** create1(int n)
{
	char **ptr=(char**)malloc(sizeof(char*)*n);
	return ptr;
} 
void create2( char ** strPtr , int n )
{
	for (int i=0;i<n;i++){
		strPtr[i]=(char*)malloc(sizeof(char)*(n+1));
	}
}
void fill(char ** strPtr , int n)
{
	
		for (int i=0;i<2*n+1;i++){
			if (i==n){
				strPtr[0][i]='X';
				}
			else strPtr[0][i]=' ';
		}
		strPtr[0][n+1]='\0'; 
		//�����һ��
		for (int i=1;i<n;i++){
			for (int p=0;p<2*n+1;p++){
				if (p==n-i||p==n+i){
					strPtr[i][p]= (p==n-i) ? '/' : '\\';
				}
				else strPtr[i][p]=' ';
			}
			strPtr[i][n+i+1]='\0';	//����˵�������˵ڶ���X֮����������������Ҫ��Ȼ��ʽ���� 
		}//����ϰ벿��
		for (int i=0;i<2*n+1;i++){
			if (i==0||i==2*n){
				strPtr[n][i]='X';
			}
			else strPtr[n][i]=' ';
		}
		strPtr[n][2*n+1]='\0';
		//����м䲿��
		for (int i=n+1;i<2*n;i++){
			for (int p=0;p<2*n+1;p++){
				if (p==i-n||p==3*n-i){
					strPtr[i][p]= p==i-n ? '\\' : '/';
				}
				else strPtr[i][p]=' ';
			}
			strPtr[i][3*n-i+1]='\0';
		}//����°벿�� 
		for (int i=0;i<2*n+1;i++){
			if (i==n){
				strPtr[2*n][i]='X';
				}
			else strPtr[2*n][i]=' ';
		}
		strPtr[2*n][n+1]='\0';
		//������һ�� 
}
