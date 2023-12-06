#include <stdio.h>
#include <string.h>
int ft_strstr(char *str, char *to_find);

int main() {
  char haystack[] = "Bonjour, ccomment ça va ?";
  char needle[] = "Bonjour";

  printf("%i\n", ft_strstr(haystack, needle));
  return 0;
}
