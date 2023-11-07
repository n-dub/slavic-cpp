set(SRC
    Языкъ.hpp
	Потокъ.hpp
	Строка.hpp
)

add_library(SlavicCpp INTERFACE ${SRC})
target_include_directories(SlavicCpp INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
