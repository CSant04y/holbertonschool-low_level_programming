#include "dog.h"
char *_strdup(char *str);
/**
 * *new_dog - this makes a new dog
 * @name: this is the name of dog
 * @age: this is the owner
 * @owner: the name of the owner
 * Return: this is dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = _strdup(name);
	if (!ptr->name)
	{
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	ptr->owner = _strdup(owner);
	if (!ptr->owner)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
/**
 * *_strdup - this copies a string and allocated memory for it
 * @str: this is the string we want to copy
 * Return: return is a char
 */

char *_strdup(char *str)
{
	char *ptr;
	int count = 0;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	for (count = 0; str[count] != '\0'; count++)
	{
		ptr[count] = str[count];
	}
	ptr[count] = '\0';
	return (ptr);
}
