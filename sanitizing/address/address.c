#include <stdlib.h>

int main(void)
{
   int* test = malloc(3 * sizeof(int));
   test[42] = 42;

   free(test);

   return 0;
}
