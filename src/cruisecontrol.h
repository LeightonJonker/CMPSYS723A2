#include <stdbool.h>
#define boolean bool

float saturateThrottle(float throttleIn, bool* saturate);
float regulateThrottle(bool isGoingOn, float cruiseSpeed, float vehicleSpeed);
