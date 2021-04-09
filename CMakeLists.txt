#--------------------------------------------------------------#
# Norsk Datateknikk AS 2021                                    #
#--------------------------------------------------------------#
# This file is subject to the terms and conditions defined in  #
# file 'LICENSE', which is part of this source code package.   #
#--------------------------------------------------------------#

# This file is used to generate Makefiles

cmake_minimum_required(VERSION 3.0)
project (house)

# Add all cpp and hpp in source folder
file(GLOB SOURCES "source/*.cpp" "source/*.hpp")

add_executable(house ${SOURCES})