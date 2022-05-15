#include <stdio.h>
#include <stdlib.h>
int main()
{
	int jc(int x);
	int a,b,s;
	printf("求2个数阶乘之和\n请输入两个数字\n");
	scanf("%d %d",&a,&b);
	a=jc(a);
	b=jc(b);
	s=a+b;
	printf("阶乘之和为%d\n",s);
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