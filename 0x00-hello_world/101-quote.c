#include <unistd.h>
/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t nbytes = sizeof(msg) - 1;
ssize_t nwritten = write(STDERR_FILENO, msg, nbytes);
return ((nwritten == nbytes) ? 1 : 0);
}
