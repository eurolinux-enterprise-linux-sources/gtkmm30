// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/statusbar.h>
#include <gtkmm/private/statusbar_p.h>


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

guint Statusbar::push(const Glib::ustring& text, guint context_id /* = 0 */)
{
  return gtk_statusbar_push(gobj(), context_id, text.c_str());
}

void Statusbar::remove_message(guint message_id, guint context_id /* = 0 */)
{
  return gtk_statusbar_remove(gobj(), context_id, message_id);
}

} //namespace Gtk


namespace
{


static void Statusbar_signal_text_pushed_callback(GtkStatusbar* self, guint p0,const gchar* p1,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,guint,const Glib::ustring& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0, Glib::convert_const_gchar_ptr_to_ustring(p1)
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

static const Glib::SignalProxyInfo Statusbar_signal_text_pushed_info =
{
  "text_pushed",
  (GCallback) &Statusbar_signal_text_pushed_callback,
  (GCallback) &Statusbar_signal_text_pushed_callback
};


static void Statusbar_signal_text_popped_callback(GtkStatusbar* self, guint p0,const gchar* p1,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,guint,const Glib::ustring& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0, Glib::convert_const_gchar_ptr_to_ustring(p1)
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

static const Glib::SignalProxyInfo Statusbar_signal_text_popped_info =
{
  "text_popped",
  (GCallback) &Statusbar_signal_text_popped_callback,
  (GCallback) &Statusbar_signal_text_popped_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Statusbar* wrap(GtkStatusbar* object, bool take_copy)
{
  return dynamic_cast<Gtk::Statusbar *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Statusbar_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Statusbar_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_statusbar_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Statusbar_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->text_pushed = &text_pushed_callback;
  klass->text_popped = &text_popped_callback;
}


void Statusbar_Class::text_pushed_callback(GtkStatusbar* self, guint p0, const gchar* p1)
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
        obj->on_text_pushed(p0, Glib::convert_const_gchar_ptr_to_ustring(p1)
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
  if(base && base->text_pushed)
    (*base->text_pushed)(self, p0, p1);
}
void Statusbar_Class::text_popped_callback(GtkStatusbar* self, guint p0, const gchar* p1)
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
        obj->on_text_popped(p0, Glib::convert_const_gchar_ptr_to_ustring(p1)
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
  if(base && base->text_popped)
    (*base->text_popped)(self, p0, p1);
}


Glib::ObjectBase* Statusbar_Class::wrap_new(GObject* o)
{
  return manage(new Statusbar((GtkStatusbar*)(o)));

}


/* The implementation: */

Statusbar::Statusbar(const Glib::ConstructParams& construct_params)
:
  Gtk::HBox(construct_params)
{
  }

Statusbar::Statusbar(GtkStatusbar* castitem)
:
  Gtk::HBox((GtkHBox*)(castitem))
{
  }

Statusbar::~Statusbar()
{
  destroy_();
}

Statusbar::CppClassType Statusbar::statusbar_class_; // initialize static member

GType Statusbar::get_type()
{
  return statusbar_class_.init().get_type();
}


GType Statusbar::get_base_type()
{
  return gtk_statusbar_get_type();
}


Statusbar::Statusbar()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::HBox(Glib::ConstructParams(statusbar_class_.init()))
{
  

}

guint Statusbar::get_context_id(const Glib::ustring& context_description)
{
  return gtk_statusbar_get_context_id(gobj(), context_description.c_str());
}

void Statusbar::pop(guint context_id)
{
  gtk_statusbar_pop(gobj(), context_id);
}

void Statusbar::remove_all_messages(guint context_id)
{
  gtk_statusbar_remove_all(gobj(), context_id);
}

Gtk::Widget* Statusbar::get_message_area()
{
  return Glib::wrap(gtk_statusbar_get_message_area(gobj()));
}

const Gtk::Widget* Statusbar::get_message_area() const
{
  return const_cast<Statusbar*>(this)->get_message_area();
}


Glib::SignalProxy2< void,guint,const Glib::ustring& > Statusbar::signal_text_pushed()
{
  return Glib::SignalProxy2< void,guint,const Glib::ustring& >(this, &Statusbar_signal_text_pushed_info);
}


Glib::SignalProxy2< void,guint,const Glib::ustring& > Statusbar::signal_text_popped()
{
  return Glib::SignalProxy2< void,guint,const Glib::ustring& >(this, &Statusbar_signal_text_popped_info);
}


void Gtk::Statusbar::on_text_pushed(guint context_id, const Glib::ustring& text)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->text_pushed)
    (*base->text_pushed)(gobj(),context_id,text.c_str());
}
void Gtk::Statusbar::on_text_popped(guint context_id, const Glib::ustring& text)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->text_popped)
    (*base->text_popped)(gobj(),context_id,text.c_str());
}


} // namespace Gtk


