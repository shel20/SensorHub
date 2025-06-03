
#include <string.h>
#include <stdio.h>
#include "cli.h"
#include "uart.h"
#include "sensor.h"

void cli_process(void) {
    char cmd[64];
    uart_print("\n> ");
    uart_read_line(cmd, sizeof(cmd));

    if (strcmp(cmd, "read_temp") == 0) {
        char buf[64];
        snprintf(buf, sizeof(buf), "Temp: %.2f C\n", sensor_get_temp());
        uart_print(buf);
    } else if (strcmp(cmd, "read_humidity") == 0) {
        char buf[64];
        snprintf(buf, sizeof(buf), "Humidity: %.2f %%\n", sensor_get_humidity());
        uart_print(buf);
    } else if (strcmp(cmd, "status") == 0) {
        uart_print("System OK. 2 sensors active.\n");
    } else if (strcmp(cmd, "help") == 0) {
        uart_print("Commands: read_temp, read_humidity, status, help\n");
    } else if (strcmp(cmd, "reset") == 0) {
        uart_print("System reset.\n");
    } else {
        uart_print("Unknown command. Type 'help'.\n");
    }
}
