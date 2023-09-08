/**
  * create_file - A function that creates a file
  * @filename: Name of file
  * @text_content: a NULL terminated string to write to the file
  * Return: 1 on success and -1 on failure
  */
#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int descript, chars, wr;

	if (!filename)
		return (0);
	descript = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (descript == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (chars = 0; text_content[chars]; chars++)
		;

	wr = write(descript, text_content, chars);
	if (wr == -1)
		return (-1);
	close(descript);
	return (1);
}
