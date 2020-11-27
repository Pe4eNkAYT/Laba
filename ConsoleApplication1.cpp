#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <malloc.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int n = 10;
	int* mas;
	mas = (int*)malloc(n * sizeof(int));
	int j;
	int i;
	int k=0;
	for (j = 0; j < n; j++)
	{
		printf("Введите %d: ", j);
		while (!scanf_s("%d", &mas[j]))
		{
			printf("Ошибка! Вы ввели не число.\n");
			rewind(stdin);
			printf("Введите a[%d]: ", j);
		}
	}
	printf("\nИсходный массив:");
	for (j = 0; j < n; j++)
	{
      	printf("%d ", mas[j]);	
	}
	for (j = 0; j < n; j++) 
	{
		for (i = n - 1; i > 0; i--)
		{
			if (mas[i - 1] > mas[i])
			{
				k = mas[i - 1];
				mas[i - 1] = mas[i];
				mas[i] = k;
			}
		}
	}
	printf("\nПолученный массив после обработки:");
	for (j = 0; j < n; j++)
	{
		printf("%d ", mas[j]);
	}
	printf("\n 5 больших чисел :");
	for (j = 5; j < n; j++)
	{
		printf("%d ", mas[j]);
	}
	return 0;
}