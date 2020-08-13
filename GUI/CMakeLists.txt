file(GLOB VTL_GUI_SRC
	"*.cpp"
)
add_executable(vtleditor ${VTL_GUI_SRC})

set(WXWINDOWS_USE_GL 1)
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -I/home/a/Downloads/wx/lib/wx/include/gtk3-unicode-3.1 -I/home/a/Downloads/wxWidgets-3.1.4/include -DWXUSINGDLL -D__WXGTK3__ -D__WXGTK__ -pthread")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -L/home/a/Downloads/wx/lib -pthread -Wl,-rpath,/home/a/Downloads/wx/lib -lwx_gtk3u_xrc-3.1 -lwx_gtk3u_html-3.1 -lwx_gtk3u_qa-3.1 -lwx_gtk3u_core-3.1 -lwx_baseu_xml-3.1 -lwx_baseu_net-3.1 -lwx_baseu-3.1 -lwx_gtk3u_gl-3.1 -lOpenGL -lGLU")
target_link_libraries(vtleditor vtl)
