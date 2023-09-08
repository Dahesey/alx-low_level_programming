/**
  * append_text_to_file - A function to append text to a file created
  * @filename: The name of file to be created
  * @text_content: NULL terminated string to add at the end of the file
  * Return: 1 on success -1 on failure
  */
#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int descript, chars, wr;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	if (filename)
	{
		descript = open(filename, O_APPEND | O_WRONLY);
		if (descript < 0)
			return (-1);
	}
	if (text_content)
	{
		for (chars = 0; text_content[chars]; chars++)
			;
		wr = write(descript, text_content, chars);
		if (wr == -1)
			return (-1);
	}
	close(descript);

	return (1);
}
