#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that copy my string
 *
 * @str: string char
 *
 * Return: Pointer.
 */
char *_strdup(char *str)
{
	char *p;
	int lenght = 0;
	int itercpy;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[lenght] != '\0')
		lenght++;

	p = malloc(sizeof(*p) * lenght + 1);
	if (!p)
	{
		return (NULL);
	}
	for (itercpy = 0; itercpy <= lenght; itercpy++)
	{
		p[itercpy] = str[itercpy];
	}
	return (p);
}

/**
 * new_dog - Function that copy my string.
 *
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: dog1
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));

	if (!dog1)
	{
		free(dog1);
		return (NULL);
	}

	dog1->name = _strdup(name);

	if (dog1->name == NULL)
	{
		free(dog1->name);
		free(dog1);
	}

	dog1->owner = _strdup(owner);

	if (dog1->owner == NULL)
	{
		free(dog1->owner);
		free(dog1->name);
		free(dog1);
	}
	dog1->age = age;
	return (dog1);
}
