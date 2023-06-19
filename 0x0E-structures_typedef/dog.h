#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data tag
 *
 * Author - Dahesey
 *
 * @name: First element of structure
 *
 * @age: Second element of structure
 *
 * @owner: Third element of structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* DOG_H */
