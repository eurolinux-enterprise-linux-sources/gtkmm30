// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/expander.h>
#include <gtkmm/private/expander_p.h>


/*
 * Copyright 2003 The gtkmm Development Team
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

Expander::Expander(const Glib::ustring& label, bool mnemonic)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(expander_class_.init(), "label",label.c_str(),"use_underline",gboolean(mnemonic), static_cast<char*>(0)))
{}

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Expander* wrap(GtkExpander* object, bool take_copy)
{
  return dynamic_cast<Gtk::Expander *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Expander_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Expander_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_expander_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Expander_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Expander_Class::wrap_new(GObject* o)
{
  return manage(new Expander((GtkExpander*)(o)));

}


/* The implementation: */

Expander::Expander(const Glib::ConstructParams& construct_params)
:
  Gtk::Bin(construct_params)
{
  }

Expander::Expander(GtkExpander* castitem)
:
  Gtk::Bin((GtkBin*)(castitem))
{
  }

Expander::~Expander()
{
  destroy_();
}

Expander::CppClassType Expander::expander_class_; // initialize static member

GType Expander::get_type()
{
  return expander_class_.init().get_type();
}


GType Expander::get_base_type()
{
  return gtk_expander_get_type();
}


Expander::Expander()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(expander_class_.init()))
{
  

}

void Expander::set_expanded(bool expanded)
{
  gtk_expander_set_expanded(gobj(), static_cast<int>(expanded));
}

bool Expander::get_expanded() const
{
  return gtk_expander_get_expanded(const_cast<GtkExpander*>(gobj()));
}

void Expander::set_spacing(int spacing)
{
  gtk_expander_set_spacing(gobj(), spacing);
}

int Expander::get_spacing() const
{
  return gtk_expander_get_spacing(const_cast<GtkExpander*>(gobj()));
}

void Expander::set_label(const Glib::ustring& label)
{
  gtk_expander_set_label(gobj(), label.c_str());
}

Glib::ustring Expander::get_label() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_expander_get_label(const_cast<GtkExpander*>(gobj())));
}

void Expander::set_use_underline(bool use_underline)
{
  gtk_expander_set_use_underline(gobj(), static_cast<int>(use_underline));
}

bool Expander::get_use_underline() const
{
  return gtk_expander_get_use_underline(const_cast<GtkExpander*>(gobj()));
}

void Expander::set_use_markup(bool use_markup)
{
  gtk_expander_set_use_markup(gobj(), static_cast<int>(use_markup));
}

bool Expander::get_use_markup() const
{
  return gtk_expander_get_use_markup(const_cast<GtkExpander*>(gobj()));
}

void Expander::set_label_widget(Widget& label_widget)
{
  gtk_expander_set_label_widget(gobj(), (label_widget).gobj());
}

Widget* Expander::get_label_widget()
{
  return Glib::wrap(gtk_expander_get_label_widget(gobj()));
}

const Widget* Expander::get_label_widget() const
{
  return const_cast<Expander*>(this)->get_label_widget();
}

void Expander::set_label_fill(bool label_fill)
{
  gtk_expander_set_label_fill(gobj(), static_cast<int>(label_fill));
}

bool Expander::get_label_fill() const
{
  return gtk_expander_get_label_fill(const_cast<GtkExpander*>(gobj()));
}

void Expander::set_resize_toplevel(bool resize_toplevel)
{
  gtk_expander_set_resize_toplevel(gobj(), static_cast<int>(resize_toplevel));
}

bool Expander::get_resize_toplevel() const
{
  return gtk_expander_get_resize_toplevel(const_cast<GtkExpander*>(gobj()));
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Expander::property_expanded() 
{
  return Glib::PropertyProxy< bool >(this, "expanded");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Expander::property_expanded() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "expanded");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Expander::property_label() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "label");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Expander::property_label() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "label");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Expander::property_use_underline() 
{
  return Glib::PropertyProxy< bool >(this, "use-underline");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Expander::property_use_underline() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-underline");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Expander::property_use_markup() 
{
  return Glib::PropertyProxy< bool >(this, "use-markup");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Expander::property_use_markup() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-markup");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Expander::property_spacing() 
{
  return Glib::PropertyProxy< int >(this, "spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Expander::property_spacing() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Widget* > Expander::property_label_widget() 
{
  return Glib::PropertyProxy< Widget* >(this, "label-widget");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Widget* > Expander::property_label_widget() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "label-widget");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Expander::property_label_fill() 
{
  return Glib::PropertyProxy< bool >(this, "label-fill");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Expander::property_label_fill() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "label-fill");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Expander::property_resize_toplevel() 
{
  return Glib::PropertyProxy< bool >(this, "resize-toplevel");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Expander::property_resize_toplevel() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "resize-toplevel");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gtk


