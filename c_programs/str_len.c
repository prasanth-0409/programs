#include <stdio.h>

// Function to calculate length of a NULL terminated String.

unsigned int my_str_len(char * str)
{
    int len = 0;

    if ( str == NULL ){
	    printf("Null String \n");
	    return 0;
    }
    while( str[len++] != 0 );
    return (len - 1);
}
int main()
{
	printf("Len:%d \n", my_str_len("SAI"));
	printf("Len:%d \n", my_str_len(""));
	printf("Len:%d \n", my_str_len(NULL));
}
