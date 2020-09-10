//NAME : TANISHQ SINGHAI
//SCHOLAR NUMBER : 181112008

#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
int turn;
int flag[2];
int main(void)
{
    
        int pid =fork();
        
              if(pid==0)
                {
                    int t=100;
                     while(t--){
                     flag[0]=1;
                     turn=1;
                     while(flag[1]==1&&turn==1);
                     printf("This is critical section:child process\n");
                     flag[0]=0;
                     }
                }
                else
                {
                       int t=100;
                       while(t--){
                        flag[1]=1;
                        turn=0;
                        while(flag[0]&&turn==0);
                        printf("This is critical section:parent process  \n");
                        flag[1]=0;
                       }
                }
        
        return 0;

}
