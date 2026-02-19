#include <stdio.h>

int main()
{
   printf("Enter A vowel or consonent");
   char ch;
   scanf(" %c",&ch);
   
   
    if( ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' || ch =='A' || ch =='E' || ch =='O' || ch =='I' || ch =='U' )
   {

    printf("\nThe Entered Alphabet is Vowel.");
   }
     else
    {
     printf("\nThe Entered Alphabet is Consonent.");
    }
   
   return 0;
}
