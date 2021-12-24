/*1、设计函数char ** create1(int n) ;，
根据整数n创建一个长度为n的字符型指针动态一维数组，并返回动态数组第一个元素的地址。

2、设计函数void create2( char ** strPtr , int n ) ;，为字符型指针动态一维数组strPtr中的
每一个元素创建一个长度为n+1字符型动态一维数组。参数n为字符型指针动态一维数组strPtr的长度。

3、设计函数void fill(char ** strPtr , int n) ;按要去将相应的字符填入二维动态数组strPtr中。*/
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

/* 请在这里填写答案 */
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
		//搞出第一行
		for (int i=1;i<n;i++){
			for (int p=0;p<2*n+1;p++){
				if (p==n-i||p==n+i){
					strPtr[i][p]= (p==n-i) ? '/' : '\\';
				}
				else strPtr[i][p]=' ';
			}
			strPtr[i][n+i+1]='\0';	//就是说，输完了第二个X之后不能再输入其他的要不然格式错误 
		}//搞出上半部分
		for (int i=0;i<2*n+1;i++){
			if (i==0||i==2*n){
				strPtr[n][i]='X';
			}
			else strPtr[n][i]=' ';
		}
		strPtr[n][2*n+1]='\0';
		//搞出中间部分
		for (int i=n+1;i<2*n;i++){
			for (int p=0;p<2*n+1;p++){
				if (p==i-n||p==3*n-i){
					strPtr[i][p]= p==i-n ? '\\' : '/';
				}
				else strPtr[i][p]=' ';
			}
			strPtr[i][3*n-i+1]='\0';
		}//搞出下半部分 
		for (int i=0;i<2*n+1;i++){
			if (i==n){
				strPtr[2*n][i]='X';
				}
			else strPtr[2*n][i]=' ';
		}
		strPtr[2*n][n+1]='\0';
		//搞出最后一行 
}
