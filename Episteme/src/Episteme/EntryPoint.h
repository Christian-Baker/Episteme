#pragma once


extern Episteme::Application* Episteme::CreateApplication();

int main(int arc, char** argv)
{
	Episteme::Application* app = Episteme::CreateApplication();
	app->Run();
	delete app;
}