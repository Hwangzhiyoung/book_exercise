#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
printf("hello (pid:%d)\n", (int)getpid());
int ab = 100;
int rc = fork();
if(rc<0){
    fprintf(stderr,"fork failed\n");
    exit(1);

}else if(rc==0){
    printf("start child ab=%d\n",ab);
    ab = 200;
    printf("child ab=%d\n", ab);
    printf("hello, i am child (pid:%d)\n", (int)getpid());
}else{
    printf("start parent ab=%d\n", ab);
    ab = 10;
    printf("parent ab=%d\n",ab);
    printf("hello, i am praent of %d, (pid:%d)\n",rc,(int)getpid());
}
   printf("end ab=%d\n", ab);
   return 0;
}
