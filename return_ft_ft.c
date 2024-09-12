#include <stdio.h>

char *ft_ft(void){

    char* coucou = "Hello";

    return coucou;
}

int main(void)
{
    int i = 42;

    char *test = ft_ft();

    printf("%s\n", test);
}