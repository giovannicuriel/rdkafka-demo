#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([rdkafka-demo], [0.1.0], [giovannicuriel@gmail.com])
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([subdir-objects])

# Checks for programs.
AC_PROG_CC
AC_PROG_CXX

AC_ARG_WITH([rdkafka],
    [AS_HELP_STRING([--with-rdkafka], [Header files for rdkafka])],
    [AC_SUBST(CPPFLAGS, "$CPPFLAGS -I$with_rdkafka")],
    []
    )


# Checks for libraries.
AC_CHECK_LIB([rdkafka], [rd_kafka_new], [], [AC_MSG_ERROR([rdkafka was not found])])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
