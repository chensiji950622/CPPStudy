cmake_minimum_required(VERSION 2.8)
project( example )
set(CMAKE_CXX_STANDARD 11)

# 统一include的路径相对于当前CMakeLists.txt所在路径
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#### 添加自定义功能, 如 日志打印函数
include(cmake-utils/utils.cmake)  # LOG(${CMAKE_CURRENT_LIST_FILE}:${CMAKE_CURRENT_LIST_LINE} )
####

LOG(${CMAKE_CURRENT_LIST_FILE}:${CMAKE_CURRENT_LIST_LINE} 
CMAKE_COMMAND
CMAKE_GENERATOR
CMAKE_CURRENT_BINARY_DIR
)

add_subdirectory(src)

#### Google单元测试
set(USE_GoogleTest TRUE)	#是否启用GoogleTest
if(USE_GoogleTest)
	set(GoogleTestFindLocalList 
		"/root/lib/googletest.git" 
		"G:/ThirdParty/googletest.git"
	)
	FindLocalPath(VAR GoogleTestDownloadUrl LIST ${GoogleTestFindLocalList} DEFAULT "https://github.com/google/googletest.git")
	add_subdirectory(cmake-utils/test)
	add_subdirectory(test)
endif(USE_GoogleTest)
####

