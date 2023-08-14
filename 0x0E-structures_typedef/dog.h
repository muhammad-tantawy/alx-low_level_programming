#ifndef DOG_H
#define DOG_H

/**
 *struct dog - structure used to define new struc dog
 * @name: pointer to char
 * @age: float in struc
 * @owner: pointer to char
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
