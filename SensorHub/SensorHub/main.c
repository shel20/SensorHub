
#include <stdio.h>
#include "uart.h"
#include "i2c_mock.h"
#include "sensor.h"
#include "cli.h"

int main(void) {
    uart_init();
    i2c_mock_init();
    sensor_init();

    uart_print("Sensor Hub Started. Type 'help' for commands.\n");

    while (1) {
        cli_process();
    }
    return 0;
}
