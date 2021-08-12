void sore(int c[], int z)
{
	int i, j, temp;
	for(i = 0; i < z - 1; i++)
	{
		for(j = i + 1; j < z; j++)
		{
			if(c[i] > c[j])
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;

			}
		}
	}
}


//…˝–Ú≈≈¡–