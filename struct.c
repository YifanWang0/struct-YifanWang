#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "header.h"

struct state returnEx() {
  char list_of_state[10][200] = {"California", "Texas", "Florida", "New York", "Pennsylvania",
                                  "Illinois", "Ohio", "Georgia", "North Carolina", "Michigan"};
  int list_of_populations[10] = {39747267, 29087070, 21646155, 19491339, 12813969, 12700381,
                                      11718568, 10627767, 10497741, 10020472};

  struct state state0;

  srand( time(NULL) );
  int i = rand() % 10;
  strcpy(state0.name, list_of_state[i]);
  state0.population = list_of_populations[i];

  return state0;
}

void printer(struct state s) {
  printf("The name of the state is %s and its population is %d.\n", s.name, s.population);
}

void modifyValue(struct state *s, char newName[100], int newPopulation) {
  strcpy((*s).name, newName);
  (*s).population = newPopulation;
}
