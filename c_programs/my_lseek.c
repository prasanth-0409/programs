#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	int num_lines = 0,temp=0;
	off_t size = 0;
	int n = 0, fd = 0;
	char ch = 0;

	if( argc != 3 ){
		printf("Usage:a.out <#of lines> <filename>\n");
		return 0;
	}

	num_lines = atoi(argv[1]);
	printf("Number of lines:%d\n",num_lines);
	fd = open(argv[2], O_RDONLY );
	if( fd < 0){
		printf("Error opening file \n");
		return 0;
	}

	size = lseek(fd, 0, SEEK_END); // Gives size of the file
	if (size == -1) {
            printf("lseek failed \n");
	    return 0;
	}
	
	printf("Size of file :%d\n", size);
	temp = 0;
        --size;
	while(temp < num_lines+1){
		lseek(fd, size , SEEK_SET);
		n = read(fd, &ch, 1);
		printf("val:%d", ch);
		if ( n <=0 ){
			printf("read failed \n");
			return 0;
		}
		if(ch == '\n'){
			++temp;
		}
		printf("temp:%d size:%d \n", temp, size);
		--size;
	}
	printf("Temp:%d\n", temp);

	while ( (n = read(fd, &ch, 1)) > 0 ){
		printf("%c", ch);
	}
}
