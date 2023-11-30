#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Task 3 Copy Function */
void copy(int fd_src, int fd_des, char *buff, char *src_file, char *dest_file);
int main(int argc, char **argv);
void close_fd(int *fds, int num_fds);

#endif
