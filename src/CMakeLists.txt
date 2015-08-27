cmake_minimum_required( VERSION 2.8 )

include_directories( ${prettyprint_SOURCE_DIR}/include )
add_library( prettyprint SHARED prettyprint.c )

# install the targets to specific directories
install( TARGETS prettyprint DESTINATION ${prettyprint_SOURCE_DIR}/lib )
install( FILES ${prettyprint_SOURCE_DIR}/include/prettyprint.h DESTINATION ${prettyprint_SOURCE_DIR}/inc )

#cmake_minimum_required(VERSION 2.8)
#project( prettyprint )

#message( "PROJECT_SOURCE_DIR points to " ${PROJECT_SOURCE_DIR} )
#message( "PROJECT_BINARY_DIR points to " ${PROJECT_BINARY_DIR} )

#message( "prettyprint_SOURCE_DIR points to " ${prettyprint_SOURCE_DIR} )

#FOLLOWING BUILT MAIN APP FROM prettyprint_driver.c
#include_directories("${PROJECT_SOURCE_DIR}/include")
#link_directories("${PROJECT_SOURCE_DIR}/src")

#add_executable(prettyprint prettyprint.c prettyprint_driver.c)

#install(TARGETS prettyprint DESTINATION "${PROJECT_SOURCE_DIR}/bin")

#TRYING DOING A STATIC LIBRARY OBJECT
#include_directories("${PROJECT_SOURCE_DIR}/src")

#include_directories( "${PROJECT_SOURCE_DIR}/src" )
#include_directories( "${PROJECT_SOURCE_DIR}/include" )

#add_library( prettyprint STATIC prettyprint.c )

#install( TARGETS prettyprint DESTINATION ${PROJECT_SOURCE_DIR}/lib )
#install( FILES prettyprint.h DESTINATION ${PROJECT_SOURCE_DIR}/inc )
