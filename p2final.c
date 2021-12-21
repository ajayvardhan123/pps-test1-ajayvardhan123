#include <stdio.h>
int input()
{
  int a;
  printf("enter a value to be added:\n");
  scanf("%d",&a);
  return a;
}
int add(int a, int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a,int b,int sum)
{
  printf("sum of %d + %d is %d\n",a,b,sum);
}
int main()
{
  int x,y,sum;
  x = input();
  y = input();
  sum  = add(x,y);
  output(x,y,sum);
  return 0;
}
