
int pow(int &a, int &b)
{
  while (b > 1)
  {
    if (b % 2 == 0)
    {
      a = a * a;
      b = b / 2;
    }
    else
    {
      a = a * a * a;
      b = (b - 1) / 2;
    }
  }
  return a;
}