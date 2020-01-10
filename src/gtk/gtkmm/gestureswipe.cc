// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/gestureswipe.h>
#include <gtkmm/private/gestureswipe_p.h>


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


static void GestureSwipe_signal_swipe_callback(GtkGestureSwipe* self, gdouble p0,gdouble p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,double,double >;

  auto obj = dynamic_cast<GestureSwipe*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo GestureSwipe_signal_swipe_info =
{
  "swipe",
  (GCallback) &GestureSwipe_signal_swipe_callback,
  (GCallback) &GestureSwipe_signal_swipe_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::GestureSwipe> wrap(GtkGestureSwipe* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::GestureSwipe>( dynamic_cast<Gtk::GestureSwipe*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& GestureSwipe_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GestureSwipe_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_gesture_swipe_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GestureSwipe_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* GestureSwipe_Class::wrap_new(GObject* object)
{
  return new GestureSwipe((GtkGestureSwipe*)object);
}


/* The implementation: */

GtkGestureSwipe* GestureSwipe::gobj_copy()
{
  reference();
  return gobj();
}

GestureSwipe::GestureSwipe(const Glib::ConstructParams& construct_params)
:
  GestureSingle(construct_params)
{

}

GestureSwipe::GestureSwipe(GtkGestureSwipe* castitem)
:
  GestureSingle((GtkGestureSingle*)(castitem))
{}


GestureSwipe::GestureSwipe(GestureSwipe&& src) noexcept
: GestureSingle(std::move(src))
{}

GestureSwipe& GestureSwipe::operator=(GestureSwipe&& src) noexcept
{
  GestureSingle::operator=(std::move(src));
  return *this;
}


GestureSwipe::~GestureSwipe() noexcept
{}


GestureSwipe::CppClassType GestureSwipe::gestureswipe_class_; // initialize static member

GType GestureSwipe::get_type()
{
  return gestureswipe_class_.init().get_type();
}


GType GestureSwipe::get_base_type()
{
  return gtk_gesture_swipe_get_type();
}


GestureSwipe::GestureSwipe()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  GestureSingle(Glib::ConstructParams(gestureswipe_class_.init()))
{
  

}

GestureSwipe::GestureSwipe(Widget& widget)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  GestureSingle(Glib::ConstructParams(gestureswipe_class_.init(), "widget", (widget).gobj(), nullptr))
{
  

}

Glib::RefPtr<GestureSwipe> GestureSwipe::create(Widget& widget)
{
  return Glib::RefPtr<GestureSwipe>( new GestureSwipe(widget) );
}

bool GestureSwipe::get_velocity(double& velocity_x, double& velocity_y) const
{
  return gtk_gesture_swipe_get_velocity(const_cast<GtkGestureSwipe*>(gobj()), &(velocity_x), &(velocity_y));
}


Glib::SignalProxy< void,double,double > GestureSwipe::signal_swipe()
{
  return Glib::SignalProxy< void,double,double >(this, &GestureSwipe_signal_swipe_info);
}


} // namespace Gtk


