#include <stdio.h>
#include <netinet/in.h>
#include <stdint.h>

int main(int argc, char *argv[]){

	FILE *fd, *fd2;
	uint32_t sn, sn2;

	fd = fopen(argv[1], "rb");
	fd2 = fopen(argv[2], "rb");

	fread(&sn, sizeof(sn), 1, fd);
	sn=ntohl(sn);

	fread(&sn2, sizeof(sn2), 1, fd2);
	sn2=ntohl(sn2);

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", sn, sn, sn2, sn2, sn+sn2, sn+sn2);

}
