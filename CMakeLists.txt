cmake_minimum_required (VERSION 3.1)
project (complexitymetrics)

# Project Includes
include_directories ("${PROJECT_SOURCE_DIR}/source")
include_directories ("${PROJECT_SOURCE_DIR}/include")
SET (EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")

set (CMAKE_CXX_STANDARD 11)

# Add include path for ply file read/write (tinyply)
SET (TINYPLYPATH "${PROJECT_SOURCE_DIR}/source/tinyply/")
include_directories (${TINYPLYPATH})

# Add GSL
INCLUDE(FindGSL.cmake)
include_directories (${GSL_INCLUDE_DIRS})
LINK_DIRECTORIES(${GSL_LIBRARY_DIRS})
#MESSAGE(${GSL_LIBRARIES})

# complexitymetrics - Compute different terrain complexity metrics
add_executable(complexitymetrics source/complexitymetrics.cpp source/simplematrix.cpp source/coordtransforms.cpp source/tinyply/tinyply.cpp)
target_link_libraries (complexitymetrics ${GSL_LIBRARIES})

# resamplemesh - Regularly resample mesh to 2.5D
add_executable(resamplemesh source/resamplemesh.cpp source/simplematrix.cpp source/coordtransforms.cpp source/tinyply/tinyply.cpp)
target_link_libraries (resamplemesh ${GSL_LIBRARIES})




