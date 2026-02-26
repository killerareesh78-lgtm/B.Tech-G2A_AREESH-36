#include <stdio.h>
int main()
{ int a,;
printf ("enter age");
scanf ("%d", &age);
if(age<=12) {
    printf("child");
}
else if(age>13 && age<=17) {
    printf("teenage");
}
else if(age>18 && age<=60) {
    printf("adult");
}
else{
    printf("senior citizen");
}
return 0;
}