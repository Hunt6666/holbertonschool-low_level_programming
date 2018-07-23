#include<stdlib.h>
#include<stdio.h>
#include"dog.h"


/**
 *new_dog - creates a new object of type dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner
 *Return: pointer to new dog_t
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	return (d);
}
