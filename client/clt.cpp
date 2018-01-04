#include "../client.h"
#include "../socketwrappers.h"

int main(int argc, char *argv[]){
  Client *client = new Client("127.0.0.1",7005);

  SetNonBlocking(client->GetSocket());
}
