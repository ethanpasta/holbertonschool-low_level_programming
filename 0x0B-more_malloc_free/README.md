# 0x0B. C - More malloc, free
### Learning Objectives
* How to use the exit function
* What are the functions calloc and realloc from the standard library and how to use them
### Tasks
0. Trust no one
a function that allocates memory using malloc

**function prototype:** void *malloc_checked(unsigned int b)

1. string _nconcat
a function that concatenates two strings

**function prototype:** char *string_nconcat(char *s1, char *s2, unsigned int n)

2. _calloc
a function that allocates memory for an array, using malloc

**function prototype:** void *_calloc(unsigned int nmemb, unsigned int size)

3. array_range
a function that creates an array of integers

**function prototype:** int *array_range(int min, int max)

4. _ralloc
a function that reallocates a memory block using malloc and free

**function prototype:** void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
