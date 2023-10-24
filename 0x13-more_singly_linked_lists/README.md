# 0x13-more_singly_linked_lists

![image](https://github.com/saadsgh123/alx-low_level_programming/assets/141192668/fe9cd5e0-a5ad-4a7a-9342-7ac96c0c6c28)

## requierment

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## 1-Function: `print_listint`

### Description:
This function is used to print the elements of a singly linked list of integers.

### Parameters:
- `h`: A pointer to the first element of the linked list.

### Return Value:
- The function returns the number of elements in the linked list.

### Example:
```c
listint_t *head;
size_t num_elements;

head = create_listint(1, 2, 3, 4, 5);
num_elements = print_listint(head);
printf("Number of elements: %lu\n", num_elements);
```
