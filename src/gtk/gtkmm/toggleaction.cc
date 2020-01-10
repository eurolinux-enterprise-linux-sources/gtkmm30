// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
#define GDK_DISABLE_DEPRECATION_WARNINGS 1
 

#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gtkmm/toggleaction.h>
#include <gtkmm/private/toggleaction_p.h>


/* Copyright 2003 The gtkmm Development Team
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

#ifndef GTKMM_DISABLE_DEPRECATED

ToggleAction::ToggleAction(const Glib::ustring& name, const Gtk::StockID& stock_id, const Glib::ustring& label, const Glib::ustring& tooltip, bool is_active)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Action(Glib::ConstructParams(toggleaction_class_.init(), "name",name.c_str(),"stock_id",stock_id.get_c_str(),"label",(label.empty() ? nullptr : label.c_str()),"tooltip",(tooltip.empty() ? nullptr : tooltip.c_str()), nullptr))
{
  set_active(is_active);
}

ToggleAction::ToggleAction(const Glib::ustring& name, const Glib::ustring& icon_name, const Glib::ustring& label, const Glib::ustring& tooltip, bool is_active)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Action(Glib::ConstructParams(toggleaction_class_.init(), "name",name.c_str(),"icon_name",icon_name.c_str(),"label",(label.empty() ? nullptr : label.c_str()),"tooltip",(tooltip.empty() ? nullptr : tooltip.c_str()), nullptr))
{
  set_active(is_active);
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::RefPtr<ToggleAction> ToggleAction::create(const Glib::ustring& name, const Glib::ustring& label, const Glib::ustring& tooltip, bool is_active)
{
  return Glib::RefPtr<ToggleAction>( new ToggleAction(name, Gtk::StockID(), label, tooltip, is_active) );
}

Glib::RefPtr<ToggleAction> ToggleAction::create(const Glib::ustring& name, const Gtk::StockID& stock_id, const Glib::ustring& label, const Glib::ustring& tooltip, bool is_active)
{
  return Glib::RefPtr<ToggleAction>( new ToggleAction(name, stock_id, label, tooltip, is_active) );
}

Glib::RefPtr<ToggleAction> ToggleAction::create_with_icon_name(const Glib::ustring& name, const Glib::ustring& icon_name, const Glib::ustring& label, const Glib::ustring& tooltip, bool is_active)
{
  return Glib::RefPtr<ToggleAction>( new ToggleAction(name, icon_name, label, tooltip, is_active) );
}
#endif // GTKMM_DISABLE_DEPRECATED


} // namespace Gtk

namespace
{

#ifndef GTKMM_DISABLE_DEPRECATED


static const Glib::SignalProxyInfo ToggleAction_signal_toggled_info =
{
  "toggled",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};

#endif // GTKMM_DISABLE_DEPRECATED


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::ToggleAction> wrap(GtkToggleAction* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::ToggleAction>( dynamic_cast<Gtk::ToggleAction*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ToggleAction_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ToggleAction_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_toggle_action_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ToggleAction_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


#ifndef GTKMM_DISABLE_DEPRECATED

  klass->toggled = &toggled_callback;
#endif // GTKMM_DISABLE_DEPRECATED

}


#ifndef GTKMM_DISABLE_DEPRECATED

void ToggleAction_Class::toggled_callback(GtkToggleAction* self)
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
        obj->on_toggled();
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
  if(base && base->toggled)
    (*base->toggled)(self);
}
#endif // GTKMM_DISABLE_DEPRECATED


Glib::ObjectBase* ToggleAction_Class::wrap_new(GObject* object)
{
  return new ToggleAction((GtkToggleAction*)object);
}


/* The implementation: */

GtkToggleAction* ToggleAction::gobj_copy()
{
  reference();
  return gobj();
}

ToggleAction::ToggleAction(const Glib::ConstructParams& construct_params)
:
  Gtk::Action(construct_params)
{

}

ToggleAction::ToggleAction(GtkToggleAction* castitem)
:
  Gtk::Action((GtkAction*)(castitem))
{}


ToggleAction::ToggleAction(ToggleAction&& src) noexcept
: Gtk::Action(std::move(src))
{}

ToggleAction& ToggleAction::operator=(ToggleAction&& src) noexcept
{
  Gtk::Action::operator=(std::move(src));
  return *this;
}


ToggleAction::~ToggleAction() noexcept
{}


ToggleAction::CppClassType ToggleAction::toggleaction_class_; // initialize static member

GType ToggleAction::get_type()
{
  return toggleaction_class_.init().get_type();
}


GType ToggleAction::get_base_type()
{
  return gtk_toggle_action_get_type();
}


ToggleAction::ToggleAction()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Action(Glib::ConstructParams(toggleaction_class_.init()))
{
  

}

Glib::RefPtr<ToggleAction> ToggleAction::create()
{
  return Glib::RefPtr<ToggleAction>( new ToggleAction() );
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void ToggleAction::toggled()
{
  gtk_toggle_action_toggled(gobj());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void ToggleAction::set_active(bool is_active)
{
  gtk_toggle_action_set_active(gobj(), static_cast<int>(is_active));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool ToggleAction::get_active() const
{
  return gtk_toggle_action_get_active(const_cast<GtkToggleAction*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void ToggleAction::set_draw_as_radio(bool draw_as_radio)
{
  gtk_toggle_action_set_draw_as_radio(gobj(), static_cast<int>(draw_as_radio));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool ToggleAction::get_draw_as_radio() const
{
  return gtk_toggle_action_get_draw_as_radio(const_cast<GtkToggleAction*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::SignalProxy< void > ToggleAction::signal_toggled()
{
  return Glib::SignalProxy< void >(this, &ToggleAction_signal_toggled_info);
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > ToggleAction::property_draw_as_radio() 
{
  return Glib::PropertyProxy< bool >(this, "draw-as-radio");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > ToggleAction::property_draw_as_radio() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "draw-as-radio");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > ToggleAction::property_active() 
{
  return Glib::PropertyProxy< bool >(this, "active");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > ToggleAction::property_active() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "active");
}
#endif // GTKMM_DISABLE_DEPRECATED


void Gtk::ToggleAction::on_toggled()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->toggled)
    (*base->toggled)(gobj());
}


} // namespace Gtk

#endif // GTKMM_DISABLE_DEPRECATED


