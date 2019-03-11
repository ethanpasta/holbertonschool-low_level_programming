#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates a new struct of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: struct of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name1 = name, *owner1 = owner;
	dog_t *tmp = malloc(sizeof(dog_t));

	if (!tmp)
		return (NULL);
	tmp->name = name1;
	tmp->owner = owner1;
	tmp->age = age;
	return (tmp);
}
