//NAME : TANISHQ SINGHAI
//SCHOLAR NUMBER : 181112008


#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
  
// Driver code 
int main() 
{ 
    int pid;
  
    pid=fork();
    if(pid==0)
    printf("child id-%d parent id-%d",getpid(),getppid());
  
    return 0; 
}
