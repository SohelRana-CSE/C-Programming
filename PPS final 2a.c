
#include <stdio.h>

int main()
{
  int n, arrival, start = 0, waiting = 0, tolltime = 0, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arrival);
    waiting = tolltime - arrival;
    if (waiting < 0)
    {
      waiting = 0;
    }
    start = arrival + waiting;
    tolltime = start + 10;
    printf("%d, %d, %d", waiting, start, tolltime);
  }
  return 0;
}
