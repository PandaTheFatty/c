void reverse(int d[], int n)
{
/*	
	int i = n - 1;

	while(i)
	{
		printf("%d ", d[i]);
		i--;

	}
	printf("%d ", d[0]);
*/
	int i;
	for(i = n - 1; i >= 0; i--)
	{
		printf("%d ", d[i]);
	}
	putchar('\n');
}