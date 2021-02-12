#include<stdio.h>
 int main()
{

printf("Choose your food number: \n1.Pizza \n2.Burger \n3.Pasta \n4.french Fries \n5.sandwich\n :");

int choice=0;

scanf("%d", &choice);


switch(choice)
{

case 1:
        printf("Your food is Pizza\nRs.239");
        break;
case 2:
       printf("Your food is Burger\nRs.129");
        break;
case 3:
      printf("Your food is Pasta\nRs.179");
       break;
case 4:
       printf("Your food is French Fries\nRs.99");
       break;
case 5:
 printf("Your food is Sandwich\nRs.149");
       break;       
default : 
       printf("Invalid choice");
}







}

