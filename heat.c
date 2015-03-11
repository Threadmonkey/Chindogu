#include <omp.h>

/*
The heat chindogu is application for your laptop to convert electric energy
into heat, which is especially usefull in the winter season during commute
in a train to warm your fingers.

Warning: This application will drain your battery.

This heat chindogu follows the ten chindogu rules

1.  A Chindogu cannot be for real use
2.  A Chindogu must exist
3.  Inherent in every Chindogu is the spirit of anarchy
4.  Chindogus are tools for everyday life
5.  Chindogu are not for sale
6.  Humour must not be the sole reason for creating a Chindogu
7.  Chindogu is not propaganda
8.  Chindogu are never taboo
9.  Chindogus cannot be patented
10. Chindogu are without prejudice


Programming information
 - OpenMP is necessary
 - The only output is heat
 - No user interaction is necessary.
 - This programm seems not to have a memory leak.
 - The functional test is not integrated on Jenkins or what so ever because you
   need a laptop and a heat sensor.
 - A feature would be to also use your GPU to produce even more heat.

*/
int main (int argc, char *argv[]) {
  int i;

  #pragma omp parallel
  {
    while (1) {
      i++;
    }
  }

  return 0;
}
