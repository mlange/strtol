#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char hexValue[100];

    unsigned long decValue;

    decValue = strtol("1111111111111111111111", NULL, 2);

    printf("DECIMAL [%ul]\n", decValue);

    sprintf(hexValue, "%x", decValue);

    printf("HEX     [%s]\n", hexValue);

    exit(0);
}
