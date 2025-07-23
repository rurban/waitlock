#ifndef DEBUG_UTILS_H
#define DEBUG_UTILS_H

#include <stdarg.h>
#include <stdio.h>

// Forward declaration of global_state to access verbose flag
struct global_state;
extern struct global_state g_state;

void debug(const char *format, ...);

#endif // DEBUG_UTILS_H
