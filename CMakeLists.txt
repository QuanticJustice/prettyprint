cmake_minimum_required(VERSION 2.8)
project( prettyprint )

message( "PROJECT_SOURCE_DIR points to " ${PROJECT_SOURCE_DIR} )
message( "PROJECT_BINARY_DIR points to " ${PROJECT_BINARY_DIR} )

message( "prettyprint_SOURCE_DIR points to " ${prettyprint_SOURCE_DIR} )

subdirs( src )
