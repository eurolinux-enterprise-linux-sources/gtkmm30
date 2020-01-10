// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/gesturerotate.h>
#include <gtkmm/private/gesturerotate_p.h>


/* Copyright (C) 2014 The gtkmm Development Team
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

namespace
{


static void GestureRotate_signal_angle_changed_callback(GtkGestureRotate* self, gdouble p0,gdouble p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,double,double >;

  auto obj = dynamic_cast<GestureRotate*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
, p1
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo GestureRotate_signal_angle_changed_info =
{
  "angle-changed",
  (GCallback) &GestureRotate_signal_angle_changed_callback,
  (GCallback) &GestureRotate_signal_angle_changed_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::GestureRotate> wrap(GtkGestureRotate* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::GestureRotate>( dynamic_cast<Gtk::GestureRotate*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& GestureRotate_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GestureRotate_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_gesture_rotate_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GestureRotate_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* GestureRotate_Class::wrap_new(GObject* object)
{
  return new GestureRotate((GtkGestureRotate*)object);
}


/* The implementation: */

GtkGestureRotate* GestureRotate::gobj_copy()
{
  reference();
  return gobj();
}

GestureRotate::GestureRotate(const Glib::ConstructParams& construct_params)
:
  Gesture(construct_params)
{

}

GestureRotate::GestureRotate(GtkGestureRotate* castitem)
:
  Gesture((GtkGesture*)(castitem))
{}


GestureRotate::GestureRotate(GestureRotate&& src) noexcept
: Gesture(std::move(src))
{}

GestureRotate& GestureRotate::operator=(GestureRotate&& src) noexcept
{
  Gesture::operator=(std::move(src));
  return *this;
}


GestureRotate::~GestureRotate() noexcept
{}


GestureRotate::CppClassType GestureRotate::gesturerotate_class_; // initialize static member

GType GestureRotate::get_type()
{
  return gesturerotate_class_.init().get_type();
}


GType GestureRotate::get_base_type()
{
  return gtk_gesture_rotate_get_type();
}


GestureRotate::GestureRotate()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gesture(Glib::ConstructParams(gesturerotate_class_.init()))
{
  

}

GestureRotate::GestureRotate(Widget& widget)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gesture(Glib::ConstructParams(gesturerotate_class_.init(), "widget", (widget).gobj(), nullptr))
{
  

}

Glib::RefPtr<GestureRotate> GestureRotate::create(Widget& widget)
{
  return Glib::RefPtr<GestureRotate>( new GestureRotate(widget) );
}

double GestureRotate::get_angle_delta() const
{
  return gtk_gesture_rotate_get_angle_delta(const_cast<GtkGestureRotate*>(gobj()));
}


Glib::SignalProxy< void,double,double > GestureRotate::signal_angle_changed()
{
  return Glib::SignalProxy< void,double,double >(this, &GestureRotate_signal_angle_changed_info);
}


} // namespace Gtk


