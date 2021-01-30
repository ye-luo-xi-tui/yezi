#include <stdio.h>
#include <stdlib.h>
void main1()
{
  unsigned char mess;
  char b;
  int a=0;
  system("clear");//made by yezi
  while(1)
{
  while(1)
  {
   if(scanf("%hhu",&mess)!=1)
     {
       b=getchar();
       if(b=='q')
        {
         a=1;
         break;
        }
     }
   else
    break;
  }
  if(a==1)
    break;
  if(mess<=127)
  {
    printf("male %d\n",mess);
    printf("Enter q to back");  
  }
  else
    {
    printf("female %d\n",mess-128);
     printf("Enter q to back");  
    }
}
  getchar();
  return;
}
void main2()
{
 int i;
 int q;
 int a=15,b=15;
 system("clear");
 for(i=1;i<=9;i++)
 {
   for(q=1;q<=i;q++)
   {
    printf("%d*%d=%d ",a,b,a*b);
    a+=10;
   }
   printf("\n");
   a=15;
   b+=10;
 }
 printf("\nEnter to back");
 getchar();getchar();
 return;
}
void main3()
{
 int abc[10];
 int temp=0;
 system("clear");
 for(;temp<=9;temp++)
     scanf("%d",&abc[temp]);
 temp--;
 for(;temp>=0;temp--)
    {
     printf("%d",abc[temp]);
         printf("\n");
        }
 printf("\nEnter to back");
 getchar();getchar();
 return;
}
int main()
{
 int a;
 char b;
 int c=0;
 while(1)
 {
  system("clear");
  printf("                         这是一个作业展示系统\n");
  printf("                       你可以在这里查看每次作业\n ");
  printf("                         请输入下列一个数字\n");
  printf("\n\n\n\n");
  printf("                         1 简易信息管理系统\n");
  printf("                         2 倒九九乘法表\n");
  printf("                         3 数组堆栈\n");
  printf("\n\n\n\n\n                           输入q退出");
  while(1)
  {
   if(scanf("%d",&a)!=1)
     {
       b=getchar();
       if(b=='q')
        {
         c=1;
         break;
        }
     }
   else
    break;
  }
  if(c==1)
    break;
  switch(a)
  {     case 1:main1();break;
         case 2:main2();break;
     case 3:main3();break;
        default:system("clear");printf("暂时没有这个作业哦");getchar();getchar();break;
  }
}
  system("clear");
  return 0;
}
