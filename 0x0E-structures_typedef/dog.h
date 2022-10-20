#ifndef DOGE_H_
#define DOGE_H_

/**
 * struct dog - basic struct of doge
 * @name: name of doge
 * @age: age of doge
 * @owner: owner of doge
 *
 * Description: doge structure consists of name, age, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog_t;

/**
 * prototype functions below
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
