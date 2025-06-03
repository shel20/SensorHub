
#include <stdlib.h>
#include <time.h>
#include "i2c_mock.h"

void i2c_mock_init(void) {
    srand(time(NULL));
}

float i2c_mock_read_temp(void) {
    return 20.0f + (rand() % 1000) / 100.0f; // 20.0 - 30.0
}

float i2c_mock_read_humidity(void) {
    return 30.0f + (rand() % 500) / 10.0f; // 30 - 80
}
