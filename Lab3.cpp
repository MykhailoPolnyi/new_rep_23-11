
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<corecrt_malloc.h>
#include<string.h>

int max_adj_el_product(int arr[], unsigned num_of_elems)
{
	int max_result=arr[0]*arr[1] ;
	int curr_result;
	for (int i = 1; i < num_of_elems - 1;i++)
	{
		curr_result = arr[i] * arr[i + 1];
		if (curr_result > max_result)
		{
			max_result = curr_result;
		}
	}
	return max_result;
}

void init(int arr[], unsigned num_of_elems)
{
	for (int i = 0; i < num_of_elems; i++)
	{
		printf("a[%d] = ", i+1);
		scanf("%d", arr+i);		
	}
}

void main()
{
	unsigned num_of_elems;

	printf("Enter size of array: ");
	scanf("%u", &num_of_elems);

	int* arr = (int*)calloc(num_of_elems, sizeof(int));

	init(arr, num_of_elems);


	printf("Max prouduct of adjecnt element is: %d\n", max_adj_el_product(arr, num_of_elems));
	
	free(arr);

	/*for (int i = 0;i < num_of_elems;i++)
	{
		printf("%d\n", arr[i]);
	}*/
	
}