#ifndef SENSOR_TYPES_H
#define SENSOR_TYPES_H

#include <stdbool.h>

typedef enum {
  ALARM_NONE = 0,
  ALARM_LOW,
  ALARM_HIGH
} alarm_state_t;

typedef struct {
  bool connected;
  float celsius;
} sensor_sample_t;

typedef struct {
  bool ok;
  const char *error;
  float celsius;
  alarm_state_t alarm;
} sensor_result_t;

sensor_result_t fail(const char *code);

#endif
