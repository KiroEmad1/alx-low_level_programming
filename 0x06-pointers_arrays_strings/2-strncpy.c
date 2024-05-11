/**
 * _strncpy - Copies at most n bytes of the string pointed to by src,
 *             including the terminating null byte, to the buffer
 *             pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	/* Copy at most n bytes of src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* Fill the remaining bytes of dest with null characters */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
