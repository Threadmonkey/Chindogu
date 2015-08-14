#include <omp.h>
/*
The MIT License (MIT)

Copyright (c) 2015 Alexander Vondrous

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

# The Heat Chindogu

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

#include <omp.h>

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
