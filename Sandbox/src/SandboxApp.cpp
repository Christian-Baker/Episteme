#include "Episteme.h"

class Sandbox : public Episteme::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Episteme::Application* Episteme::CreateApplication() {
	return new Sandbox();
}