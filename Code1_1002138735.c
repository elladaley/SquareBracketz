/*Ella Daley 10002138735*/

#include <stdio.h>

int main(void)
{
   char decision = 'N';
   printf("You are making weekend plans and find out that your friends might visit.\nYou need to figure out your options for the weekend.\n did your freinds visit\n\n");
   printf("Enter Y or N - any entry other than capital Y will be taken as N.\n");
   scanf(" %c",&decision);
   if(decision == 'Y')
   {
      printf("Weekend plans - have fun at the movies with your freinds!\n");
   }
   else
   {
      printf("Your freinds weren't able to visit so you need to make alternate plans. is the weather nice?\n");
      scanf(" %c",&decision);
      if(decision == 'Y')
      {
         printf("Weekend plans - ride bike in the park!\n");
      }
      else
      {
         printf("Oh, so the weather is bad. Do you have enough money to go shopping?\n");
         scanf(" %c",&decision);
         if(decision == 'Y')
         {
            printf("Weekend plans - go shopping - don't spend too much!!\n");
         }
         else
         {
            printf("Weekend plans - stay home and play video games!!\n");
         }
      }
   }
   return 0;
}
