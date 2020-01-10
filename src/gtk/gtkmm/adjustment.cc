// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/adjustment.h>
#include <gtkmm/private/adjustment_p.h>


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

//This is hand-coded so we can change the sequence of properties.
//If we don't do this then the value is restricted to the initial values, ignoring the specified boundaries:
Adjustment::Adjustment(double value, double lower, double upper, double step_increment, double page_increment, double page_size)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(adjustment_class_.init(), "lower",lower,"upper",upper,"step_increment",step_increment,"page_increment",page_increment,"page_size",page_size,"value",value, static_cast<char*>(0)))
{
     if(gobject_ && g_object_is_floating (gobject_))
     g_object_ref_sink(gobject_); //Stops it from being floating.

}


} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo Adjustment_signal_changed_info =
{
  "changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Adjustment_signal_value_changed_info =
{
  "value_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::Adjustment> wrap(GtkAdjustment* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::Adjustment>( dynamic_cast<Gtk::Adjustment*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Adjustment_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Adjustment_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_adjustment_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Adjustment_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->changed = &changed_callback;
  klass->value_changed = &value_changed_callback;
}


void Adjustment_Class::changed_callback(GtkAdjustment* self)
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
        obj->on_changed();
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
  if(base && base->changed)
    (*base->changed)(self);
}
void Adjustment_Class::value_changed_callback(GtkAdjustment* self)
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
        obj->on_value_changed();
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
  if(base && base->value_changed)
    (*base->value_changed)(self);
}


Glib::ObjectBase* Adjustment_Class::wrap_new(GObject* object)
{
  return new Adjustment((GtkAdjustment*)object);
}


/* The implementation: */

GtkAdjustment* Adjustment::gobj_copy()
{
  reference();
  return gobj();
}

Adjustment::Adjustment(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{
   if(gobject_ && g_object_is_floating (gobject_))
     g_object_ref_sink(gobject_); //Stops it from being floating.

}

Adjustment::Adjustment(GtkAdjustment* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Adjustment::~Adjustment()
{}


Adjustment::CppClassType Adjustment::adjustment_class_; // initialize static member

GType Adjustment::get_type()
{
  return adjustment_class_.init().get_type();
}


GType Adjustment::get_base_type()
{
  return gtk_adjustment_get_type();
}


Glib::RefPtr<Adjustment> Adjustment::create(double value, double lower, double upper, double step_increment, double page_increment, double page_size)
{
  return Glib::RefPtr<Adjustment>( new Adjustment(value, lower, upper, step_increment, page_increment, page_size) );
}

void Adjustment::changed()
{
  gtk_adjustment_changed(gobj());
}

void Adjustment::value_changed()
{
  gtk_adjustment_value_changed(gobj());
}

void Adjustment::clamp_page(double lower, double upper)
{
  gtk_adjustment_clamp_page(gobj(), lower, upper);
}

void Adjustment::set_value(double value)
{
  gtk_adjustment_set_value(gobj(), value);
}

double Adjustment::get_value() const
{
  return gtk_adjustment_get_value(const_cast<GtkAdjustment*>(gobj()));
}

void Adjustment::set_lower(double lower)
{
  gtk_adjustment_set_lower(gobj(), lower);
}

double Adjustment::get_lower() const
{
  return gtk_adjustment_get_lower(const_cast<GtkAdjustment*>(gobj()));
}

void Adjustment::set_upper(double upper)
{
  gtk_adjustment_set_upper(gobj(), upper);
}

double Adjustment::get_upper() const
{
  return gtk_adjustment_get_upper(const_cast<GtkAdjustment*>(gobj()));
}

void Adjustment::set_step_increment(double step_increment)
{
  gtk_adjustment_set_step_increment(gobj(), step_increment);
}

double Adjustment::get_step_increment() const
{
  return gtk_adjustment_get_step_increment(const_cast<GtkAdjustment*>(gobj()));
}

void Adjustment::set_page_increment(double page_increment)
{
  gtk_adjustment_set_page_increment(gobj(), page_increment);
}

double Adjustment::get_page_increment() const
{
  return gtk_adjustment_get_page_increment(const_cast<GtkAdjustment*>(gobj()));
}

void Adjustment::set_page_size(double page_size)
{
  gtk_adjustment_set_page_size(gobj(), page_size);
}

double Adjustment::get_page_size() const
{
  return gtk_adjustment_get_page_size(const_cast<GtkAdjustment*>(gobj()));
}

void Adjustment::configure(double value, double lower, double upper, double step_increment, double page_increment, double page_size)
{
  gtk_adjustment_configure(gobj(), value, lower, upper, step_increment, page_increment, page_size);
}

double Adjustment::get_minimum_increment() const
{
  return gtk_adjustment_get_minimum_increment(const_cast<GtkAdjustment*>(gobj()));
}


Glib::SignalProxy0< void > Adjustment::signal_changed()
{
  return Glib::SignalProxy0< void >(this, &Adjustment_signal_changed_info);
}


Glib::SignalProxy0< void > Adjustment::signal_value_changed()
{
  return Glib::SignalProxy0< void >(this, &Adjustment_signal_value_changed_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< double > Adjustment::property_value() 
{
  return Glib::PropertyProxy< double >(this, "value");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< double > Adjustment::property_value() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "value");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< double > Adjustment::property_lower() 
{
  return Glib::PropertyProxy< double >(this, "lower");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< double > Adjustment::property_lower() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "lower");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< double > Adjustment::property_upper() 
{
  return Glib::PropertyProxy< double >(this, "upper");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< double > Adjustment::property_upper() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "upper");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< double > Adjustment::property_step_increment() 
{
  return Glib::PropertyProxy< double >(this, "step-increment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< double > Adjustment::property_step_increment() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "step-increment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< double > Adjustment::property_page_increment() 
{
  return Glib::PropertyProxy< double >(this, "page-increment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< double > Adjustment::property_page_increment() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "page-increment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< double > Adjustment::property_page_size() 
{
  return Glib::PropertyProxy< double >(this, "page-size");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< double > Adjustment::property_page_size() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "page-size");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Gtk::Adjustment::on_changed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->changed)
    (*base->changed)(gobj());
}
void Gtk::Adjustment::on_value_changed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->value_changed)
    (*base->value_changed)(gobj());
}


} // namespace Gtk


