#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Type and name of structure containing different data types
  * Author - Dahesey
  * @name: char data type
  * @age: float data type
  * @owner: char data type
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
void free_dog(dog_t *d)
#endif /* DOG_H */
