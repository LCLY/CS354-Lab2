/*
  onandon.c 
*/

#include <xinu.h>

/*------------------------------------------------------------
* main - prints 'x', sleeps for 2 seconds and repeat forever
*-------------------------------------------------------------
*/

process onandon(){   
    while(TRUE){
        putc(CONSOLE, 'x');
        sleep(2);
    } 
}