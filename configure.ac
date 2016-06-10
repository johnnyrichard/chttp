AC_PREREQ([2.69])
AC_INIT([cserver], [0.0.1], [https://github.com/johnnyrichard/chttp/issues/new])

AM_INIT_AUTOMAKE

AC_CONFIG_SRCDIR([server.c])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([netdb.h stdlib.h string.h sys/socket.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CHECK_FUNCS([bzero socket])

AC_CONFIG_FILES(Makefile)

AC_OUTPUT
