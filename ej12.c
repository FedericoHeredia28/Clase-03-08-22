// Ejercicio 12
// parsear el codigo de estado y mensaje de una respuesta
// HTTP obtenida con el curl.
#include <stdio.h>
#define MAXLINE 100

int main(void) {
  char buffer[MAXLINE];

  int http_codes[] = {200, 201, 307, 404, 500};
  char *http_messages[] = {
    "OK",
    "Created",
    "Temporary Redirect",
    "Not Found",
    "Internal Server Error"
  };

  while(fgets(buffer, MAXLINE, stdin) != NULL) {
  if (buffer[0] == '<') {
    char c;
    char protocol[10];
    int code;
    char message[50];
    sscanf(buffer, "%c %s %d %s", &c, protocol, &code, message);
    int i = 0;
    while (i < 5) {
      if(code == http_codes[i]) break;
      i++;
    }
    printf("%d %s\n",code, http_messages[i]);
    return 0;
  }
}

return 0;
}
