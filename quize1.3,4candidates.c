#include<stdio.h>
int main()
{
  int x,y,age,a=0,b=0,c=0,d=0;
  repeat:
  printf("1. Continue voting\n");
  printf("2. Finish voating\n");
  printf("Enter your choice: ");
  scanf("%d",&x);
  if(x==1)
  {
      printf("\nEnter your age: ");
      scanf("%d",&age);
      if(age>=18)
      {
       printf("\nWhich person you went to vote\n\t1. A\n\t2. B\n\t3. C\n\t4. D\nEnter your choice: ");
       scanf("%d",&y);
       if(y==1)
       {
           a++;
           goto repeat;
       }
          if(y==2)
          {
              b++;
              goto repeat;
          }
          if(y==3)
          {
              c++;
              goto repeat;
          }
           if(y==4)
          {
              d++;
              goto repeat;
          }
      }
      else
        printf("Your are not eligabe for voting\n");
      goto repeat;
  }
  if(x==2)
  {
      printf("Result :\nTotal Votar : %d\n\t1. A : %d vote\n\t2. B : %d vote\n\t3. C : %d vote\n\t3. D : %d vote\n",(a+b+c+d),a,b,c,d);
      if(a>b&&a>c&&a>d)
        printf("A WIN\n");
      else if(b>c&&b>a&&b>d)
        printf("B WIN\n");
      else if(c>a&&c>b&&c>d)
        printf("C WIN\n");
        else
          printf("D WIN\n");
  }
  return 0;
}
