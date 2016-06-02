#include <gtk/gtk.h>

struct _WindowUI {
	GtkApplication parent;
}

struct _WindowUIClass {
	GtkApplicationClass parent_class;
}

G_DEFINE_TYPE(WindowUI, window_ui, GTK_TYPE_APPLICATION_WINDOW);

static void  window_ui_init(WindowUI *windowUI) {

}

static void window_ui_class_init(WindowUIClass *windowUIclass) {

}

WindowUI *window_ui_new(ApplicationView *applicationView) {
	return g_object_new(APPLICATION_VIEW_TYPE, "application", applicationView, NULL);
}

static void window_ui_open
