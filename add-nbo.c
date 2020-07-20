#include <stdio.h>
#include <netinet/in.h>
#include <stdint.h>

int main(int argc, char *argv[]){

	FILE *fd, *fd2;
	uint32_t n, n2;

	fd = fopen(argv[1], "rb");
	fd2 = fopen(argv[2], "rb");

	fread(&n, sizeof(n), 1, fd);
	n=ntohl(n);

	fread(&n2, sizeof(n2), 1, fd2);
	n2=ntohl(n2);

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", n, n, n2, n2, n+n2, n+n2);

	fclose(fd);
	fclose(fd2);
}
