#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>

int main(void) {
	int fd;
	
	fd = open("/workspace/LSP/src/example.txt", O_RDONLY);
	
	printf("%d\n", fd);
	
	return 0;
}