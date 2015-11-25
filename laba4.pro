TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    list_of_teams.cpp

include(deployment.pri)
qtcAddDeployment()



HEADERS += \
    list_of_teams.hpp \
    team.hpp

