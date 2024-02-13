#include<stdio.h>
int main()
{
  int a=10,b=20;
  printf("First run:\n");
  printf("Enter the value of a: %d\n",a);
  printf("Enter the value of b: %d\n",b);
  printf("Before swapping... a: %d, b: %d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After swapping...  a: %d, b: %d\n",a,b);

  printf("\nSecond run:\n");
  a=-100,b=-200;
  printf("Enter the value of a: %d\n",a);
  printf("Enter the value of b: %d\n",b);
  printf("Before swapping... a: %d, b: %d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After swapping...  a: %d, b: %d\n",a,b);

  return 0;
}
