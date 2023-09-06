/**
  * read_textfile - Function to read a set of text in a file
  * @filename: name of file to be read
  * @letters: mode of file
  * Author: Dahesey
  * Return: Number of letters printed
  */

#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int descript;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	descript = open(filename, O_RDONLY);
	if (descript == -1)
		return (0);


	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rd = read(descript, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(descript);
	return (wr);
}
