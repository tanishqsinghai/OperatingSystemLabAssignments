//NAME : TANISHQ SINGHAI
//SCHOLAR NUMBER : 181112008


#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 
  	

int a_global = 0; 
  
void *myThread(void *x) 
{ 
    
    int *myid = (int *)x; 
    static int a_static = 0; 
    int a_local =0;
  
    printf("Thread ID: %d, Static: %d, Global: %d, Local: %d\n", *myid, ++a_static, ++a_global, ++a_local); 
} 
  
int main() 
{ 
     
    pthread_t tid1; 
    pthread_t tid2; 
    pthread_t tid3; 
    
    pthread_create(&tid1, NULL, myThread, (void *)&tid1);
    pthread_create(&tid2, NULL, myThread, (void *)&tid2);
    pthread_create(&tid3, NULL, myThread, (void *)&tid3);
  
    pthread_exit(NULL); 
    return 0; 
}
