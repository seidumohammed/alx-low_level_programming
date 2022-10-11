#include <stdio.h>
#include "dog.h"
/**
 *new_dog - new dog
 *@name:  new dog's name
 *@owner: dog's owner
 *@age: dog's age
 *Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *cute_dog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	cute_dog = malloc(sizeof(dog_t));
	if (cute_dog == NULL)
	{
		free(cute_dog);
		return (NULL);
	}
	cute_dog->name = malloc(i * sizeof(cute_dog->name));
	if (cute_dog->name == NULL)
	{
		free(cute_dog->name);
		free(cute_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		cute_dog->name[k] = name[k];
	cute_dog->age = age;
	cute_dog->owner = malloc(j * sizeof(cute_dog->owner));
	if (cute_dog->owner == NULL)
	{
		free(cute_dog->owner);
		free(cute_dog->name);
		free(cute_dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		cute_dog->owner[k] = owner[k];
	return (cute_dog);
}
