QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        california.cpp \
        colorado.cpp \
        equipment.cpp \
        event.cpp \
        gamelogic.cpp \
        gamestory.cpp \
        inventory.cpp \
        iowa.cpp \
        main.cpp \
        nebraska.cpp \
        nevada.cpp \
        person.cpp \
        utah.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    california.h \
    colorado.h \
    equipment.h \
    event.h \
    gamelogic.h \
    gamestory.h \
    inventory.h \
    iowa.h \
    nebraska.h \
    nevada.h \
    person.h \
    utah.h
