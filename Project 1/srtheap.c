/*
*
*  sortheap.c file
*
*/

#include <stdlib.h>
#include <string.h>
#include "srt.h"

void sift(void * base, size_t size, int root, int bottom, int(*compar)(const void *, const void *)) {
	int maxC;
	void *temp;
	temp = malloc(size);
	maxC = root + root + 1;
	if (maxC < bottom) {
		int otherC = maxC + 1;
		maxC = compar(((char*)base) + otherC*size, ((char*)base) + maxC*size) > 0 ? otherC : maxC;
	}
	else if (maxC > bottom) return;
	if (compar(((char*)base) + root*size, ((char*)base) + maxC*size) >= 0) return;
	memcpy(temp, ((char*)base) + root*size, size);
	memcpy(((char*)base) + root*size, ((char*)base) + maxC*size, size);
	memcpy(((char*)base) + maxC*size, temp, size);
	sift(base, size, maxC, bottom, compar);
	free(temp);
	return;
}
void srtheap(void * base, size_t nelem, size_t size, int(*compar)(const void *, const void *)) {
	int i;
	void *temp;
	temp = malloc(size);
	for (i = nelem / 2; i >= 0; --i)
		sift(base, size, i, nelem - 1, compar);
	for (i = nelem - 1; i >= 1; --i) {
		memcpy(temp, base, size);
		memcpy(base, ((char*)base) + i*size, size);
		memcpy(((char*)base) + i*size, temp, size);
		sift(base, size, 0, i - 1, compar);
	}
	free(temp);
	return;
}