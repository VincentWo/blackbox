#ifndef __WHITEBOX_WRAPPER_STDIO_H
#define __WHITEBOX_WRAPPER_STDIO_H 1

#include <sys/cdefs.h>

#ifdef __cplusplus
extern "C" {
#endif
typedef struct FILE {
	int i;
}FILE;


int   printf(const char* __restrict, ...);
int   putchar(int);
int   puts(const char*);
int   fgetc(FILE*);
char* fgets(char*,int,FILE*);
int   fputc(int, FILE*);
int   fputs(const char*, FILE*);
int   getc(FILE*);
int   getchar( void );
char* gets(char*);
int   putc(int, FILE*);
int   ungetc(int, FILE*);

#define stdin  (FILE*)1
#define stdout (FILE*)2
#define stderr (FILE*)3

#ifdef __cplusplus
}
#endif

#endif /*__WHITEBOX_WRAPPER_STDIO_H*/
