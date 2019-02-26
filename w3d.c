#include <stdio.h>
#include <math.h>
 
int main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   
   int temp=n,sum=0;
   
   while(n>0)
   {
   	  sum+= pow(n%10,3);
   	  n=n/10;
   }
   
   if(sum==temp)
   printf("Its an armstrong number");
   
   else
   printf("Its not an armstrong number");
   
   return 0;
   
}
