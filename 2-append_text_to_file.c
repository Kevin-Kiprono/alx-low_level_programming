#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

size_t _strlen(char *str);
/**
 * append_text_to_file - appends @text_content to the  @filename
 * @filename: name of the file to be created
 * @text_content: str to append to the filename
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wret;

	if (!filename)
		return (-1);
	len = _strlen(text_content);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}
	wret = write(fd, text_content, len);
	if (wret < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - determins the len of @str
 * @str: ptr to str
 * Return: size of a string
 */
size_t _strlen(char *str)
{
	int i = 0;

	while (str && str[i] != '\0')
		i++;

	return (i);
}
