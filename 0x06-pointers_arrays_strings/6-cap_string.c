#include "main.h"
/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *str)
{
    int cap_next = 1; 
    char *p = str;
    
    while (*p) {
        if (isspace(*p) || ispunct(*p)) {
            cap_next = 1; 
        } else if (cap_next && islower(*p)) {
            *p = toupper(*p); 
            cap_next = 0; 
        } else {
            cap_next = 0;
        }
        p++;
    }
    
    return str;
}