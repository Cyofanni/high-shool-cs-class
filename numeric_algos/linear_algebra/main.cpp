#include <iostream>
#include "matrices.h"
using namespace std;

int main() {
  double m1[4][6] = {{4.5, 3.2, 7, 9, 1, 2.2},
		     {4.8, 3.2, 7, 61, 6, 2.2},
		     {4.5, 3.2, 9, 16, 3, 2.1},
		     {3.5, 3.2, 0.2, 61, 3, 2.0}
                    };

  double m2[6][5] = {{4.5, 6.2, 7, 9, 1},
		     {0.8, 2.2, 7, 61, 6},
		     {1.5, 3.2, 9, 16, 3},
		     {1.5, 4.2, 0.2, 6, 6},
		     {3.5, 13.2, 0.2, 51, 3},
		     {3.3, 3.2, 0.2, 2.1, 2}
                    };

  double m3[4][5];

  matrix_mult(m1, m2, m3);
  print_matrix_nrows_5(m3, 4);
}
