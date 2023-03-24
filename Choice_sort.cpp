#include "Header.h"

int* choice_sort(int* arr_ptr, size_t arr_size)
{
    int* sorted_array = (int*)calloc(arr_size, sizeof(int));
    int new_arr_size = arr_size;

    for(size_t index = 0; index < arr_size; index++)
    {
        sorted_array[index] = get_min(arr_ptr, new_arr_size);
        arr_ptr++;
        new_arr_size--;
    }

    return sorted_array;
}

int get_min(int* arr_ptr, size_t arr_size)
{
    int min_value = arr_ptr[0];
    for(size_t index = 0; index < arr_size; index++)
    {
        if(min_value > arr_ptr[index])
        {
            min_value = arr_ptr[index];
        }
    }
    return min_value;
}

