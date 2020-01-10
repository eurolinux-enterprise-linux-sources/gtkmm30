// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/volumebutton.h>
#include <gtkmm/private/volumebutton_p.h>


/*
 * Copyright 2007 The gtkmm Development Team
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

Gtk::VolumeButton* wrap(GtkVolumeButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::VolumeButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& VolumeButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &VolumeButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_volume_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void VolumeButton_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* VolumeButton_Class::wrap_new(GObject* o)
{
  return manage(new VolumeButton((GtkVolumeButton*)(o)));

}


/* The implementation: */

VolumeButton::VolumeButton(const Glib::ConstructParams& construct_params)
:
  Gtk::ScaleButton(construct_params)
{
  }

VolumeButton::VolumeButton(GtkVolumeButton* castitem)
:
  Gtk::ScaleButton((GtkScaleButton*)(castitem))
{
  }

VolumeButton::~VolumeButton()
{
  destroy_();
}

VolumeButton::CppClassType VolumeButton::volumebutton_class_; // initialize static member

GType VolumeButton::get_type()
{
  return volumebutton_class_.init().get_type();
}


GType VolumeButton::get_base_type()
{
  return gtk_volume_button_get_type();
}


VolumeButton::VolumeButton()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::ScaleButton(Glib::ConstructParams(volumebutton_class_.init()))
{
  

}


} // namespace Gtk


