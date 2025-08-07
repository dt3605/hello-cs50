#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // remove o \n no final
    printf("hello, %s\n", name);
}

