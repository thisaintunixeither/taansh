#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

char builtins[8265] = { "help", "hello", "deadmilkmen", "cd", "pwd", "exit" };

int taansh(void) {
  fork();
  printf("We jumped up on the table\n");
  printf("And shouted \"ANARCHY!\"\n\n\n");
  printf("\t\t Welcome to TAANSH: This Ain't A Normal SHell");
  exit(EXIT_SUCCESS);
}
