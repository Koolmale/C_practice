/*debugging definitions with if, else, elif prepocessor directives. */


#include <stdio.h>
#define DEBUG 1

int main () {
  #if DEBUG == 1
    printf("Debug status is 1 \n");
  
  #elif DEBUG == 2
    printf("Debug status is 2 \n");

  #else 
    #ifdef DEBUG
      printf("Debug is defined");
    #endif
    #ifndef DEBUG
      printf("Debug is not defined");
    #endif
  #endif
  
  return 0;
}

// to test this change the definition of debug in the prepocessor directive to 1,2,3, as well as changing the entire directive to #undef Debug
