#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*i
int main(){   
   newProcess("/u/data/u96/lchoo/testFile"); //pass the pathname of the executable binary as an argument
}*/


int newProcess(const char *filename){
  pid_t parent = getpid();
  pid_t pid = fork();
  
  if(pid == -1){ //error if it returns -1
    perror("error");
    exit(1);
  }
  else if(pid == 0){ //child
    execve(filename, NULL, NULL);//execute program pointed to by filename, filename must be binary executable 
    exit(0);
  }
  else{ //parent
    int status;
    waitpid(pid, &status, 0); //suspend the calling process until a child process ends or stops
  } 
}
