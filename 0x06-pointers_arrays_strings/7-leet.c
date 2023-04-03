#include "main.h"

char *leet(char *str)
{
  char *leet_chars = "aAeEoOtTlL";
  char *leet_subs = "4433007711";
  int i, j;

  for (i = 0; str[i] != '\0'; i++)
  {
    for (j = 0; leet_chars[j] != '\0'; j++)
    {
      if (str[i] == leet_chars[j])
      {
        str[i] = leet_subs[j];
        break;
      }
    }
  }

  return str;
}
