#include "greeter.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  const char *user = getenv("USER");
  if (user == NULL)
    user = "stranger";

  greeter_great(user);

  return EXIT_SUCCESS;
}
