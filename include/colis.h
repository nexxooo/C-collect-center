#pragma once
#include <stdlib.h>

typedef enum destination{
    A,
    B,
    C
} destination;

typedef struct colis 
{
    size_t id;
    destination dest;
    size_t poids;

}colis;

