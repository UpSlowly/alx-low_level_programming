#include "main.h"

void print_buffer(char *b, int size) {
   if(size <= 0) {
      printf("\n");
      return;
   }
   int i, j;
   for(i = 0; i < size; i += 10) {
      printf("%08x: ", i);
      for(j = 0; j < 10 && i+j < size; j++) {
         printf("%02x ", (unsigned char)b[i+j]);
      }
      for(; j < 10; j++) {
         printf("   ");
      }
      for(j = 0; j < 10 && i+j < size; j++) {
         char c = b[i+j];
         printf("%c", isprint(c) ? c : '.');
      }
      printf("\n");
   }
}
