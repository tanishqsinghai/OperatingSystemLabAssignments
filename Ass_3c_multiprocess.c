//NAME : TANISHQ SINGHAI
//SCHOLAR NUMBER : 181112008

#include<stdio.h> 
#include <sys/types.h> 
#include<sys/wait.h>
#include <unistd.h> 
  
int main() 
{ 
        
    int pid = fork(); 
  
    if (pid > 0){
    	wait(NULL);
    printf("End of Parent process\n");	
    }
    else if (pid == 0) 
    { 
    	int pid2 =fork();
        if(pid2 >0)
        {
        	wait(NULL);
           	 printf("End of Child 2\n");
        }
        else {
        	printf("End of Child 3\n");
        }
        if(pid2>0)
          printf("End of Child 1\n");
        
    } 
  
    return 0; 
} 
