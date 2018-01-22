#-------------------------------------------------
#
# Project created by QtCreator 2017-07-09T18:17:10
#
#-------------------------------------------------

QT       -= gui

TARGET = WaltzCommonLibrary
TEMPLATE = lib

DEFINES += WALTZCOMMONLIBRARY_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/Domain/Commands/command.cpp \
    src/Domain/Commands/commandid.cpp \
    src/Domain/Commands/parameter.cpp \
    src/Domain/Commands/parameters.cpp \
    src/Domain/Communicator/message.cpp \
    src/Domain/Commands/parameterslist.cpp

HEADERS +=\
        waltzcommonlibrary_global.h \
    src/Domain/Commands/command.h \
    src/Domain/Commands/commandid.h \
    src/Domain/Commands/parameter.h \
    src/Domain/Commands/parameters.h \
    src/Domain/Communicator/message.h \
    include/commandid.h \
    include/waltz_common/command.h \
    include/waltz_common/commandid.h \
    include/waltz_common/message.h \
    include/waltz_common/parameter.h \
    include/waltz_common/parameters.h \
    src/Domain/Commands/parameterslist.h \
    include/waltz_common/parameterslist.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
