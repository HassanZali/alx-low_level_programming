#ifndef DOG_H
#define DOG_H

/**
 *struct dog - this is a structure for dog
 *@name: character variable to store,first member
 *@age: float variable for age,second member
 *@owner: character for owner,third member
 *Description: this describe a structure of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
*dog_t - typedef for struct dog
*/

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
