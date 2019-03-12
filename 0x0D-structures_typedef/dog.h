#ifndef DOG
#define DOG

/**
 * struct dog - Data type
 *
 * @name: Name.
 * @age: age.
 * @owner: owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

