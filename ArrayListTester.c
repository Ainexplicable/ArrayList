#include <stdio.h>
#include "ArrayList.h"

void print_size_and_capacity(ArrayList *list)
{
    printf("size = %d\tcapacity = %d\n", list->size, list->capacity);
}

int main()
{
    ArrayList *list = new_array_list();
    // push_back
    puts("Testing push_back:");
    for (int i = 0; i < 23; i++)
    {
        push_back(list, i);
        print_size_and_capacity(list);
    }
    out_string(list);
    puts("");

    // pop_back
    puts("Testing pop_back:");
    while (list->size > 10)
        pop_back(list);
    print_size_and_capacity(list);
    out_string(list);
    puts("");

    // insert to list
    puts("Testing insert:");

    puts("insert 100 to front:");
    insert(list, 0, 100);
    out_string(list);
    print_size_and_capacity(list);

    puts("insert 200 to back:");
    insert(list, list->size, 200);
    out_string(list);
    print_size_and_capacity(list);

    puts("insert 300 to index 1:");
    insert(list, 1, 300);
    out_string(list);
    print_size_and_capacity(list);
    puts("");

    // erase from list
    puts("Testing erase:");

    puts("erase index 1:");
    erase(list, 1);
    out_string(list);

    puts("erase front:");
    erase(list, 0);
    out_string(list);

    puts("erase back:");
    erase(list, list->size - 1);
    out_string(list);

    print_size_and_capacity(list);
    puts("");

    // trim array capacity to size
    puts("Testing shrink_to_fit:");

    shrink_to_fit(list);
    print_size_and_capacity(list);

    list->size = 0;
    shrink_to_fit(list);
    print_size_and_capacity(list);

    puts("");

    // clear the list
    puts("Testing clear:");
    clear(list);
    out_string(list);
    destruct_array_list(list);
    return 0;
}