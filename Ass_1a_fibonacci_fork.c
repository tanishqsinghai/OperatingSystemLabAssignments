//NAME : TANISHQ SINGHAI
//SCHOLAR NUMBER : 181112008

#include <stdio.h>
#include <unistd.h> 

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    pid_t pid = fork();
    if(pid==0)
    {
        printf("In child process calculating and printing fibonacci series\n");
        arr[0]=0;
        arr[1]=1;
        for(int i =2;i<n;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
        for(int i =0;i<n;i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        
    }
    else if(pid>0){
       printf("In parent process printing number of fibonacci sequences\n"); 
       printf("n = %d", n);
    }

    return 0;
}
