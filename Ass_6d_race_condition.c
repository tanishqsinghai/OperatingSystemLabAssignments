//NAME : TANISHQ SINGHAI
//SCHOLAR NUMBER : 181112008

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int j=1;
    int pid=fork();
    if(pid==0)
    {
        for(;j<=10;j++)
         printf("Child Process j = %d\n", j);
         exit(0);
    }
    else 
    {
        for(;j<=10;j++)
         printf("Parent process j = %d\n", j);

    }
   return 0;
}
