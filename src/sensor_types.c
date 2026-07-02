#include "sensor_types.h"

sensor_result_t fail(const char *code) {
  sensor_result_t result = {.ok = false, .error = code, .celsius = 0.0f, .alarm = ALARM_NONE};
  return result;
}
