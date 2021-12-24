//实现从字符串str中删除指定的字符ch。同一字母的大、小写按不同字符处理
#include<stdio.h>

void delcharfun(char *str,char ch);

int main()
{
    char    ch,str[110];

    scanf("%s",str);    //读入字符串 
    getchar();            //读取回车符号 
    scanf("%c",&ch);    //读入字符 
    delcharfun(str,ch);    //删除 
    printf("%s\n",str);    //输出删除后结果 
    return 0;    
}

/* 请在这里填写答案 */
void delcharfun(char *str,char ch)
{
	char *raw;
	while (*str){
		while (*str==ch){//这块用if大概能得2~30分，因为可能待删除字符连续，而如果用if则只能删一次 
			raw=str;
			while (*(str+1)){
				*str=*(str+1);
				*str++;
			}
			*str=0;
			str=raw;
		}
		*str++;
	}
}
