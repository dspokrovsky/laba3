TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()


QMAKE_CXXFLAGS += -std=c++14
HEADERS += list_of_teams.hpp \
    team.hpp \
    list_of_teams_hash1.hpp \
    list_of_teams_hash2.hpp


