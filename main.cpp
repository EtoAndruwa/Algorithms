#include "Header.h"

int main()
{   

    int arr[5] = {1, 4, 5, 6, 10};
    int* arr_ptr = (int*)&arr;
    size_t size_of_arr = sizeof(arr) / sizeof(int);

    printf("index %ld", binary_search(size_of_arr, arr_ptr, 6));

    return 0;
}


