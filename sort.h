#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list
 * @n: Integer node
 * @prev: Pointer to the previous element
 * @next: Pointer to the next element
*/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quickSort(int *array, int low_index, int high_index, size_t size);
int partition(int *array, int lowIndex, int highIndex, size_t size);

void print_array(int *array, size_t size);
void print_list(const listint_t *list);
