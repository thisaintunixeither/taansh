#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#define RL_BUFFER 1000
int buffer = RL_BUFFER;
char input[];

char *builtins[6] = { 
  "help",
  "hello",
  "deadmilkmen",
  "cd",
  "pwd",
  "exit"
};

int taansh_intro(void) {
  printf("We jumped up on the table\n");
  printf("And shouted \"ANARCHY!\"\n\n\n");
  printf("\t Welcome to TAANSH: This Ain't A Normal SHell\n");
  printf("you-cant-type-anything-yet-because-i-have-to-add-readline-functions:-$ \n");
  printf("I feel like putting this here: $_$");
  exit(EXIT_SUCCESS);
}

void taansh_rl(void) {
  int allocbuffer = malloc(buffer);
  if(input > allocbuffer) {
    realloc(allocbuffer, input);
  }
}
