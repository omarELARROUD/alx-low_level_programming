#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

void check_elf(unsigned char *e_ident);
void pmagic(unsigned char *e_ident);
void pclass(unsigned char *e_ident);
void pdata(unsigned char *e_ident);
void pversion(unsigned char *e_ident);
void pabi(unsigned char *e_ident);
void posabi(unsigned char *e_ident);
void ptype(unsigned int e_type, unsigned char *e_ident);
void pentry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
