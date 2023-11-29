#include <stdio.h>
#include "dog.h"

/**
 *  * print_dog - prints character name
 *   * @d: Pointer to be printer
 *    *
 */
void print_dog(struct dog *d)
{
	if (!d->name)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: (nil)\n");
	}
	printf("Age: %f\n", d->age);
			if (!d->owner)
						{
printf("owner: (nil)\n");
												}
else
								{
printf("owner: %s\n", d->owner);
		}
}
