/*.����ָ������ָ��ÿ�����ʵĿ�ʼλ�á�
2.���ַ����е��ʽ�����Ŀո��Ϊ��\0��,Ȼ��ʹ��ָ�����齫ÿ�����ʴ�ӡ����*/ 
#include<stdio.h>

int getString( char * source , char *strPtr[] ) ;

int main()
{
    char    str[100005];
    char    *strPtr[1005]={0};
    int        i, num ;

    gets(str);
    num = getString( str , strPtr ) ;
    for( i = 0 ; i < num ; i++ )
        puts(strPtr[i]);

    return 0;    
}

/* ����������д�� */
int getString( char * source , char *strPtr[] )//source���ַ�����strPtr�����ַ 
{
	char *re=source;
	int ans=0;
	while (*source){
		if (source==re){
			if(*source!=' ') {//��ͷ���÷�������һ�¡��� 
				*strPtr=source;
				strPtr++;
				ans++;
			}
		}
		else {
			if (*source==' '&&*(source-1)!=' '){
				*source='\0';//����ĩβ��/0 
			}
			else if (*source!=' '&&(*(source-1)==' '||*(source-1)=='\0')){//���ʿ�ͷ��� 
				*strPtr=source;
				strPtr++;
				ans++;
			}
		}
		source++; 
	} 
	return ans;
}
