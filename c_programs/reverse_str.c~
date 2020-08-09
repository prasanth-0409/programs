#include <stdio.h>
#include <string.h>

// Function to reverse a given string
void reverse_string(char * str)
{
    int i=0, j=0, len=0;

    if (str == NULL){
        printf("Null String \n");
	return;
    }
    len = strlen(str);
    for(i=0, j= len-1; i < (len/2);++i, --j){
	    printf("%d %d \n", i, j);
	    //char temp = str[i];
	    //str[i]=str[j];
	    //str[j]=temp;
	    str[i] = str[i] ^ str[j];
	    str[j] = str[i] ^ str[j];
	    str[i] = str[i] ^ str[j];
    }
}
int main ()
{
	char  str[] = "SaiRam";
	char  str2[] = "Sai";
	printf("Reverse of str:%s is ", str);  
	reverse_string(str);
	printf("%s\n",str);
	printf("Reverse of str:%s is ", str2);  
	reverse_string(str2);
	printf("%s\n",str2);
}
