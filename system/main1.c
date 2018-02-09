/*
  main1.c
*/

#include <xinu.h>
#include <stdio.h>

extern void onandon(void);
/*
process main(void){
   pid32 pid = create(onandon, 2048, 30, "onandon", CONSOLE);
   resume(pid);
   sleep(14);
   kill(pid);
   int32 i = 0;
   
   //To check if the child process has been terminated
   for(i = 0; i < NPROC; i++){
      kprintf("\nPriority: %d name: %s\n",proctab[i].prprio, proctab[i].prname);
   }
   
}*/
