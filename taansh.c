#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

char *builtins[6] = { "help", "hello", "deadmilkmen", "cd", "pwd", "exit" };

int taansh(void) {
  printf("We jumped up on the table\n");
  printf("And shouted \"ANARCHY!\"\n\n\n");
  printf("\t\t Welcome to TAANSH: This Ain't A Normal SHell\n");
  printf("youcanttypeanythingyet: ");
  exit(EXIT_SUCCESS);
}
