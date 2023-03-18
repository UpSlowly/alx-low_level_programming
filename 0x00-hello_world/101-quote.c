#include <unistd.h>
int main(void)
{
char artisusf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, artisusf, 60);
return (1);
}