#include "sensor_types.h"
#include "thresholds.h"

sensor_result_t evaluate_sensor(sensor_sample_t sample) {
  if (!sample.connected) {
    return fail("SENSOR_DISCONNECTED");
  }
  if (sample.celsius < MIN_CELSIUS) {
    return (sensor_result_t){.ok = true, .error = NULL, .celsius = sample.celsius, .alarm = ALARM_LOW};
  }
  if (sample.celsius > MAX_CELSIUS) {
    return (sensor_result_t){.ok = true, .error = NULL, .celsius = sample.celsius, .alarm = ALARM_HIGH};
  }
  return (sensor_result_t){.ok = true, .error = NULL, .celsius = sample.celsius, .alarm = ALARM_NONE};
}
