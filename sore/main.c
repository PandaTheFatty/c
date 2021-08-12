# include<stdio.h>

int main()
{
	int arr[10];
	void sore(int a[], int x);
	void input(int b[], int y);
	void output(int c[], int z);
	void reverse(int c[], int n);
	int *pointer = arr;

	printf("Please input 10 integer numbers:\n");
	
	input(arr, 10);
	sore(arr, 10);

	printf("The sored array is:\n");

	output(arr, 10);
	reverse(arr, 10);

	return 0;
	
}


/*
Please input 10 integer numbers:

11 5 7 4 6 9 13 2 8 21

The sored array is:
2 4 5 6 7 8 9 11 13 21
21 13 11 9 8 7 6 5 4 2
Press any key to continue


*/