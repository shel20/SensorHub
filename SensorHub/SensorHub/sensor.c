
#include "sensor.h"
#include "i2c_mock.h"

void sensor_init(void) {
    // Any startup logic if needed
}

float sensor_get_temp(void) {
    return i2c_mock_read_temp();
}

float sensor_get_humidity(void) {
    return i2c_mock_read_humidity();
}
