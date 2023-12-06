#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int ft_strlen(char *str) {
  int position;

  position = 0;
  while (*str++)
    position++;
  return position;
}

int ft_strstr(char *str, char *to_find) {
  while (ft_strlen(str) >= ft_strlen(to_find)) {
    if (*str == *to_find) {
      if (ft_strcmp(to_find, str) == 0) {
        return 1;
      }
    }
    str++;
  }
  return 0;
}
