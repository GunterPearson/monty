#include "monty.h"

int strtonum(char *token)
{
  int i = 0;
  printf("in strtonum\n");
  while (token[i])
    {
      if (token[i] == '\n')
	token[i] = '\0';
      printf("i is: %d\n", i);
      i++;
    }
  i = atoi(token);
  printf("i is: %d\n", i);
  return (i);
}
