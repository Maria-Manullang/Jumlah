#include <stdio.h>
#define N 100
int main()
{
  int array[N], banyak, i, hasil = 0;

  printf("Masukkan banyak data\n");
  scanf("%d", &banyak);

  printf("\nMasukkan %d data\n", banyak);

  for (i = 0; i < banyak; i++)
    scanf("%d", &array[i]);



  for (i = 0; i < banyak; i++)
  {
    hasil = hasil + array[i];
  }

  printf("\nJumlah dari seluruh bilangan adalah %d.\n", hasil);
    return 0;
}
