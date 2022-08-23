#ifndef MAIN_H
#define MAIN_H
/* for open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/* for read, write, close */
#include <unistd.h>
/* for exit */
#include <stdlib.h>


ssize_t read_textfile(const char *filename, size_t letters);




#endif /* MAIN_H */
