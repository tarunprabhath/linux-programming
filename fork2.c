#include<stdio.h>
#include<stdlib.h>
 int main(int argc, char const *argv[])
{
	char *new[3];
	new[0]="cat";
	new[1]="new.c";
	int i=execve("/bin/ls",new[0],NULL);
	return 0;
}
