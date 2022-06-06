#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char *read_file;
	int num;

	fd = open("./tests/hhgttg.txt", O_RDONLY);
	printf("==============================================================\n");
	printf("| 1 - dracula | 2 - empty_test | 3 - hhgttg | 4 - large_file |\n| 5 - nl_and_eof_one | 6 - one_big_fat_line | 7 - some_lines |\n");
	printf("==============================================================");

	printf("\n\nEscolha um arquivo: ");

	scanf("%d", &num);


	switch (num)
	{
		case 1:
			printf("Open Dracula..\n\n");
			fd = open("./tests/dracula.txt", O_RDONLY);
			while ((read_file = get_next_line(fd)))
				printf("%s", read_file);
			close(fd);
			break;
		case 2:
			printf("Open Empty_test..\n\n");
			fd = open("./tests/empty_test.txt", O_RDONLY);
			while ((read_file = get_next_line(fd)))
				printf("%s", read_file);
			close(fd);
			break;
		case 3:
			printf("Open Hhgttg..\n\n");
			fd = open("./tests/hhgttg.txt", O_RDONLY);
			while ((read_file = get_next_line(fd)))
				printf("%s", read_file);
			close(fd);
			break;
		case 4:
			printf("Open Large_file..\n\n");
			fd = open("./tests/large_file.txt", O_RDONLY);
			while ((read_file = get_next_line(fd)))
				printf("%s", read_file);
			close(fd);
			break;
		case 5:
			printf("Open nl_and_eof_one..\n\n");
			fd = open("./tests/nl_and_eof_one.txt", O_RDONLY);
			while ((read_file = get_next_line(fd)))
				printf("%s", read_file);
			close(fd);
			break;
		case 6:
			printf("Open one_big_fat_line..\n\n");
			fd = open("./tests/one_big_fat_line.txt", O_RDONLY);
			while ((read_file = get_next_line(fd)))
				printf("%s", read_file);
			close(fd);
			break;
		case 7:
			printf("Open some_lines..\n\n");
			fd = open("./tests/some_lines.txt", O_RDONLY);
			while ((read_file = get_next_line(fd)))
				printf("%s", read_file);
			close(fd);
			break;
		default:
			printf("Nenhuma arquivo válido foi escolhido!");
	}
    return 0;
}
