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

int taansh_hello(void);
int taansh_help(void);
int taansh_exit(void);

int taansh_intro(void) {
  printf("We jumped up on the table\n");
  printf("And shouted \"ANARCHY!\"\n\n\n");
  printf("\t Welcome to TAANSH: This Ain't A Normal SHell\n");
  printf("you-cant-type-anything-yet-because-i-have-to-add-readline-functions:-$ \n");
  exit(EXIT_SUCCESS);
  taansh_rl();
}

int taansh_rl(void) {
  int allocbuffer = malloc(buffer);
  int c;
  int position = 0;
  if (!buffer) {
    perror("No buffer somehow idk\n");
    exit(EXIT_FAILURE);
  }
  while(1) {
    c = getchar();
    if (c == EOF || c == '\n') {
      input[position] = '\0';
      return buffer;
    }
    else {
      input[position] = c;
    }
  }
}

int taansh_exit(void) {
  exit(EXIT_SUCCESS);
}

int taansh_hello(void) {
  printf("Hello please kill me\n");
}
