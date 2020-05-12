#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::createApplication();

int main(int argc, char** argv)
{
	Hazel::Log::init();
	HZ_CORE_WARN("Log for engine");
	int a = 10;
	HZ_INFO("Log for app. Var={0}", a);
	auto app = Hazel::createApplication();
	app->Run();
	delete app;
}

#endif