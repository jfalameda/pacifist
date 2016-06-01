#import <webkit2/webkit2.h>
#import <gtk/gtk.h>
#import "webview.h"


void WebView::show() {
}

WebView::WebView() {
	view = WEBKIT_WEB_VIEW(webkit_web_view_new());
}

GtkWidget *WebView::getWidget() {
	return GTK_WIDGET(view);
}

