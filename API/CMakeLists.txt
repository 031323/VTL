add_compile_definitions(HAVE_OPENAL)
file(GLOB VTL_SRC
	"*.cpp"
)

add_library(vtl_obj OBJECT ${VTL_SRC})

set_property(TARGET vtl_obj PROPERTY POSITION_INDEPENDENT_CODE 1)

add_library(vtl_static STATIC $<TARGET_OBJECTS:vtl_obj>)
add_library(vtl SHARED $<TARGET_OBJECTS:vtl_obj>)
