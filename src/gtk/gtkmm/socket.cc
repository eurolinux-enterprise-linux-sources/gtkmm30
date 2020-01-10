// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/socket.h>
#include <gtkmm/private/socket_p.h>


/* Copyright 1998-2002 The gtkmm Development Team
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

#include <gtk/gtkx.h>


namespace
{


static const Glib::SignalProxyInfo Socket_signal_plug_added_info =
{
  "plug_added",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static gboolean Socket_signal_plug_removed_callback(GtkSocket* self, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< bool > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))());
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gboolean RType;
  return RType();
}

static gboolean Socket_signal_plug_removed_notify_callback(GtkSocket* self,  void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))();
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gboolean RType;
  return RType();
}

static const Glib::SignalProxyInfo Socket_signal_plug_removed_info =
{
  "plug_removed",
  (GCallback) &Socket_signal_plug_removed_callback,
  (GCallback) &Socket_signal_plug_removed_notify_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Socket* wrap(GtkSocket* object, bool take_copy)
{
  return dynamic_cast<Gtk::Socket *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Socket_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Socket_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_socket_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Socket_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->plug_added = &plug_added_callback;
  klass->plug_removed = &plug_removed_callback;
}


void Socket_Class::plug_added_callback(GtkSocket* self)
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
        obj->on_plug_added();
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
  if(base && base->plug_added)
    (*base->plug_added)(self);
}
gboolean Socket_Class::plug_removed_callback(GtkSocket* self)
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
        return static_cast<int>(obj->on_plug_removed());
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
  if(base && base->plug_removed)
    return (*base->plug_removed)(self);

  typedef gboolean RType;
  return RType();
}


Glib::ObjectBase* Socket_Class::wrap_new(GObject* o)
{
  return manage(new Socket((GtkSocket*)(o)));

}


/* The implementation: */

Socket::Socket(const Glib::ConstructParams& construct_params)
:
  Gtk::Container(construct_params)
{
  }

Socket::Socket(GtkSocket* castitem)
:
  Gtk::Container((GtkContainer*)(castitem))
{
  }

Socket::~Socket()
{
  destroy_();
}

Socket::CppClassType Socket::socket_class_; // initialize static member

GType Socket::get_type()
{
  return socket_class_.init().get_type();
}


GType Socket::get_base_type()
{
  return gtk_socket_get_type();
}


Socket::Socket()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Container(Glib::ConstructParams(socket_class_.init()))
{
  

}

void Socket::add_id(::Window window_id)
{
  gtk_socket_add_id(gobj(), (window_id));
}

::Window Socket::get_id() const
{
  return (gtk_socket_get_id(const_cast<GtkSocket*>(gobj())));
}

Glib::RefPtr<Gdk::Window> Socket::get_plug_window()
{
  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap(gtk_socket_get_plug_window(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Window> Socket::get_plug_window() const
{
  return const_cast<Socket*>(this)->get_plug_window();
}


Glib::SignalProxy0< void > Socket::signal_plug_added()
{
  return Glib::SignalProxy0< void >(this, &Socket_signal_plug_added_info);
}


Glib::SignalProxy0< bool > Socket::signal_plug_removed()
{
  return Glib::SignalProxy0< bool >(this, &Socket_signal_plug_removed_info);
}


void Gtk::Socket::on_plug_added()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->plug_added)
    (*base->plug_added)(gobj());
}
bool Gtk::Socket::on_plug_removed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->plug_removed)
    return (*base->plug_removed)(gobj());

  typedef bool RType;
  return RType();
}


} // namespace Gtk


