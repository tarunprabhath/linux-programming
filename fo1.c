// C program to illustrate 
// read system Call 
#include<stdio.h> 
#include<fcntl.h> 

int main() 
{ 
	char c; 
	int fd1 = Open("foo.txt", O_RDONLY, 0); 
	//int fd2 = Open("foobar.txt", O_RDONLY, 0); 
	Read(fd1, &c, 10);
	printf("c = % c\n", c); 
	exit(0); 
} 

