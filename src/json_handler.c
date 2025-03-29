#include "tutorial.h"

void print(void) { printf("Print Function\n"); }
void json_create(int num) {
  // create a cJSON object
  cJSON *json = cJSON_CreateObject();
  cJSON_AddStringToObject(json, "name", "John Doe");
  cJSON_AddNumberToObject(json, "age", num);
  cJSON_AddStringToObject(json, "email", "john.doe@example.com");

  // convert the cJSON object to a JSON string
  char *json_str = cJSON_Print(json);

  // write the JSON string to a file
  FILE *fp = fopen("data.json", "w");
  if (fp == NULL) {
    printf("Error: Unable to open the file.\n");
  }
  printf("%s\n", json_str);
  fputs(json_str, fp);
  fclose(fp);
  // free the JSON string and cJSON object
  cJSON_free(json_str);
  cJSON_Delete(json);
  printf("Json created!\n");
}
void curl_create(void) {
  CURL *curl = curl_easy_init();
  if (curl) {
    CURLcode res;
    curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
  }
  printf("Curl created!\n");
}
