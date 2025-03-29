#include "tutorial.h"

int main(int argc, char *argv[]) {
  printf("Using Cmake to link all the haeder files and make "
         "compile_commands.json file\n");
  print();
  json_create(20);
  curl_create();
  return 0;
}
