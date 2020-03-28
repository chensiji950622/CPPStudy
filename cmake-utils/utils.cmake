
function(LOG description)
	message(STATUS "+----------------------------- ${description} ")
	foreach(arg IN LISTS ARGN)
		message(STATUS "|    ${arg} : ${${arg}}")
	endforeach()
	message(STATUS "+--------------------------------------------------------------------------------\n")
endfunction(LOG)
# LOG(${CMAKE_CURRENT_LIST_FILE}:${CMAKE_CURRENT_LIST_LINE} )

include(CMakeParseArguments)
function(FindLocalPath)
	CMAKE_PARSE_ARGUMENTS(
		FindLocalPath
		""
		"VAR;DEFAULT"
		"LIST"
		${ARGN}
	)
	SET(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS ON)
	set(${FindLocalPath_VAR} ${FindLocalPath_DEFAULT} PARENT_SCOPE)
	foreach(itPath ${FindLocalPath_LIST})
		if(EXISTS ${itPath})
			set(${FindLocalPath_VAR} "file://${itPath}" PARENT_SCOPE)
			break()
		endif()
	endforeach()
endfunction(FindLocalPath)
