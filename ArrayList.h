#pragma once
#ifndef _ARRAY_LIST_H
#define _ARRAY_LIST_H

#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

#define TYPE int
#define DEFAULT_CAPACITY 10

#define ERROR_INDEX_OUT_OF_RANGE 1
#define ERROR_MEMORY_ERROR 2

typedef struct ArrayList
{
    TYPE *arr;
    int size;
    int capacity;
} ArrayList;

ArrayList *new_array_list();

void set_list_capacity(ArrayList *list, int new_capacity);

void shrink_to_fit(ArrayList *list);

void push_back(ArrayList *list, TYPE value);

void pop_back(ArrayList *list);

void insert(ArrayList *list, int index, TYPE value);

TYPE erase(ArrayList *list, int index);

TYPE set(ArrayList *list, int index, TYPE value);

TYPE get(ArrayList *list, int index);

int index_of(ArrayList *list, TYPE value);

int last_index_of(ArrayList *list, TYPE value);

void clear(ArrayList *list);

void destruct_array_list(ArrayList *list);

void out_string(ArrayList *list);

#endif // _ARRAY_LIST_H
