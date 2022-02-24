#include<stdio.h>
int input_number()
{
  int x;
  printf("Enter any number:\n");
  scanf("%d",&x );
  return x;
}
int is_prime(int n)
{
  int i,c=0;
  for(int i=1; i<=n ; i++)
  {
    if (n%i==0)
    {
      c=c+1;
    }
  }   
  return 0;
}
void output(int n, int is_prime)
{
  int c;
  if (c==2)
  printf("%d number is not PRIME\n",n);
  else 
  printf("%d number is  prime\n",n);
}
int main()
{
  int n,c;
  n=input_number();
  c=is_prime(n);
  output(n,c);
  return 0;
}