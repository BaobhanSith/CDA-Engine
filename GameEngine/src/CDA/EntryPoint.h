#pragma once
#include <stdio.h>

#ifdef CDA_PLATFORM_WINDOWS

extern CDA::Application* CDA::CreateApplication();

int main(int argc, char** argv) {
	auto app = CDA::CreateApplication();
	app->Run();
	delete app;
}

#endif