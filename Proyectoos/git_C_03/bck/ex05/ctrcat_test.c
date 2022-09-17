#include <unistd.h>
#include <string.h>
#include <stdio.h>

void print_exa(char c)
{
    char *hex;
    char escape;
    int h_index;

    hex = "0123456789abcdef";
    escape = '\\';
    write(1,&escape,1);
    h_index = c / 16;
    write (1, &hex[h_index],1);
    h_index = c % 16;
    write (1, &hex[h_index],1);
}


void hex_array(char *array, int len)
{
    char mc;
    for (int i = 0; i < len; i++)
    {
        printf ("%d: ",i);
        print_exa(array[i]);
        printf (" ");
    }
        printf ("\n");

}

int main ()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 19;
    char buffer[size];
hex_array(buffer,25);
    strcpy(buffer,first);
hex_array(buffer,25);
    r = strlcat(buffer,last,size);
hex_array(buffer,25);
    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}