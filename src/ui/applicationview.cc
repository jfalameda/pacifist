#import <gtk/gtk.h>

struct _ApplicationView {
	GtkApplication parent;
}

struct _ApplicationViewClass {
	GtkApplicationClass parent_class;
}

G_DEFINE_TYPE(ApplicationView, application_view, GTK_TYPE_APPLICATION);

static void application_view_init(GtkApplication* app) {

}

static void application_view_class_init(ApplicationViewClass * appClass) {

}

ApplicationViewClass *application_view_new() {

}
