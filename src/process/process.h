#ifndef WAITLOCK_PROCESS_H
#define WAITLOCK_PROCESS_H

#include "../waitlock.h"

/* Process management functions */
bool process_exists(pid_t pid);
char *get_process_cmdline(pid_t pid);
int exec_with_lock(const char *descriptor, char *argv[]);

#endif /* WAITLOCK_PROCESS_H */
