#include "main.h"
/*cp file_from file_to(const char *file_from, const char *file_to)
{
*/
	char *buff;
	int n = 0;

	if (file_from == NULL)
	{
		exit(98);
		dprintf("Can't read from file NAME_OF_THE_FILE");
	}
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE");
	}
	buff = malloc(sizeof(file_from) * 1024);
	if (buff == NULL)
	{
		return (0);
	}
	/*fp = open(file_to, O_WRONLY | O_APPEND, 0644);*/
	n = write(file_to, file_from, strlen(file_from));
	if (n == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
	}

	close(fp);
	if (close(fp) == -1)
	{
		exit(100);
	}