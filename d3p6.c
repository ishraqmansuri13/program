#include<stdio.h>//made by ishraq baba
int main()
{

 int a;

 printf("In which subjects did you pass out of Maths and Science?\n\n" 
 " can you pass in only maths then type '1'\n "
 "can you pass in only science then type '2'\n "
 "can you pass in both maths and science then type '3'\n"
 " Other wise you can type anything except these. We will assume that you have failed in both subjest.\n"
 );

 scanf("%d",&a);
 
 printf("you type this = %d \n",a);

 if (a==3)
 {
    printf("WOW! you pass in both maths and science, CONGRATULATIONS! you win rupee 45. \n");
 }
 
else if (a==2)
{
    printf("'you pass in only science, CONGRATULATIONS! you win rupee 15. \n");
}

else if (a==1)
{
   printf("you pass in only maths, CONGRATULATIONS! you win rupee 15. \n");
}

else
{
 printf("Neither did you type one, nor two, nor three.That means you have failed in both two subjects.\n"
 "You will not get any money now.\n");
}


    return 0;
}
