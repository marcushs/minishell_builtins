#include "libft/libft.h"

void	pwd(void)
{
	char	*path;

	path = getcwd(NULL, 0);
	ft_printf("%s\n", path);
	free(path);
	path = NULL;
}

