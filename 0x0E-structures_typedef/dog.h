#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents 3 things of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: who is the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
