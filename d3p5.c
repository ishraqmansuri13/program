#include<stdio.h> // 20-may-2023 by ishraq baba
int main()

{
  int percentage;
   
   printf ("thank you to apply in ups clg\n");
   printf ("what is your percentage in 12th class ?\n");

   scanf("%d",&percentage);
 
   printf("you percentage in 12th class is %d\n\n", percentage);

   if (percentage>=90)
   {
      printf("CONGRATULATIONS! 'Can yau study in our college now'\n");
   }
   
else if (percentage>=75)
{
   printf("Now you have to give an entrance exam and pass in it. If you pass in that exam then your admission is possible otherwise not.\n");
}

else
{
    printf("Go, your admission will not be possible\n");
}
 
    return 0;
}
