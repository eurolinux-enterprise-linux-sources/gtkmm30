// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/offscreenwindow.h>
#include <gtkmm/private/offscreenwindow_p.h>


/*
 * Copyright 2010 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtk/gtk.h>


namespace Gtk
{

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::OffscreenWindow* wrap(GtkOffscreenWindow* object, bool take_copy)
{
  return dynamic_cast<Gtk::OffscreenWindow *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& OffscreenWindow_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &OffscreenWindow_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_offscreen_window_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void OffscreenWindow_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* OffscreenWindow_Class::wrap_new(GObject* o)
{
  return new OffscreenWindow((GtkOffscreenWindow*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

OffscreenWindow::OffscreenWindow(const Glib::ConstructParams& construct_params)
:
  Gtk::Window(construct_params)
{
  }

OffscreenWindow::OffscreenWindow(GtkOffscreenWindow* castitem)
:
  Gtk::Window((GtkWindow*)(castitem))
{
  }


OffscreenWindow::OffscreenWindow(OffscreenWindow&& src) noexcept
: Gtk::Window(std::move(src))
{}

OffscreenWindow& OffscreenWindow::operator=(OffscreenWindow&& src) noexcept
{
  Gtk::Window::operator=(std::move(src));
  return *this;
}

OffscreenWindow::~OffscreenWindow() noexcept
{
  destroy_();
}

OffscreenWindow::CppClassType OffscreenWindow::offscreenwindow_class_; // initialize static member

GType OffscreenWindow::get_type()
{
  return offscreenwindow_class_.init().get_type();
}


GType OffscreenWindow::get_base_type()
{
  return gtk_offscreen_window_get_type();
}


OffscreenWindow::OffscreenWindow()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Window(Glib::ConstructParams(offscreenwindow_class_.init()))
{
  

}

Cairo::RefPtr<Cairo::Surface> OffscreenWindow::get_surface()
{
  return Cairo::RefPtr<Cairo::Surface>(new Cairo::Surface(gtk_offscreen_window_get_surface(gobj()), true /* take reference */));
}

Cairo::RefPtr<const Cairo::Surface> OffscreenWindow::get_surface() const
{
  return Cairo::RefPtr<Cairo::Surface>(new Cairo::Surface(gtk_offscreen_window_get_surface(const_cast<GtkOffscreenWindow*>(gobj())), true /* take reference */));
}

Glib::RefPtr<Gdk::Pixbuf> OffscreenWindow::get_pixbuf()
{
  return Glib::wrap(gtk_offscreen_window_get_pixbuf(gobj()));
}

Glib::RefPtr<const Gdk::Pixbuf> OffscreenWindow::get_pixbuf() const
{
  return Glib::wrap(gtk_offscreen_window_get_pixbuf(const_cast<GtkOffscreenWindow*>(gobj())));
}


} // namespace Gtk


