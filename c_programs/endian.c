#include <stdio.h>

void swap_char_pointers(char * ptr1, char * ptr2)
{
	printf("ptr1:%x ptr4:%x\n", *ptr1, *ptr2);
	*ptr1 = (*ptr1) ^ (*ptr2);
	*ptr2 = (*ptr1) ^ (*ptr2);
	*ptr1 = (*ptr1) ^ (*ptr2);
	printf("ptr1:%x ptr4:%x\n", *ptr1, *ptr2);

}
int
little_to_big(int  x )
{
	int temp = 0;
	char * ptr = (char *)&temp;

#if 1
	temp = (x & 0xff)<<24 ;
	temp = temp | ((x & 0xff00) << 8);
	temp = temp | ((x & 0xff0000) >> 8);
	temp = temp | ((x & 0xff000000) >>24);
	printf("Address of temp:%x temp[0]:%x temp[1]:%x temp[2]:%x temp[3]:%x\n", ptr, ptr[0],ptr[1],ptr[2],ptr[3]);
	return temp;
#else 
	char * ptr =(char*) &x;
	swap_char_pointers(ptr, ptr+3);
	swap_char_pointers(ptr+1, ptr+2);
	return x;
#endif
}
int main()
{
#if 1
    int x = 0x12345678;
    char * ptr = (char *)&x;

    printf("Address of x :%x x[0]:%x x[1]:%x x[2]:%x x[3]:%x\n",
		     ptr, ptr[0],ptr[1],ptr[2],ptr[3]);
    if ( *ptr == 0x12){
	    printf("Big Endian\n");
    }else{
	    printf("Little Endian\n");
    }
    x = little_to_big(x);
    printf("Address of x :%x x[0]:%x x[1]:%x x[2]:%x x[3]:%x\n",
		     ptr, ptr[0],ptr[1],ptr[2],ptr[3]);
#if 0
    printf("Before:%x\n", x);
    printf("Before:%d\n", x);
    x = little_to_big(x);
    printf("x:%x\n", x);
    printf("x:%d\n", x);
    if ( *ptr == 0x12){
	    printf("Big Endian\n");
    }else{
	    printf("Little Endian\n");
    }
#endif
#else
    union {
	    int i;
	    char ch;
    }temp;
    temp.i = 0x12345678;
    if ( temp.ch == 0x12){
	    printf("Big Endian:%x\n", temp.ch);
    }else{
	    printf("Little Endian:%x\n",temp.ch);
    }
#endif
    int i = -2;
    printf("i:%x \n", i);


}
