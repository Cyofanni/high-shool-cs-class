#include <stdio.h>
int
main ()
{
  int data[30000] = { 0 };
  int data_pointer = 0;
  data[data_pointer]++;
  while (data[data_pointer])
    {
      printf ("%d", (data[data_pointer]));
      data[data_pointer]++;
    }
  return 0;
}
