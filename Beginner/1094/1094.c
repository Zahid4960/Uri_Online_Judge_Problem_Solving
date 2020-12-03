#include <stdio.h>

int main()
{
  int N, i, Amount;
  char animal_type;

  int total_rabbits = 0;
  int total_rats = 0;
  int total_frogs = 0;
  int total_animals = 0;

  float percentage_of_rabbits, percentage_of_rats, percentage_of_frogs;

  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    scanf("%d %c", &Amount, &animal_type);

    switch (animal_type) {
      case 'C':
        total_rabbits += Amount;
        total_animals += Amount;
        break;

      case 'R':
        total_rats += Amount;
        total_animals += Amount;
        break;

      case 'S':
        total_frogs += Amount;
        total_animals += Amount;
        break;

      default:
        break;
    }
  }

  printf("Total: %d cobaias\n", total_animals);
  printf("Total de coelhos: %d\n", total_rabbits);
  printf("Total de ratos: %d\n", total_rats);
  printf("Total de sapos: %d\n", total_frogs);

  percentage_of_rabbits = (float)(total_rabbits * 100) / total_animals;
  percentage_of_rats = (float)(total_rats * 100) / total_animals;
  percentage_of_frogs = (float)(total_frogs * 100) / total_animals;

  printf("Percentual de coelhos: %0.2f %%\n", percentage_of_rabbits);
  printf("Percentual de ratos: %0.2f %%\n", percentage_of_rats);
  printf("Percentual de sapos: %0.2f %%\n", percentage_of_frogs);

  return 0;
}
