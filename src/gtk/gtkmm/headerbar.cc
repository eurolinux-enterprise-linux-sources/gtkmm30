// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/headerbar.h>
#include <gtkmm/private/headerbar_p.h>


/*
 * Copyright 2013 The gtkmm Development Team
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

void HeaderBar::unset_decoration_layout()
{
  gtk_header_bar_set_decoration_layout(gobj(), nullptr);
}

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::HeaderBar* wrap(GtkHeaderBar* object, bool take_copy)
{
  return dynamic_cast<Gtk::HeaderBar *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& HeaderBar_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &HeaderBar_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_header_bar_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void HeaderBar_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* HeaderBar_Class::wrap_new(GObject* o)
{
  return manage(new HeaderBar((GtkHeaderBar*)(o)));

}


/* The implementation: */

HeaderBar::HeaderBar(const Glib::ConstructParams& construct_params)
:
  Gtk::Container(construct_params)
{
  }

HeaderBar::HeaderBar(GtkHeaderBar* castitem)
:
  Gtk::Container((GtkContainer*)(castitem))
{
  }


HeaderBar::HeaderBar(HeaderBar&& src) noexcept
: Gtk::Container(std::move(src))
{}

HeaderBar& HeaderBar::operator=(HeaderBar&& src) noexcept
{
  Gtk::Container::operator=(std::move(src));
  return *this;
}

HeaderBar::~HeaderBar() noexcept
{
  destroy_();
}

HeaderBar::CppClassType HeaderBar::headerbar_class_; // initialize static member

GType HeaderBar::get_type()
{
  return headerbar_class_.init().get_type();
}


GType HeaderBar::get_base_type()
{
  return gtk_header_bar_get_type();
}


HeaderBar::HeaderBar()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Container(Glib::ConstructParams(headerbar_class_.init()))
{
  

}

void HeaderBar::set_title(const Glib::ustring& title)
{
  gtk_header_bar_set_title(gobj(), title.c_str());
}

Glib::ustring HeaderBar::get_title() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_header_bar_get_title(const_cast<GtkHeaderBar*>(gobj())));
}

void HeaderBar::set_subtitle(const Glib::ustring& subtitle)
{
  gtk_header_bar_set_subtitle(gobj(), subtitle.c_str());
}

Glib::ustring HeaderBar::get_subtitle() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_header_bar_get_subtitle(const_cast<GtkHeaderBar*>(gobj())));
}

void HeaderBar::set_has_subtitle(bool setting)
{
  gtk_header_bar_set_has_subtitle(gobj(), static_cast<int>(setting));
}

bool HeaderBar::get_has_subtitle() const
{
  return gtk_header_bar_get_has_subtitle(const_cast<GtkHeaderBar*>(gobj()));
}

void HeaderBar::set_custom_title(Gtk::Widget& title_widget)
{
  gtk_header_bar_set_custom_title(gobj(), (title_widget).gobj());
}

Widget* HeaderBar::get_custom_title()
{
  return Glib::wrap(gtk_header_bar_get_custom_title(gobj()));
}

const Widget* HeaderBar::get_custom_title() const
{
  return const_cast<HeaderBar*>(this)->get_custom_title();
}

void HeaderBar::pack_start(Gtk::Widget& child)
{
  gtk_header_bar_pack_start(gobj(), (child).gobj());
}

void HeaderBar::pack_end(Gtk::Widget& child)
{
  gtk_header_bar_pack_end(gobj(), (child).gobj());
}

void HeaderBar::set_show_close_button(bool setting)
{
  gtk_header_bar_set_show_close_button(gobj(), static_cast<int>(setting));
}

bool HeaderBar::get_show_close_button() const
{
  return gtk_header_bar_get_show_close_button(const_cast<GtkHeaderBar*>(gobj()));
}

void HeaderBar::set_decoration_layout(const Glib::ustring& layout)
{
  gtk_header_bar_set_decoration_layout(gobj(), layout.c_str());
}

Glib::ustring HeaderBar::get_decoration_layout() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_header_bar_get_decoration_layout(const_cast<GtkHeaderBar*>(gobj())));
}


Glib::PropertyProxy< Gtk::Widget* > HeaderBar::property_custom_title() 
{
  return Glib::PropertyProxy< Gtk::Widget* >(this, "custom-title");
}

Glib::PropertyProxy_ReadOnly< Gtk::Widget* > HeaderBar::property_custom_title() const
{
  return Glib::PropertyProxy_ReadOnly< Gtk::Widget* >(this, "custom-title");
}

Glib::PropertyProxy< bool > HeaderBar::property_show_close_button() 
{
  return Glib::PropertyProxy< bool >(this, "show-close-button");
}

Glib::PropertyProxy_ReadOnly< bool > HeaderBar::property_show_close_button() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-close-button");
}

Glib::PropertyProxy< int > HeaderBar::property_spacing() 
{
  return Glib::PropertyProxy< int >(this, "spacing");
}

Glib::PropertyProxy_ReadOnly< int > HeaderBar::property_spacing() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "spacing");
}

Glib::PropertyProxy< Glib::ustring > HeaderBar::property_subtitle() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "subtitle");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > HeaderBar::property_subtitle() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "subtitle");
}

Glib::PropertyProxy< Glib::ustring > HeaderBar::property_title() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "title");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > HeaderBar::property_title() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "title");
}

Glib::PropertyProxy< Glib::ustring > HeaderBar::property_decoration_layout() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "decoration-layout");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > HeaderBar::property_decoration_layout() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "decoration-layout");
}

Glib::PropertyProxy< bool > HeaderBar::property_decoration_layout_set() 
{
  return Glib::PropertyProxy< bool >(this, "decoration-layout-set");
}

Glib::PropertyProxy_ReadOnly< bool > HeaderBar::property_decoration_layout_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "decoration-layout-set");
}

Glib::PropertyProxy< bool > HeaderBar::property_has_subtitle() 
{
  return Glib::PropertyProxy< bool >(this, "has-subtitle");
}

Glib::PropertyProxy_ReadOnly< bool > HeaderBar::property_has_subtitle() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-subtitle");
}

Gtk::ChildPropertyProxy< PackType > HeaderBar::child_property_pack_type(Gtk::Widget& child) 
{
  return Gtk::ChildPropertyProxy< PackType >(this, child, "pack-type");
}

Gtk::ChildPropertyProxy_ReadOnly< PackType > HeaderBar::child_property_pack_type(const Gtk::Widget& child) const
{
  return Gtk::ChildPropertyProxy_ReadOnly< PackType >(this, child, "pack-type");
}

Gtk::ChildPropertyProxy< int > HeaderBar::child_property_position(Gtk::Widget& child) 
{
  return Gtk::ChildPropertyProxy< int >(this, child, "position");
}

Gtk::ChildPropertyProxy_ReadOnly< int > HeaderBar::child_property_position(const Gtk::Widget& child) const
{
  return Gtk::ChildPropertyProxy_ReadOnly< int >(this, child, "position");
}


} // namespace Gtk


