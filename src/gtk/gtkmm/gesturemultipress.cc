// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/gesturemultipress.h>
#include <gtkmm/private/gesturemultipress_p.h>


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

namespace Gtk
{

void GestureMultiPress::unset_area()
{
  gtk_gesture_multi_press_set_area(gobj(), nullptr);
}

} //namespace Gtk

namespace
{


static void GestureMultiPress_signal_pressed_callback(GtkGestureMultiPress* self, gint p0,gdouble p1,gdouble p2,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,int,double,double >;

  auto obj = dynamic_cast<GestureMultiPress*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
, p1
, p2
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo GestureMultiPress_signal_pressed_info =
{
  "pressed",
  (GCallback) &GestureMultiPress_signal_pressed_callback,
  (GCallback) &GestureMultiPress_signal_pressed_callback
};


static void GestureMultiPress_signal_released_callback(GtkGestureMultiPress* self, gint p0,gdouble p1,gdouble p2,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,int,double,double >;

  auto obj = dynamic_cast<GestureMultiPress*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
, p1
, p2
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo GestureMultiPress_signal_released_info =
{
  "released",
  (GCallback) &GestureMultiPress_signal_released_callback,
  (GCallback) &GestureMultiPress_signal_released_callback
};


static const Glib::SignalProxyInfo GestureMultiPress_signal_stopped_info =
{
  "stopped",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::GestureMultiPress> wrap(GtkGestureMultiPress* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::GestureMultiPress>( dynamic_cast<Gtk::GestureMultiPress*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& GestureMultiPress_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GestureMultiPress_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_gesture_multi_press_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GestureMultiPress_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* GestureMultiPress_Class::wrap_new(GObject* object)
{
  return new GestureMultiPress((GtkGestureMultiPress*)object);
}


/* The implementation: */

GtkGestureMultiPress* GestureMultiPress::gobj_copy()
{
  reference();
  return gobj();
}

GestureMultiPress::GestureMultiPress(const Glib::ConstructParams& construct_params)
:
  GestureSingle(construct_params)
{

}

GestureMultiPress::GestureMultiPress(GtkGestureMultiPress* castitem)
:
  GestureSingle((GtkGestureSingle*)(castitem))
{}


GestureMultiPress::GestureMultiPress(GestureMultiPress&& src) noexcept
: GestureSingle(std::move(src))
{}

GestureMultiPress& GestureMultiPress::operator=(GestureMultiPress&& src) noexcept
{
  GestureSingle::operator=(std::move(src));
  return *this;
}


GestureMultiPress::~GestureMultiPress() noexcept
{}


GestureMultiPress::CppClassType GestureMultiPress::gesturemultipress_class_; // initialize static member

GType GestureMultiPress::get_type()
{
  return gesturemultipress_class_.init().get_type();
}


GType GestureMultiPress::get_base_type()
{
  return gtk_gesture_multi_press_get_type();
}


GestureMultiPress::GestureMultiPress()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  GestureSingle(Glib::ConstructParams(gesturemultipress_class_.init()))
{
  

}

GestureMultiPress::GestureMultiPress(Widget& widget)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  GestureSingle(Glib::ConstructParams(gesturemultipress_class_.init(), "widget", (widget).gobj(), nullptr))
{
  

}

Glib::RefPtr<GestureMultiPress> GestureMultiPress::create(Widget& widget)
{
  return Glib::RefPtr<GestureMultiPress>( new GestureMultiPress(widget) );
}

bool GestureMultiPress::get_area(Gdk::Rectangle& rect) const
{
  return gtk_gesture_multi_press_get_area(const_cast<GtkGestureMultiPress*>(gobj()), (rect).gobj());
}

void GestureMultiPress::set_area(const Gdk::Rectangle& rect)
{
  gtk_gesture_multi_press_set_area(gobj(), (rect).gobj());
}


Glib::SignalProxy< void,int,double,double > GestureMultiPress::signal_pressed()
{
  return Glib::SignalProxy< void,int,double,double >(this, &GestureMultiPress_signal_pressed_info);
}


Glib::SignalProxy< void,int,double,double > GestureMultiPress::signal_released()
{
  return Glib::SignalProxy< void,int,double,double >(this, &GestureMultiPress_signal_released_info);
}


Glib::SignalProxy< void > GestureMultiPress::signal_stopped()
{
  return Glib::SignalProxy< void >(this, &GestureMultiPress_signal_stopped_info);
}


} // namespace Gtk


