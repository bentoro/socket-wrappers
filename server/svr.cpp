#include "../server.h"
#include "../socketwrappers.h"
#include "../client.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  Server *server = new Server(7005);

  return 0;
}
