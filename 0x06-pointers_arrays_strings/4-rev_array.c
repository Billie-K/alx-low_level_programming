/**
* reverse_array - reverses the content of an array
* @a: the array to reverse
* @n: size of elements in the array
*
* Return nothing
*/
void reverse_array(int *a, int n)
{
int i, temp;

i = temp =  0;
n -= 1;
while (i <= n)
{
temp = a[n];
a[n--] = a[i];
a[i++] = temp;
}
}
