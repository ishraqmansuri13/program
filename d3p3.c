#include<stdio.h> //date- 20 may 2023

  
  int main()
{
   
int age;
printf("Enter your age\n");

scanf("%d", &age);
printf("You have entered %d as your age\n", age);
 
if (age>=18) {
     Printf("you can vote!");
}


else {
     printf("you cannot vote");
}


    return 0;
}