/*.利用指针数组指向每个单词的开始位置。
2.把字符串中单词结束后的空格改为“\0”,然后使用指针数组将每个单词打印出来*/ 
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

/* 请在这里填写答案 */
int getString( char * source , char *strPtr[] )//source是字符串，strPtr保存地址 
{
	char *re=source;
	int ans=0;
	while (*source){
		if (source==re){
			if(*source!=' ') {//开头这块得分类讨论一下…… 
				*strPtr=source;
				strPtr++;
				ans++;
			}
		}
		else {
			if (*source==' '&&*(source-1)!=' '){
				*source='\0';//单词末尾补/0 
			}
			else if (*source!=' '&&(*(source-1)==' '||*(source-1)=='\0')){//单词开头标记 
				*strPtr=source;
				strPtr++;
				ans++;
			}
		}
		source++; 
	} 
	return ans;
}
