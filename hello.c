#include <stdio.h>
#include <CS50.h>

int main(void)
{
  string answer = get_string("what's your name? ");
  printf("hello, %s\n", answer)
}