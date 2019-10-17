struct state {
  char name[100];
  int population;
};

struct state returnEx();
void printer(struct state s);
void modifyValue(struct state *s, char newName[100], int newPopulation);
