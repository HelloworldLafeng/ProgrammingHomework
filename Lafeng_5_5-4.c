/*��ν��ͬ��������ָ����������������������ƽ�������ұߣ�����5��ƽ������25, 25��ƽ������625��
����5��25����ͬ����������������ж�����x�Ƿ���ͬ����������ͬ�����������Yes�������������No����
x��ȡֵ��Χ��(1<=x<=10000),��������x��������Χ�ڣ������������ʾ��Ϣ��x out of range����*/
#include <stdio.h>
int len(int a);//���������ֵ�λ�� 
main()
{
	int n;
	int m;
	int digit;
	int base1 = 1;
	int base2 = 1;
	int digit1;
	int digit2;
	int a;
	int n1;
	int n2;
	int n3;
	int n4;
	int p=0;
	int s1;
	int s2;

	
	scanf("%d",&n);
	if (n<1 || n>10000)
		printf("%d out of range",n);
	else
	{
		digit1 = len(n);//����ô��λ 
		m = n*n;
		digit2 = len(m);
		int fine1[6];
		int fine2[6];
		for (n1=1 ; n1<digit1 ; n1++)
		{
			base1 *= 10;
		}
		for (n2 = 0; n2<digit1 ; n2++)
		{
			fine1[n2] = n/base1;
			n %= base1;
			base1 /= 10;
			
		}
		
		
		for (n3=1 ; n3<digit2 ; n3++)
		{
			base2 *= 10;
		}
		for (n4 = 0; n4<digit2 ; n4++)
		{
			fine2[n4] = m/base2;
			m %= base2;
			base2 /= 10;
			
		}
		
		s1=0;
		s2=digit2-digit1;
			
		for (int index=0 ; index < digit1 ; index++)
		{
			if (fine1[s1] != fine2[s2])
			{
				p=1;
				break;
			}
			s1++;
			s2++;
			
		}	
		if (p==1)
			printf("No");
		if (p==0)
			printf("Yes");
		
	}
return 0;
}

int len(int a)
{
	int i1 = 0;
	while (a)
	{
		i1++;
		a /= 10;
	}
	return i1;
}
