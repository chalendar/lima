#   Copyright 2002-2013 CEA LIST
#    
#   This file is part of LIMA.
#
#   LIMA is free software: you can redistribute it and/or modify
#   it under the terms of the GNU Affero General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#
#   LIMA is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU Affero General Public License for more details.
#
#   You should have received a copy of the GNU Affero General Public License
#   along with LIMA.  If not, see <http://www.gnu.org/licenses/>
include_directories(BEFORE ${CMAKE_SOURCE_DIR}/src )

add_definitions( -DLIMA_COMMONMISC_EXPORTING )
########### next target ###############

SET(lima-common-misc_LIB_SRCS
   AbstractAccessIterators.cpp
   fsaStringsPool.cpp
   stringspool.cpp
   )

add_library(lima-common-misc SHARED ${lima-common-misc_LIB_SRCS})

target_link_libraries(lima-common-misc lima-common-data)

set_target_properties(lima-common-misc PROPERTIES VERSION ${LIMA_COMMON_LIB_VERSION} SOVERSION ${LIMA_COMMON_LIB_SOVERSION})
install(TARGETS lima-common-misc DESTINATION lib)


########### install files ###############
install(FILES
    AbstractAccessByString.h
    AbstractAccessIterators.h
    AbstractRwAccessByString.h
    fsaStringsPool.h
    stringspool.h
    Exceptions.h
    gregoriannowarn.hpp
    adjacency_listnowarn.hpp
    graphviznowarn.hpp
    posix_timenowarn.hpp
    depth_first_searchnowarn.hpp
    local_timenowarn.hpp
    XSLExceptionnowarn.hpp
    NodeRefListnowarn.hpp
    XalanOutputStreamPrintWriternowarn.hpp
  DESTINATION include/common/misc)