#ifndef DOG
#define DOG
/**
 * struct dog - new type
 * @name: name
 * @age: age
 * @owner: Owner
 *
 * Description: Create a new dog
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
