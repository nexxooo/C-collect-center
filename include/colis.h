#pragma once
#include <stdlib.h>

typedef enum destination { A, B, C } destination;

typedef struct colis {
  size_t id;
  destination dest;
  float poids;

} colis;

typedef struct commande {
  char dest;
  float poids;
} commande;

typedef struct statzone {
  size_t nb_colis;
  float poids;
} statzone;
