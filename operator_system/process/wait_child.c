#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
printf("hello (pid:%d)\n", (int)getpid());
int rc = fork();
if(rc<0){
    fprintf(stderr,"fork failed\n");
    exit(1);

}else if(rc==0){
    int wc = wait(NULL);
    printf("hello, i am child (pid:%d),,(wc:%d)\n", (int)getpid(),wc);
}else{
    printf("hello, i am praent of %d, (pid:%d)\n",rc,(int)getpid());
}

   return 0;
}
