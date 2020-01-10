// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GTKMM_UIMANAGER_P_H
#define _GTKMM_UIMANAGER_P_H
#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class UIManager_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = UIManager;
  using BaseObjectType = GtkUIManager;
  using BaseClassType = GtkUIManagerClass;
  using CppClassParent = Glib::Object_Class;
  using BaseClassParent = GObjectClass;

  friend class UIManager;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
#ifndef GTKMM_DISABLE_DEPRECATED

  static void add_widget_callback(GtkUIManager* self, GtkWidget* p0);
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED

  static void actions_changed_callback(GtkUIManager* self);
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED

  static void connect_proxy_callback(GtkUIManager* self, GtkAction* p0, GtkWidget* p1);
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED

  static void disconnect_proxy_callback(GtkUIManager* self, GtkAction* p0, GtkWidget* p1);
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED

  static void pre_activate_callback(GtkUIManager* self, GtkAction* p0);
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED

  static void post_activate_callback(GtkUIManager* self, GtkAction* p0);
#endif // GTKMM_DISABLE_DEPRECATED


  //Callbacks (virtual functions):
};


} // namespace Gtk

#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_UIMANAGER_P_H */

