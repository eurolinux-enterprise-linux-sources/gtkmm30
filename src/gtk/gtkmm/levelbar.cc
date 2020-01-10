// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/levelbar.h>
#include <gtkmm/private/levelbar_p.h>


/** Copyright (C) 2012 The gtkmm Development Team
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

} //namespace Gtk

namespace
{


static void LevelBar_signal_offset_changed_callback(GtkLevelBar* self, const gchar* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::ustring& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
}

static const Glib::SignalProxyInfo LevelBar_signal_offset_changed_info =
{
  "offset_changed",
  (GCallback) &LevelBar_signal_offset_changed_callback,
  (GCallback) &LevelBar_signal_offset_changed_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::LevelBarMode>::value_type()
{
  return gtk_level_bar_mode_get_type();
}


namespace Glib
{

Gtk::LevelBar* wrap(GtkLevelBar* object, bool take_copy)
{
  return dynamic_cast<Gtk::LevelBar *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& LevelBar_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &LevelBar_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_level_bar_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void LevelBar_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->offset_changed = &offset_changed_callback;
}


void LevelBar_Class::offset_changed_callback(GtkLevelBar* self, const gchar* p0)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_offset_changed(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->offset_changed)
    (*base->offset_changed)(self, p0);
}


Glib::ObjectBase* LevelBar_Class::wrap_new(GObject* o)
{
  return manage(new LevelBar((GtkLevelBar*)(o)));

}


/* The implementation: */

LevelBar::LevelBar(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

LevelBar::LevelBar(GtkLevelBar* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }

LevelBar::~LevelBar()
{
  destroy_();
}

LevelBar::CppClassType LevelBar::levelbar_class_; // initialize static member

GType LevelBar::get_type()
{
  return levelbar_class_.init().get_type();
}


GType LevelBar::get_base_type()
{
  return gtk_level_bar_get_type();
}


LevelBar::LevelBar()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Widget(Glib::ConstructParams(levelbar_class_.init()))
{
  

}

void LevelBar::set_mode(LevelBarMode mode)
{
  gtk_level_bar_set_mode(gobj(), ((GtkLevelBarMode)(mode)));
}

LevelBarMode LevelBar::get_mode() const
{
  return ((LevelBarMode)(gtk_level_bar_get_mode(const_cast<GtkLevelBar*>(gobj()))));
}

void LevelBar::set_value(double value)
{
  gtk_level_bar_set_value(gobj(), value);
}

double LevelBar::get_value() const
{
  return gtk_level_bar_get_value(const_cast<GtkLevelBar*>(gobj()));
}

void LevelBar::set_min_value(double value)
{
  gtk_level_bar_set_min_value(gobj(), value);
}

double LevelBar::get_min_value() const
{
  return gtk_level_bar_get_min_value(const_cast<GtkLevelBar*>(gobj()));
}

void LevelBar::set_max_value(double value)
{
  gtk_level_bar_set_max_value(gobj(), value);
}

double LevelBar::get_max_value() const
{
  return gtk_level_bar_get_max_value(const_cast<GtkLevelBar*>(gobj()));
}

void LevelBar::set_inverted(bool inverted)
{
  gtk_level_bar_set_inverted(gobj(), static_cast<int>(inverted));
}

bool LevelBar::get_inverted() const
{
  return gtk_level_bar_get_inverted(const_cast<GtkLevelBar*>(gobj()));
}

void LevelBar::add_offset_value(const Glib::ustring& name, double value)
{
  gtk_level_bar_add_offset_value(gobj(), name.c_str(), value);
}

void LevelBar::remove_offset_value(const Glib::ustring& name)
{
  gtk_level_bar_remove_offset_value(gobj(), name.c_str());
}

bool LevelBar::get_offset_value(const Glib::ustring& name, double& value) const
{
  return gtk_level_bar_get_offset_value(const_cast<GtkLevelBar*>(gobj()), name.c_str(), &(value));
}


Glib::SignalProxy1< void,const Glib::ustring& > LevelBar::signal_offset_changed()
{
  return Glib::SignalProxy1< void,const Glib::ustring& >(this, &LevelBar_signal_offset_changed_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< double > LevelBar::property_value() 
{
  return Glib::PropertyProxy< double >(this, "value");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< double > LevelBar::property_value() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "value");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< double > LevelBar::property_min_value() 
{
  return Glib::PropertyProxy< double >(this, "min-value");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< double > LevelBar::property_min_value() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "min-value");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< double > LevelBar::property_max_value() 
{
  return Glib::PropertyProxy< double >(this, "max-value");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< double > LevelBar::property_max_value() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "max-value");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< LevelBarMode > LevelBar::property_mode() 
{
  return Glib::PropertyProxy< LevelBarMode >(this, "mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< LevelBarMode > LevelBar::property_mode() const
{
  return Glib::PropertyProxy_ReadOnly< LevelBarMode >(this, "mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > LevelBar::property_inverted() 
{
  return Glib::PropertyProxy< bool >(this, "inverted");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > LevelBar::property_inverted() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "inverted");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Gtk::LevelBar::on_offset_changed(const Glib::ustring& name)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->offset_changed)
    (*base->offset_changed)(gobj(),name.c_str());
}


} // namespace Gtk


