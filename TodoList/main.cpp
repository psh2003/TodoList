// Include application manager 
#include "Platform/Core/Application.h"

// Include form. 
#include "FormTasks.h"

// Include additional files 
#include <Windows.h>

// Tell linker which libraries/packages we are using in the application 
// Nitisa core. Mandatory 
#pragma comment(lib, "Nitisa.lib")
// Package with standard widgets 
// Required for Platform package 
#pragma comment(lib, "Standard.lib")
// Package with platform-dependent classes(for Application, Window, Renderer, and others) 
#pragma comment(lib, "Platform.lib")
// Package with extended set of widgets. Remove if the application does not use anything from it 
#pragma comment(lib, "Extended.lib")
// Package with OpenGL widgets. Remove if the application does not use anything from it 
#pragma comment(lib, "OpenGL.lib")
// Package with chart widgets. Remove if the application does not use anything from it 
#pragma comment(lib, "Charts.lib")
// Package with widgets designed to be used in IDE applications. Remove if the application does not use anything from it 
#pragma comment(lib, "Ide.lib")

// Link with OpenGL. Required for OpenGL renderers from Platform package. 
#pragma comment(lib, "opengl32.lib")

int WINAPI WinMain(HINSTANCE, HINSTANCE, PSTR, INT)
{
    // Create application. 
    nitisa::CApplication app;
    // Create form. 
    app.CreateForm(&nitisa::app::FormTasks);
    // Tell application manager which form is the main one. 
    app.setMainForm(nitisa::app::FormTasks);
    // Run application. 
    app.Run();
    return 0;
}