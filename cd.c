#include "libft/libft.h"
#include <errno.h>
#include <sys/stat.h>

char	*get_home_path(char **env)
{
	int	i;

	i = 0;
	while (env && env[i])
	{
		if (ft_strncmp(env[i], "HOME", 4) == 0)
			return (env[i] + 5);
		i++;
	}
	return (NULL);
}

int	main(int argc, char **argv, char **envp)
{
	if (argc == 1)
	{
		if (chdir(get_home_path(envp)) == -1)
			exit(EXIT_FAILURE);
	}
	else if (argc == 2)
	{
		if (chdir(argv[1]) == -1)
			exit(EXIT_FAILURE);
	}
	else
	{
		ft_printf("minishell: cd: too many arguments\n");
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
