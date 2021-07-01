/**
* *_strcat - concatenates two strings
* @dest: the first string
* @src: the second string 
* 
* Return: concatenation of the strings
*/


char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
for (j = 0; dest[j] != '\0'; j++)
		;
while (src[i] != '\0')
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
