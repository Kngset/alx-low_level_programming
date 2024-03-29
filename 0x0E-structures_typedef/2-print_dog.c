#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* * @d: struct dog to print
* */
void print_dog(struct dog *d)
{
	if (d == Null)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n);
	else
		printf("Name: %\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == Null)
		printf("owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
