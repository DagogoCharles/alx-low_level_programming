#include "main.h"
/**
 * rev_array - reverse content of arrays
 * of integers
 * @a: array
 * @n: number of element of the array
 * Return: no return
 */
void rev_array(int *a, int n)
{
int i, j, temp;
for (i = 0; i < n - 1; i++)
{
for (j = i + 1; j > 0; j--)
{
temp = *(a + j);
*(a + j) = *(a + (j - 1));
*(a + (j - 1)) = temp;
}
}
}