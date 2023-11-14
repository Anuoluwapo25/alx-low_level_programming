/**
 * _memcpy - function that copies memory area
 *
 * @dest: parameter dest
 * @src: parameter src
 * @n: parameter n
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[n] = src[n];
        }

        return (dest);

}

