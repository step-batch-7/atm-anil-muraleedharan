#include <stdio.h>
#include "atm.h"

int display_notes(unsigned int);

int display_notes(unsigned int notes_count)
{
  int notes[] = {2000, 500, 100, 50, 20, 10, 5, 1};
  for (int index = 0; index < 8; index++)
  {
    int count = notes_count >> 28;
    count &&printf("%d notes of %dRs\n", count, notes[index]);
    notes_count = notes_count << 4;
  }
  return 0;
}

int main(void)
{
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999};
  for (int i = 0; i < 6; i++)
  {
    display_notes(get_money(amounts[i]));
  }

  return 0;
}
