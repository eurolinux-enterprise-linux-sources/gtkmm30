// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/shortcutssection.h>
#include <gtkmm/private/shortcutssection_p.h>


/* Copyright (C) 2016 The gtkmm Development Team
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>

namespace Gtk
{
} //namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::ShortcutsSection* wrap(GtkShortcutsSection* object, bool take_copy)
{
  return dynamic_cast<Gtk::ShortcutsSection *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ShortcutsSection_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ShortcutsSection_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_shortcuts_section_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ShortcutsSection_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ShortcutsSection_Class::wrap_new(GObject* o)
{
  return manage(new ShortcutsSection((GtkShortcutsSection*)(o)));

}


/* The implementation: */

ShortcutsSection::ShortcutsSection(const Glib::ConstructParams& construct_params)
:
  Box(construct_params)
{
  }

ShortcutsSection::ShortcutsSection(GtkShortcutsSection* castitem)
:
  Box((GtkBox*)(castitem))
{
  }


ShortcutsSection::ShortcutsSection(ShortcutsSection&& src) noexcept
: Box(std::move(src))
{}

ShortcutsSection& ShortcutsSection::operator=(ShortcutsSection&& src) noexcept
{
  Box::operator=(std::move(src));
  return *this;
}

ShortcutsSection::~ShortcutsSection() noexcept
{
  destroy_();
}

ShortcutsSection::CppClassType ShortcutsSection::shortcutssection_class_; // initialize static member

GType ShortcutsSection::get_type()
{
  return shortcutssection_class_.init().get_type();
}


GType ShortcutsSection::get_base_type()
{
  return gtk_shortcuts_section_get_type();
}


ShortcutsSection::ShortcutsSection()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Box(Glib::ConstructParams(shortcutssection_class_.init()))
{
  

}


Glib::PropertyProxy< Glib::ustring > ShortcutsSection::property_section_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "section-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > ShortcutsSection::property_section_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "section-name");
}

Glib::PropertyProxy< Glib::ustring > ShortcutsSection::property_title() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "title");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > ShortcutsSection::property_title() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "title");
}

Glib::PropertyProxy< unsigned int > ShortcutsSection::property_max_height() 
{
  return Glib::PropertyProxy< unsigned int >(this, "max-height");
}

Glib::PropertyProxy_ReadOnly< unsigned int > ShortcutsSection::property_max_height() const
{
  return Glib::PropertyProxy_ReadOnly< unsigned int >(this, "max-height");
}


} // namespace Gtk


