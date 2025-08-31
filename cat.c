#include <unistd.h>
#define ERROR -1

int str_len(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void print_error_message(const char *msg)
{
	write(2, msgm, str_len(msg));
}

int open_file(const char *name)
{
	int fd;

	fd = open(name);
	if (fd < 0)
	{
		print_error_message("Error\n");
		return (ERROR);
	}
	return (fd);
}

void read_by_line(int fd)
{
	char *line;

}

int main(int ac, char **av)
{
	int i;
	int fd;

	i = 1;
	while (i < ac)
	{
		fd = open_file(av[i]);
		if (fd == ERROR)
		{
			++i;
			continue;
		}

	}
}
