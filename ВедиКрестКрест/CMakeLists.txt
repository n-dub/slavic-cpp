set(SRC
    Языкъ.h
	Потокъ.h
	Строка.h
)

add_library(SlavicCpp INTERFACE ${SRC})
target_include_directories(SlavicCpp INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
