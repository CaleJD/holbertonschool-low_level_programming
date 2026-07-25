#include "dog.h"
#include <stdlib.h>

/**
* string_length - Counts length of string
* @s: String to count
* Return: The string length
*/
int string_length(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
* string_copy - Makes a copy of a string
* @destination: The destination for the copied string
* @source: The copied string
* Return: The new copied string
*/
char *string_copy(char *destination, char *source)
{
	int i = 0;

	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}

/**
* new_dog - The new dog
* @name: The dog name
* @age: The dog age
* @owner: The dog owner
* Return: The info for new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(string_length(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(string_length(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	string_copy(dog->name, name);
	string_copy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
