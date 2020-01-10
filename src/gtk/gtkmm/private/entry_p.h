// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_ENTRY_P_H
#define _GTKMM_ENTRY_P_H


#include <gtkmm/private/widget_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class Entry_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Entry CppObjectType;
  typedef GtkEntry BaseObjectType;
  typedef GtkEntryClass BaseClassType;
  typedef Gtk::Widget_Class CppClassParent;
  typedef GtkWidgetClass BaseClassParent;

  friend class Entry;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void populate_popup_callback(GtkEntry* self, GtkWidget* p0);
  static void insert_at_cursor_callback(GtkEntry* self, const gchar* p0);
  static void activate_callback(GtkEntry* self);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_ENTRY_P_H */

