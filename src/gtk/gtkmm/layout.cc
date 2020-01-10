// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/layout.h>
#include <gtkmm/private/layout_p.h>


/*
 * Copyright 1998-2002 The gtkmm Development Team
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

Gtk::Layout* wrap(GtkLayout* object, bool take_copy)
{
  return dynamic_cast<Gtk::Layout *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Layout_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Layout_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_layout_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Scrollable::add_interface(get_type());

  }

  return *this;
}


void Layout_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Layout_Class::wrap_new(GObject* o)
{
  return manage(new Layout((GtkLayout*)(o)));

}


/* The implementation: */

Layout::Layout(const Glib::ConstructParams& construct_params)
:
  Gtk::Container(construct_params)
{
  }

Layout::Layout(GtkLayout* castitem)
:
  Gtk::Container((GtkContainer*)(castitem))
{
  }


Layout::Layout(Layout&& src) noexcept
: Gtk::Container(std::move(src))
  , Scrollable(std::move(src))
{}

Layout& Layout::operator=(Layout&& src) noexcept
{
  Gtk::Container::operator=(std::move(src));
  Scrollable::operator=(std::move(src));
  return *this;
}

Layout::~Layout() noexcept
{
  destroy_();
}

Layout::CppClassType Layout::layout_class_; // initialize static member

GType Layout::get_type()
{
  return layout_class_.init().get_type();
}


GType Layout::get_base_type()
{
  return gtk_layout_get_type();
}


Layout::Layout()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Container(Glib::ConstructParams(layout_class_.init()))
{
  

}

Layout::Layout(const Glib::RefPtr<Adjustment>& hadjustment, const Glib::RefPtr<Adjustment>& vadjustment)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Container(Glib::ConstructParams(layout_class_.init(), "hadjustment", Glib::unwrap(hadjustment), "vadjustment", Glib::unwrap(vadjustment), nullptr))
{
  

}

Glib::RefPtr<Gdk::Window> Layout::get_bin_window()
{
  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap(gtk_layout_get_bin_window(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Window> Layout::get_bin_window() const
{
  return const_cast<Layout*>(this)->get_bin_window();
}

void Layout::put(Widget& child_widget, int x, int y)
{
  gtk_layout_put(gobj(), (child_widget).gobj(), x, y);
}

void Layout::move(Widget& child_widget, int x, int y)
{
  gtk_layout_move(gobj(), (child_widget).gobj(), x, y);
}

void Layout::set_size(guint width, guint height)
{
  gtk_layout_set_size(gobj(), width, height);
}

void Layout::get_size(guint& width, guint& height) const
{
  gtk_layout_get_size(const_cast<GtkLayout*>(gobj()), &(width), &(height));
}


Glib::PropertyProxy< guint > Layout::property_width() 
{
  return Glib::PropertyProxy< guint >(this, "width");
}

Glib::PropertyProxy_ReadOnly< guint > Layout::property_width() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "width");
}

Glib::PropertyProxy< guint > Layout::property_height() 
{
  return Glib::PropertyProxy< guint >(this, "height");
}

Glib::PropertyProxy_ReadOnly< guint > Layout::property_height() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "height");
}

Gtk::ChildPropertyProxy< int > Layout::child_property_x(Gtk::Widget& child) 
{
  return Gtk::ChildPropertyProxy< int >(this, child, "x");
}

Gtk::ChildPropertyProxy_ReadOnly< int > Layout::child_property_x(const Gtk::Widget& child) const
{
  return Gtk::ChildPropertyProxy_ReadOnly< int >(this, child, "x");
}

Gtk::ChildPropertyProxy< int > Layout::child_property_y(Gtk::Widget& child) 
{
  return Gtk::ChildPropertyProxy< int >(this, child, "y");
}

Gtk::ChildPropertyProxy_ReadOnly< int > Layout::child_property_y(const Gtk::Widget& child) const
{
  return Gtk::ChildPropertyProxy_ReadOnly< int >(this, child, "y");
}


} // namespace Gtk


