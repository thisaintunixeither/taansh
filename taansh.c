#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int taansh(void) {
  char builtins[] = {
    "help",
    "hello",
    "deadmilkmen",
    "cd",
    "pwd",
    "exit"
  }
  fork();
  printf("We jumped up on the table\n");
  printf("And shouted \"ANARCHY!\"\n\n\n");
  printf("\t\t Welcome to TAANSH: This Ain't A Normal SHell");
  exit(EXIT_SUCCESS);
}
