#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "header.h"

int main() {
  printf("State: Name, Population\n\n");

  struct state NewYork;
  strcpy(NewYork.name, "New York");
  NewYork.population = 19491339;

  printf("Testing printer function: \n");
  printf("[Should be]: The name of the state is New York and its population is 19491339.\n");
  printf("[printer]: ");
  printer(NewYork);
  printf("\n");

  printf("Testing returnEx function: \n");
  printf("[returnEx]: ");
  printer(returnEx());
  printf("\n");

  struct state *p = &NewYork;
  printf("Testing modifyType function: \n");
  printf("[Original]: ");
  printer(NewYork);
  modifyValue(p, "California", 39747267);
  printf("[Modified]: ");
  printer(NewYork);

}
