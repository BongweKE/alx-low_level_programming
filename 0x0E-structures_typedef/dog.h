#ifndef dog_h
#define dog_h

/**
 * struct dog - used to initialize a conceptialization of a dog
 * @name: the given name
 * @age: in dog years
 * @owner: string name of human
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif /* dog_h */
