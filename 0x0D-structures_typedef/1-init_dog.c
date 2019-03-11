#include "dog.h"

/**
 * init_dog - function initializes a variable of type
 * struct dog
 * @d: pointer to struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
