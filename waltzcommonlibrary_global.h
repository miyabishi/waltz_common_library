#ifndef WALTZCOMMONLIBRARY_GLOBAL_H
#define WALTZCOMMONLIBRARY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(WALTZCOMMONLIBRARY_LIBRARY)
#  define WALTZCOMMONLIBRARYSHARED_EXPORT Q_DECL_EXPORT
#else
#  define WALTZCOMMONLIBRARYSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // WALTZCOMMONLIBRARY_GLOBAL_H
