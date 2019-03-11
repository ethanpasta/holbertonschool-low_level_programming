#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function returns length of string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s)
		return (_strlen(s + 1) + 1);
	return (0);
}

/**
 * new_dog - function creates a new struct of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to struct of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	char *name1, *owner1;
	dog_t *dog = malloc(sizeof(dog_t));

	if (!name || !owner || !dog)
		return (NULL);
	name1 = malloc(_strlen(name) + 1);
	if (!name1)
	{
		free(dog);
		return (NULL);
	}
	owner1 = malloc(_strlen(owner) + 1);
	if (!owner1)
	{
		free(name1);
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name1[i] = name[i];
	name1[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		owner1[i] = owner[i];
	owner1[i] = '\0';
	dog->name = name1;
	dog->owner = owner1;
	dog->age = age;
	return (dog);
}
