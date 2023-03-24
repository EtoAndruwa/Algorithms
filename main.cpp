#include "Header.h"

int main()
{   

    int arr[] = {1, 4, 5, 6, 10, 11};
    int* arr_ptr = (int*)&arr;
    size_t size_of_arr = sizeof(arr) / sizeof(int);

    int value = 0;
    scanf("%d", &value);
    // printf("size_of_arr %ld\n", size_of_arr);
    printf("index %ld\n", simple_search(size_of_arr, arr_ptr, value));

    return 0;
}