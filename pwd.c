#include <unistd.h>

void	pwd(void)
{
	char	*path;

	path = getcwd(NULL, 0);
	ft_putstr_fd(path, 1);
	free(path);
	path = NULL;
}

int	main(void)
{
	pwd();
}
