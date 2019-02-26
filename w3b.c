#include<stdio.h>
#include<math.h>

int fact(int n)
{
  int fact=1;

  while(n>0)
  {
    fact=fact*n;
    n--;
  }

  return fact;
}

void evaluate(int x)
{
  float ans=1.0;

  ans-=  ( pow(x,2) / fact(2) );
  ans+=  ( pow(x,4) / fact(4) );
  ans-=  ( pow(x,6) / fact(6) );
  ans+=  ( pow(x,8) / fact(8) );
  ans-=  ( pow(x,10) / fact(10) );

  printf("\n Result: %f", ans);
}

void main()
{ int x;
  clrscr();
  printf("Enter the value of x: ");
  scanf("%d",&x);

  evaluate(x);
  getch();
}
