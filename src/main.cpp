
#include <gtk/gtk.h>

static void on_activate(GtkApplication* app)
{
    auto* window = gtk_window_new();
    gtk_window_set_application(GTK_WINDOW(window), GTK_APPLICATION(app));
    gtk_window_present(GTK_WINDOW(window));
}

int main() {

	auto* app = gtk_application_new("test.app", (GApplicationFlags) G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(on_activate), nullptr);
    return g_application_run(G_APPLICATION(app), 0, nullptr);
}
