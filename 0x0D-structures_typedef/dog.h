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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

