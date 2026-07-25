#ifndef DOG_H
#define DOG_H

/**
* struct dog - The struct containing the information for a dog
* @name: Name of dog
* @age: Age of dog
* @owner: Owner of dog
* Description: Header file that defines a struct of a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
