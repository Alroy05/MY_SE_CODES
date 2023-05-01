#include<unistd.h>
#include<stdio.h>

void main(){
    int pid;
    pid = fork();
    if(pid == 0){
        printf("\n Parent Process ID: ");
        printf("%d\n",getppid());
        printf("\n Child Process ID: ");
        printf("%d\n",getpid());
    }
    else
    {
        printf("\n Parent Process ID: ");
        printf("%d\n",getppid());
        printf("\n Child Process ID: ");
        printf("%d\n",getpid());
    } 
}