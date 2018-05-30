#include <stdbool.h>
float saturateThrottle(float throttleIn, int* saturate);
float regulateThrottle(int isGoingOn, float cruiseSpeed, float vehicleSpeed);