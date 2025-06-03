
#ifndef UART_H
#define UART_H
void uart_init(void);
void uart_print(const char *msg);
void uart_read_line(char *buf, int max_len);
#endif
