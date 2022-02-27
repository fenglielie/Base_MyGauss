#---------------------------------------------#
# head part for project, change by yourself:
# MY_PROJECT: the project now
set(MY_PROJECT MyGauss)
# MY_VERSION: the project version now
set(MY_VERSION 2.0)
# MY_EXTRA_ROOT: the dir to find extra libs
set(MY_EXTRA_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../Base)
# the default subdir is source, you should add subdir at the end!
#---------------------------------------------#








#---------------------------------------------#
# the CMakeLists.txt module for project begin:
# hash=aqwfdzgvfdsbgfds 2022-02-09
#---------------------------------------------#

# cmake version required
cmake_minimum_required(VERSION 3.15)
# set project with version
project(${MY_PROJECT} VERSION ${MY_VERSION})

# my dir for config
set(MY_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(MY_LIB ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(MY_BIN ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# cmake dir for build
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# cmake dir for install
set(CMAKE_INSTALL_PREFIX ${MY_EXTRA_ROOT})

# cmake dir for find_package
set(CMAKE_PREFIX_PATH ${MY_EXTRA_ROOT}/lib/cmake/)

# all head files -> COMMON_HEAD
file(GLOB COMMON_HEAD ${MY_INCLUDE}/*.h)

#---------------------------------------------#
# the CMakeLists.txt module for project end.
# hash=aqwfdzgvfdsbgfds 2022-02-09
#---------------------------------------------#







#---------------------------------------------#
# end part for project, change by yourself:
# always addend current dir to MY_INCLUDE before add_subdir
list(APPEND MY_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR})
# add local subdir
add_subdirectory(source)
#---------------------------------------------#