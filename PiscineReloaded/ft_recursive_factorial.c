int ft_recursive_factorial(int nb)
{
  int f;

  if (nb < 0)
    return (0);
  if (nb == 0)
    return (1);
  else
  {
    f = ft_recursive_factorial(nb - 1);
    return (nb * f);
  }
}
