/*设计函数 char *locatesubstr(char *str1,char *str2)，
查找str2指向的字符串在str1指向的字符串中首次出现的位置，返回指向该位置的指针。
若str2指向的字符串不包含在str1指向的字符串中，则返回空指针NULL。
 注意这里必须使用指针而不是数组下标来访问字符串 */
#include <stdio.h>

char *locatesubstr(char *str1,char *str2);
int main()
{
    char str1[505],str2[505];
    char *p;
    gets(str1);
    gets(str2);
    p=locatesubstr(str1,str2);

    if(p==NULL)    printf("NULL!\n");
    else    puts(p);

    return 0;
}

/* 请在这里填写答案 */
char *locatesubstr(char *str1,char *str2)
{
	for (;*str1;str1++){//把str1指针往后移，直到指到/0 
		for (char *restr1=str1, *restr2=str2;;restr1++,restr2++){
			if (!*restr2) return str1;//如果restr2指到\0，说明str2数组已经溜了一遍了，说明符合要求
			if (!*restr1) break;//如果restr1指到\0，说明str1里面没有符合要求的
			if (*restr1!=*restr2) break;//如果元素不相等肯定是不行的 
		}
	}
	return NULL; 
}//真是麻雀啄了牛屁股 
