# PI-Calculator
A 'C' program to calculate value of PI upto 100,000 digits and more!
  1. uses GMP to store big big big decimals.
  2. uses [Beeler et al. 1972, Item 120.](http://mathworld.wolfram.com/PiFormulas.html)  formula to calculate PI.
  3. Thanks to [Google Colab.](https://colab.research.google.com) for computing resource!

## Installation:
  1. [Here](https://linkevin.me/tutorial-installing-gmp-library-ubuntu/) is a great article  on installing gmp(linux).
  2. run `gcc Pi-Calc.c -o Pi-Calc -lgmp`
  3. run `./Pi-Calc` and Enter Desired digits of PI.
