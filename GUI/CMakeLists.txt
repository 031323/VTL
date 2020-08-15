file(GLOB VTL_GUI_SRC
	"*.cpp"
)
add_executable(vtleditor ${VTL_GUI_SRC})
find_package(wxWidgets 3.1.3 REQUIRED gl core base)
cmake_policy(SET CMP0072 NEW)
find_package(OpenGL)
set(WXWINDOWS_USE_GL 1)
include(${wxWidgets_USE_FILE})
target_link_libraries(vtleditor vtl ${wxWidgets_LIBRARIES} OpenGL::GL OpenGL::GLU)
