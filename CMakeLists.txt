cmake_minimum_required(VERSION 2.8.12.2)
#
ADD_DEFINITIONS(-DLINUX)
#
INCLUDE_DIRECTORIES($ENV{PROTOBUF}/include)
#
ADD_COMPILE_OPTIONS(-std=c++17 -fPIC -Wall)
ADD_DEFINITIONS(-Wno-builtin-macro-redefined)
SET(CMAKE_CXX_FLAGS $ENV{CXX_FLAGS})
#
FILE(GLOB SRC "./*/*.cc")
#
PROJECT(x-msg-im-hlr-pb)
#
ADD_LIBRARY(x-msg-im-hlr-pb STATIC ${SRC})
INCLUDE(./__file__.cmake)
REDEFINE_FILE_MACRO(x-msg-im-hlr-pb)

