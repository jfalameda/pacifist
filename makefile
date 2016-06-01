default:
	gcc -lstdc++ -L/usr/local/opt/icu4c/lib src/main.cc src/controllers/application.cc src/ui/webview.cc src/ui/window.cc -o outputbinary `pkg-config --cflags --libs gtk+-3.0 webkit2gtk-4.0 `
