#include "monty.h"

int strtonum(char *token)
{
  int i = 0;
  while (token[i])
    {
      if (token[i] == '\n')
	token[i] = '\0';
      i++;
    }
  i = atoi(token);
  return (i);
}
