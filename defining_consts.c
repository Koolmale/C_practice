// defining constants using the #define prepocesser directive

#include <stdio.h>

#define LINE "______________"
#define NAME "Koolmale"
#define LANG "C programming"

#ifdef _WIN32
#define SYSTEM "Windows"
#endif

#ifdef linux
#define SYSTEM "Linux"
#endif 


int main () {
  printf ("\n \t %s \n \t %s \n", LINE, NAME);
  printf ("\n \t %s \n \t %s", LANG, LINE);

  printf ("\n Operating system: %s \n", SYSTEM);
  
  return 0;
}
