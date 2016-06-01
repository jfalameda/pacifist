#import <webkit2/webkit2.h>
#import <gtk/gtk.h>
#import "uicomponent.h"

class WebView : public UIComponent {
	public:
		void show();
		GtkWidget *getWidget();
		VebView();
	private:
		WebkitWebView *view;
}
