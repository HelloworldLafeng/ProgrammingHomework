/*��ƺ��� char *locatesubstr(char *str1,char *str2)��
����str2ָ����ַ�����str1ָ����ַ������״γ��ֵ�λ�ã�����ָ���λ�õ�ָ�롣
��str2ָ����ַ�����������str1ָ����ַ����У��򷵻ؿ�ָ��NULL��
 ע���������ʹ��ָ������������±��������ַ��� */
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

/* ����������д�� */
char *locatesubstr(char *str1,char *str2)
{
	for (;*str1;str1++){//��str1ָ�������ƣ�ֱ��ָ��/0 
		for (char *restr1=str1, *restr2=str2;;restr1++,restr2++){
			if (!*restr2) return str1;//���restr2ָ��\0��˵��str2�����Ѿ�����һ���ˣ�˵������Ҫ��
			if (!*restr1) break;//���restr1ָ��\0��˵��str1����û�з���Ҫ���
			if (*restr1!=*restr2) break;//���Ԫ�ز���ȿ϶��ǲ��е� 
		}
	}
	return NULL; 
}//������ȸ����ţƨ�� 
