#include "main.h"

/**
 * chk_filetype - the function checks whether file
 * specified is regular file
 * @sh_info: an info struct
 * @filepath: the path to file
 * Return: 1 if true, 0 otherwise
 */
int chk_filetype(*sh_info, char *filepath)
{
	struct stat var;

	(void)sh_info;
	if (!filepath || stat(filepath, &var))
		return (0);

	if (var.var_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}

/**
 * chk_cmd - to manage PATH environment variable and finds commands
 * executable within specified paths
 * @sh_info: an info struct
 * @p_str: the PATH string
 * @cmd: cmd to find
 * Return: the path of cmd if found, otherwise NULL
 */
char *chk_cmd(sh_info_t *sh_info, char *p_str, char *cmd)
{
	int l = 0, p = 0;
	char *path;

	if (!p_str)
		return (NULL);
	if ((len_str(cmd) > 2) && chk_start(cmd, "./"))
	{
		if (chk_filetype(sh_info, cmd))
			return (cmd);
	}
	while (1)
	{
		if (!p_str[l] || p_str[l] == ':')
		{
			path = cp_char(p_str, p, l);
			if (!*path)
				cat_str(path, cmd);
			else
			{
				cat_str(path, "/");
				cat_str(path, cmd);
			}
			if (chk_filetype(sh_info, path))
				return (path);
			if (!p_str[l])
				break;
			p = l;
		}
		l++;
	}
	return (NULL);
}
