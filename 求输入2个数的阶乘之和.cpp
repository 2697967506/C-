#include <stdio.h>
#include <stdlib.h>
int main()
{
	int jc(int x);
	int a,b,s;
	printf("��2�����׳�֮��\n��������������\n");
	scanf("%d %d",&a,&b);
	a=jc(a);
	b=jc(b);
	s=a+b;
	printf("�׳�֮��Ϊ%d\n",s);
	system("pause");
	return 0;
}
int jc(int x)
	{
		int i,m=1;
        for(i=1;i<=x;i++)
			{
				m=i*m;
		}
		return m;
}