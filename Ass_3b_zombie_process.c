//NAME : TANISHQ SINGHAI
//SCHOLAR NUMBER : 181112008


#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
 
int main()
{
    pid_t pid;
    char *message;
    int n,exit_code;
    printf("Fork program starting\n");
 
    pid = fork();
    if(pid==0){
       message = "This is the child\n";
       n = 2;
     }    
    else{
       message = "This is the parent\n";
       n = 5;
     }
    
    for( ;n > 0; n--)
    {
        puts(message);
        printf("pid=%d,parent=%d\n",getpid(),getppid());
        sleep(1);
 
    }
    exit(0);
}
