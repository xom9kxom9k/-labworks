#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "SortString.h"

char filename[] = "C:\\lab28\\dict3.txt";
void main() {
	// t0 - сколько прошло времени от старта программы до момента входа в функцию main()
	long t0 = clock();
	printf("t0 = %.3f sec \n", t0 / (float)CLOCKS_PER_SEC);

	LoadWords(filename);
	// сообщаем какие данные обрабатываются
	printf("Experiment with array lenth = %d, file = %s\n", n, filename);

	// t1 - сколько прошло времени от старта программы до окончания загрузки 	массива
	int t1 = clock();
	printf("t1 = %.3f sec \n", t1 / (float)CLOCKS_PER_SEC);
	for (int i = 0; i < 1; i++) {
		fillArrayStrings();

		//SelectionSortStrings();
		//QuickSortStrings();
		BubbleSortStrings();
		//ShellSortStrings();
		

		if (!isSortedStrings()) {
			printf("Array is not sorted!!!\n");
		}
	}

	// t2 - сколько прошло времени от старта программы до окончания сортировки
	long t2 = clock();
	printf("t2 = %.10f sec \n", t2 / (float)CLOCKS_PER_SEC);

	printf("t1 - t0 = %.3f sec (Run time of array loading)\n",
		(t1 - t0) / (float)CLOCKS_PER_SEC);
	printf("t2 - t1 = %.3f sec (Run time of sorting)\n",
		(t2 - t1) / (float)CLOCKS_PER_SEC);
}
