#include <stdio.h>
int main()
{
    int a,b,c;
    char op;
  printf("Enter two positive numbers") ;
  scanf("%d%d",&a,&b);
  printf("Enter one operator");
  scanf(" %c",&op);

  switch(op)
  {
  case'+':
c=a+b;
printf("the Addition is %d /t",c);
break;
  case '-':
    c=a-b;
    printf("the Subtraction is %d /t",c);
    break;
  case '*':
    c=a*b;
    printf("The Multiplication is %d",c);
    break;
  case '/':
    c=a/b;
    printf("The Division is %d",c);
    break;
default:
printf("wrong choice!");
  }
  return 0;
}