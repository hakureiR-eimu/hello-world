#include<stdio.h>
int main()
{
	int i,x,flag=0;
//	printf("�������жϺ��������������1����������Ctrl+Z����\n");
	while(scanf("%d",&x)!=EOF){
		if (x==2) printf("%d�Ǻ���\n",x);
		
		else {
		i=2;
		do {
			if(x%i==0){
				flag=1;
			}
			i++;
		}while(i<=x-1);
		

		if(flag==1) printf("%d�Ǻ���\n",x);
		else printf("%d���Ǻ���\n",x); 
		flag = 0;
	}
}
	return 0;
}
