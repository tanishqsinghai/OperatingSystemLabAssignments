//NAME : TANISHQ SINGHAI
//SCHOLAR NUMBER : 181112008


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct semaphore
{
    int value ;
};

P(struct semaphore s)
{
    while(s.value<=0);
    s.value=s.value-1;
}

V(struct semaphore s)
{
    s.value=s.value+1;
}

int main()
{
    struct semaphore s;
    s.value=1;
    int pid = fork();
    int t=10;
    while(t--){
    if(pid == 0)
    {
       P(s);
       printf("Process C is executing\n");
       V(s);
    }
    else
    {
       P(s);
       printf("Process P is executing\n");
       V(s); 
    }
    
    }

    return 0;
}
