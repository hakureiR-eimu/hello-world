#include<stdio.h>

/**
  ��ʹ�õݹ鶨��˺������������һ���ַ����������
  �ַ�������������getchar��putchar����
 **/
void myrever(void)
{
	/**********  Begin  **********/
  char ch;
  ch=getchar();
  if (ch=='\0') return;
  myrever();
  putchar(ch);
  return;
  
    /**********  End  **********/
}
