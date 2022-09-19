#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "This is ";
    char last[] = "";
    int r;
    int size = 30;
    char buffer[size];

    strcpy(buffer,first);
    r = strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}
