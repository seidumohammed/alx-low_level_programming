#include "main.h"
/**
 *_memcpy - func that cp "n" bytes form mem area "src" to mem area "dest"
 *@dest: destination for copied bytes
 *@src: source to cp bytes of mem
 *@n: bytes of the mem
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;

	}

	return (dest);
}
