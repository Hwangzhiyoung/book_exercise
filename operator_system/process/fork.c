#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
printf("hello (pid:%d)\n", (int)getpid());
int rc = fork();
if(rc<0){
    fprintf(stderr,"fork failed\n");
    exit(1);

}else if(rc==0){
    printf("hello, i am child (pid:%d)\n", (int)getpid());
}else{
    printf("hello, i am praent of %d, (pid:%d)\n",rc,(int)getpid());
}

   return 0;
}
