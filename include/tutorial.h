#include <cjson/cJSON.h>
#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>

struct MemoryStruct {
  char *memory;
  size_t size;
};

void print(void);
void json_create(int);
void curl_create(void);
