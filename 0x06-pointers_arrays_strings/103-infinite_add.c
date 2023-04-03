#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);

    if (len1 + 1 > size_r || len2 + 1 > size_r)
        return 0;

    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = size_r - 1;

    r[k] = '\0';
    k--;

    while (i >= 0 || j >= 0 || carry != 0) {
        int sum = carry;

        if (i >= 0) {
            sum += n1[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += n2[j] - '0';
            j--;
        }

        carry = sum / 10;
        sum %= 10;
        r[k] = sum + '0';
        k--;

        if (k < 0 && (i >= 0 || j >= 0 || carry != 0))
            return 0;
    }

    return &r[k + 1];
}
