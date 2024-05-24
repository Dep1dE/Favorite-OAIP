#ifndef MYSTRING_GLOBAL_H
#define MYSTRING_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MYSTRING_LIBRARY)
#  define MYSTRING_EXPORT Q_DECL_EXPORT
#else
#  define MYSTRING_EXPORT Q_DECL_IMPORT
#endif

#endif // MYSTRING_GLOBAL_H
