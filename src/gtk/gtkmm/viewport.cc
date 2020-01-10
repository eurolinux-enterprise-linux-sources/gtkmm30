// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/viewport.h>
#include <gtkmm/private/viewport_p.h>


/*
 * Copyright 2002 The gtkmm Development Team
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

#include <gtkmm/viewport.h>
#include <gtkmm/adjustment.h>
#include <gtk/gtk.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Viewport* wrap(GtkViewport* object, bool take_copy)
{
  return dynamic_cast<Gtk::Viewport *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Viewport_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Viewport_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_viewport_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Scrollable::add_interface(get_type());

  }

  return *this;
}


void Viewport_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Viewport_Class::wrap_new(GObject* o)
{
  return manage(new Viewport((GtkViewport*)(o)));

}


/* The implementation: */

Viewport::Viewport(const Glib::ConstructParams& construct_params)
:
  Gtk::Bin(construct_params)
{
  }

Viewport::Viewport(GtkViewport* castitem)
:
  Gtk::Bin((GtkBin*)(castitem))
{
  }

Viewport::~Viewport()
{
  destroy_();
}

Viewport::CppClassType Viewport::viewport_class_; // initialize static member

GType Viewport::get_type()
{
  return viewport_class_.init().get_type();
}


GType Viewport::get_base_type()
{
  return gtk_viewport_get_type();
}


Viewport::Viewport(const Glib::RefPtr<Adjustment>& hadjustment, const Glib::RefPtr<Adjustment>& vadjustment)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(viewport_class_.init(), "hadjustment", Glib::unwrap(hadjustment), "vadjustment", Glib::unwrap(vadjustment), static_cast<char*>(0)))
{
  

}

void Viewport::set_shadow_type(ShadowType type)
{
  gtk_viewport_set_shadow_type(gobj(), ((GtkShadowType)(type)));
}

ShadowType Viewport::get_shadow_type() const
{
  return ((ShadowType)(gtk_viewport_get_shadow_type(const_cast<GtkViewport*>(gobj()))));
}

Glib::RefPtr<Gdk::Window> Viewport::get_bin_window()
{
  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap(gtk_viewport_get_bin_window(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Window> Viewport::get_bin_window() const
{
  return const_cast<Viewport*>(this)->get_bin_window();
}

Glib::RefPtr<Gdk::Window> Viewport::get_view_window()
{
  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap(gtk_viewport_get_view_window(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Window> Viewport::get_view_window() const
{
  return const_cast<Viewport*>(this)->get_view_window();
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< ShadowType > Viewport::property_shadow_type() 
{
  return Glib::PropertyProxy< ShadowType >(this, "shadow-type");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< ShadowType > Viewport::property_shadow_type() const
{
  return Glib::PropertyProxy_ReadOnly< ShadowType >(this, "shadow-type");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gtk


