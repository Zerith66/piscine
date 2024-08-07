#include "bsq.h"
#include <setjmp.h>

jmp_buf		exception_buf;
t_exception	current_exception;

void	throw_exception(int code, const char *message)
{
	current_exception.code = code;
	my_strncpy(current_exception.message, message, MAX_ERROR_LEN - 1);
	current_exception.message[MAX_ERROR_LEN - 1] = '\0';
	longjmp(exception_buf, 1);
}