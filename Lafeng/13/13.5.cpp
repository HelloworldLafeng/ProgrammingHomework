//ʵ�ִ��ַ���str��ɾ��ָ�����ַ�ch��ͬһ��ĸ�Ĵ�Сд����ͬ�ַ�����
#include<stdio.h>

void delcharfun(char *str,char ch);

int main()
{
    char    ch,str[110];

    scanf("%s",str);    //�����ַ��� 
    getchar();            //��ȡ�س����� 
    scanf("%c",&ch);    //�����ַ� 
    delcharfun(str,ch);    //ɾ�� 
    printf("%s\n",str);    //���ɾ������ 
    return 0;    
}

/* ����������д�� */
void delcharfun(char *str,char ch)
{
	char *raw;
	while (*str){
		while (*str==ch){//�����if����ܵ�2~30�֣���Ϊ���ܴ�ɾ���ַ��������������if��ֻ��ɾһ�� 
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
