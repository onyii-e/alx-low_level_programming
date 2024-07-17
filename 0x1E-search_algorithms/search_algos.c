#include "search_algos.h"

/* Function to perform linear search */
int linear_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    for (size_t i = 0; i < size; ++i) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1; // Not found
}

/* Function to perform binary search */
int binary_search(int *array, size_t size, int value) {
    size_t left = 0;
    size_t right = size - 1;

    if (array == NULL)
        return -1;

    while (left <= right) {
        size_t mid = left + (right - left) / 2;

        printf("Searching in array: ");
        print_array(array, left, right);

        if (array[mid] < value)
            left = mid + 1;
        else if (array[mid] > value)
            right = mid - 1;
        else
            return mid;
    }

    return -1; // Not found
}

/* Function to print an array within specific bounds */
void print_array(int *array, size_t l, size_t r) {
    if (array == NULL)
        return;

    printf("[");
    for (size_t i = l; i <= r; ++i) {
        printf("%d", array[i]);
        if (i < r)
            printf(", ");
    }
    printf("]\n");
}

/* Function to perform binary search for index */
int binary_search_index(int *array, size_t l, size_t r, int value) {
    if (array == NULL)
        return -1;

    while (l <= r) {
        size_t mid = l + (r - l) / 2;

        printf("Searching in array: ");
        print_array(array, l, r);

        if (array[mid] < value)
            l = mid + 1;
        else if (array[mid] > value)
            r = mid - 1;
        else
            return mid;
    }

    return -1; // Not found
}

/* Function to perform linear skip search */
skiplist_t *linear_skip(skiplist_t *list, int value) {
    skiplist_t *current = list;
    skiplist_t *express = NULL;

    if (list == NULL)
        return NULL;

    /* Find the express lane nodes */
    while (current->express != NULL && current->express->n < value) {
        current = current->express;
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    express = current->express;

    /* Search in the range of the express lane */
    printf("Value found between indexes [%lu] and [%lu]\n", current->index, express->index);
    while (current != NULL && current->n <= value) {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return current;
        current = current->next;
    }

    return NULL; // Value not found
}

/* Function to create a skip list from an array */
skiplist_t *create_skiplist(int *array, size_t size) {
    skiplist_t *list = NULL;
    skiplist_t *node;
    size_t index = 0;

    while (size > 0) {
        node = malloc(sizeof(skiplist_t));
        if (node == NULL) {
            free_skiplist(list); // Clean up on failure
            return NULL;
        }

        node->n = array[index];
        node->index = index;
        node->next = NULL;
        node->express = NULL;

        if (list == NULL) {
            list = node;
        } else {
            skiplist_t *temp = list;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = node;
        }

        index++;
        size--;
    }

    init_express(list, index); // Initialize express lane
    return list;
}

/* Function to print the skip list */
void print_skiplist(const skiplist_t *list) {
    const skiplist_t *node;

    printf("List :\n");
    for (node = list; node != NULL; node = node->next) {
        printf("Index[%lu] = [%d]\n", node->index, node->n);
    }

    printf("\nExpress lane :\n");
    for (node = list; node != NULL; node = node->express) {
        printf("Index[%lu] = [%d]\n", node->index, node->n);
    }

    printf("\n");
}

/* Function to free the skip list */
void free_skiplist(skiplist_t *list) {
    skiplist_t *node;

    while (list != NULL) {
        node = list;
        list = list->next;
        free(node);
    }
}

/* Function to perform advanced binary search */
int advanced_binary(int array[], size_t size, int target) {
    // Implement your advanced binary search logic here
    return -1; // Placeholder
}

/* Function to perform exponential search */
int exponential_search(int array[], size_t size, int target) {
    // Implement your exponential search logic here
    return -1; // Placeholder
}

