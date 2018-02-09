/*lab1cmd.c ` lab1cmd*/

#include <xinu.h>
#include <stdio.h>
/*-----------------------------------------------------------------------------
 *  lab1cmd - this command will print the user's email
 *----------------------------------------------------------------------------
 */

shellcmd lab1cmd(int nargs, char *args[])
{
 /* char *user = "lchoo@purdue.edu";//purdue email
  char command[100];//to hold the command  
  char body[] = "You are now in XINU!"; //body of email
  char tempFile[100];
 
  strcpy(tempFile, tempnam("/tmp","sendmail")); //tempnam generate pathname that may be used for a temporary file
  FILE *fp = fopen(tempFile, "w");//open for writing
  fprint(fp, "%s\n", body);
  fclose(fp);

  sprintf(command, "sendmail %s < %s",user,tempFile); //prepare the command
  system(command); //execute the command*/
  //printf("Do something!\n");
  //system("start www.google.com"); 
  //printf("Username of current user is: %s\n", getenv("LOGNAME"));
  //printf("Email of current user is: %s@purdue.edu\n", getenv("LOGNAME"));
  //printf("PATH: %s\n", getenv("PATH"));
  //printf("HOME: %s\n", getenv("HOME"));
  //printf("ROOT: %s\n", getenv("ROOT"));
  char email[100] = "lchoo@purdue.edu";
  printf("The email of the user is: %s\n",email);
  return (0); 
}
