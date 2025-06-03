
#include <stdio.h>
#include <string.h>
#include "uart.h"

void uart_init(void) {
    // Nothing needed for PC simulation
}

void uart_print(const char *msg) {
    printf("%s", msg);
}

void uart_read_line(char *buf, int max_len) {
    fgets(buf, max_len, stdin);
    size_t len = strlen(buf);
    if (len > 0 && buf[len - 1] == '\n') buf[len - 1] = '\0';
}
