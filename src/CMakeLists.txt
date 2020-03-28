
#### 编译参数
# list(APPEND TEMP_CXX_FLAGS
# -std=c++11
# -pthread
# )
# string(REPLACE ";" " " CMAKE_CXX_FLAGS "${TEMP_CXX_FLAGS}")
####

#### 依赖库
# find_package( OpenCV REQUIRED )
# include_directories( ${OpenCV_INCLUDE_DIRS} )
# list(APPEND ${PROJ_LIBS} ${OpenCV_LIBS})
####

#### 收集源文件
# file(GLOB_RECURSE PROJ_SOURCES_COLLECTED RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS *)
# set(PROJ_SOURCES ${PROJ_SOURCES_COLLECTED})
# LOG(${CMAKE_CURRENT_LIST_FILE}:${CMAKE_CURRENT_LIST_LINE} PROJ_SOURCES)
set(PROJ_SOURCES
	main.cpp
	ex4.hpp
)
####

add_executable(${PROJECT_NAME} ${PROJ_SOURCES})
target_link_libraries( ${PROJECT_NAME} ${PROJ_LIBS} )



