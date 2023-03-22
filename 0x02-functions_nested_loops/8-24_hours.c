#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
int everymin, inhours;
for (inhours = 0; inhours <= 23; inhours++)
{
for (everymin = 0; everymin <= 59; everymin++)
{
_putchar((inhours / 10) + 48);
_putchar((inhours % 10) + 48);
_putchar(':');
_putchar((everymin / 10) + 48);
_putchar((everymin % 10) + 48);
_putchar('\n');
}
}
}
