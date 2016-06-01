#include "controllers/application.h"

int main(int argc, char **argv) {
	Application* app = new Application();
	app->init_app_event_loop();
	return 0;
}
