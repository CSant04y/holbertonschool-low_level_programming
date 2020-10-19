#ifndef _DOG_
#define _DOG_
#include <stdio.h>
/**
 * struct dog - this is the name of the struct
 * @name: this is the name of the type
 * @age: is a float of age
 * @owner: this is the owner
 * This is the first stuct of this project
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
