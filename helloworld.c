#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

// brew install ocaml, get stdio.h and cs50

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}

#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}