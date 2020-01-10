// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/radiomenuitem.h>
#include <gtkmm/private/radiomenuitem_p.h>


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

#include <gtkmm/misc.h>
#include <gtkmm/label.h>
#include <gtk/gtk.h>

typedef Gtk::RadioMenuItem::Group Group; //So that the generate get_group return type is parsed.

namespace Gtk
{

RadioMenuItem::RadioMenuItem(const Glib::ustring &label, bool mnemonic)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::CheckMenuItem(Glib::ConstructParams(radiomenuitem_class_.init()))
{
  add_accel_label(label, mnemonic);
}

RadioMenuItem::RadioMenuItem(Group& groupx)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::CheckMenuItem(Glib::ConstructParams(radiomenuitem_class_.init()))
{
  groupx.add(*this);
}

RadioMenuItem::RadioMenuItem(Group& groupx, const Glib::ustring &label, bool mnemonic)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::CheckMenuItem(Glib::ConstructParams(radiomenuitem_class_.init()))
{
  groupx.add(*this);
  add_accel_label(label, mnemonic);
}

void RadioMenuItem::set_group(Group& group)
{
  gtk_radio_menu_item_set_group(gobj(), group.group_);

   //The group will be updated, ready for use with the next radiomenuitem:
  group = get_group();
}

void RadioMenuItem::reset_group()
{
  gtk_radio_menu_item_set_group(gobj(), nullptr);
}

} // namespace Gtk

namespace
{


static const Glib::SignalProxyInfo RadioMenuItem_signal_group_changed_info =
{
  "group_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::RadioMenuItem* wrap(GtkRadioMenuItem* object, bool take_copy)
{
  return dynamic_cast<Gtk::RadioMenuItem *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& RadioMenuItem_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &RadioMenuItem_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_radio_menu_item_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void RadioMenuItem_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->group_changed = &group_changed_callback;
}


void RadioMenuItem_Class::group_changed_callback(GtkRadioMenuItem* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_group_changed();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->group_changed)
    (*base->group_changed)(self);
}


Glib::ObjectBase* RadioMenuItem_Class::wrap_new(GObject* o)
{
  return manage(new RadioMenuItem((GtkRadioMenuItem*)(o)));

}


/* The implementation: */

RadioMenuItem::RadioMenuItem(const Glib::ConstructParams& construct_params)
:
  Gtk::CheckMenuItem(construct_params)
{
  }

RadioMenuItem::RadioMenuItem(GtkRadioMenuItem* castitem)
:
  Gtk::CheckMenuItem((GtkCheckMenuItem*)(castitem))
{
  }


RadioMenuItem::RadioMenuItem(RadioMenuItem&& src) noexcept
: Gtk::CheckMenuItem(std::move(src))
{}

RadioMenuItem& RadioMenuItem::operator=(RadioMenuItem&& src) noexcept
{
  Gtk::CheckMenuItem::operator=(std::move(src));
  return *this;
}

RadioMenuItem::~RadioMenuItem() noexcept
{
  destroy_();
}

RadioMenuItem::CppClassType RadioMenuItem::radiomenuitem_class_; // initialize static member

GType RadioMenuItem::get_type()
{
  return radiomenuitem_class_.init().get_type();
}


GType RadioMenuItem::get_base_type()
{
  return gtk_radio_menu_item_get_type();
}


RadioMenuItem::RadioMenuItem()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::CheckMenuItem(Glib::ConstructParams(radiomenuitem_class_.init()))
{
  

}

Group RadioMenuItem::get_group()
{
  return Group(gtk_radio_menu_item_get_group(gobj()));
}

void RadioMenuItem::join_group(RadioMenuItem& group_source)
{
  gtk_radio_menu_item_join_group(gobj(), (group_source).gobj());
}


Glib::SignalProxy< void > RadioMenuItem::signal_group_changed()
{
  return Glib::SignalProxy< void >(this, &RadioMenuItem_signal_group_changed_info);
}


Glib::PropertyProxy_WriteOnly< RadioMenuItem* > RadioMenuItem::property_group() 
{
  return Glib::PropertyProxy_WriteOnly< RadioMenuItem* >(this, "group");
}


void Gtk::RadioMenuItem::on_group_changed()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->group_changed)
    (*base->group_changed)(gobj());
}


} // namespace Gtk


