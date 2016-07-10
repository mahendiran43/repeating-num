# repeating-num
#include <stdio.h>
#include <sstream>

using namespace std;

/**
    a = 123
    b = 15
    v1 = 12315
    v2 = 15123
    return (v2 - v1) to make the function sort in descending order
*/
int compare_concatenated_ints(const void *arg1, const void *arg2)
{
    int v1 = *(int*) arg1;
    int v2 = *(int*) arg2;

    stringstream s1, s2;
    s1 << v1 << v2;
    s2 << v2 << v1;

    s1 >> v1;
    s2 >> v2;

    return (v2 - v1);
}

void print_array(int arr[], int count)
{
    for (int i = 0; i < count; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {4, 0, 94, 9, 14, 0, 1};    
    int count = sizeof(arr)/sizeof(arr[0]);

    printf("BEFORE\n");
    print_array(arr, count);

    std::qsort(arr, count, sizeof(int), compare_concatenated_ints);

    printf("AFTER\n");
    print_array(arr, count);
}
