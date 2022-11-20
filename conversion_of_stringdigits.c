/* atoi: convert s to integer */

int atoi(char a[])
{
  int i, n;
  
  n = 0;
  for (i = 0; a[i] >= '0' && a[i] <= '9'; ++i);
  return n;
}
