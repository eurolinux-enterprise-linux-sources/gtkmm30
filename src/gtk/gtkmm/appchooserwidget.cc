// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/appchooserwidget.h>
#include <gtkmm/private/appchooserwidget_p.h>


/* Copyright 2011 The gtkmm Development Team
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


static void AppChooserWidget_signal_application_selected_callback(GtkAppChooserWidget* self, GAppInfo* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gio::AppInfo>& >;

  auto obj = dynamic_cast<AppChooserWidget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo AppChooserWidget_signal_application_selected_info =
{
  "application-selected",
  (GCallback) &AppChooserWidget_signal_application_selected_callback,
  (GCallback) &AppChooserWidget_signal_application_selected_callback
};


static void AppChooserWidget_signal_application_activated_callback(GtkAppChooserWidget* self, GAppInfo* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gio::AppInfo>& >;

  auto obj = dynamic_cast<AppChooserWidget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo AppChooserWidget_signal_application_activated_info =
{
  "application-activated",
  (GCallback) &AppChooserWidget_signal_application_activated_callback,
  (GCallback) &AppChooserWidget_signal_application_activated_callback
};


static void AppChooserWidget_signal_populate_popup_callback(GtkAppChooserWidget* self, GtkMenu* p0,GAppInfo* p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,Menu*,const Glib::RefPtr<Gio::AppInfo>& >;

  auto obj = dynamic_cast<AppChooserWidget*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0)
, Glib::wrap(p1, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo AppChooserWidget_signal_populate_popup_info =
{
  "populate-popup",
  (GCallback) &AppChooserWidget_signal_populate_popup_callback,
  (GCallback) &AppChooserWidget_signal_populate_popup_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::AppChooserWidget* wrap(GtkAppChooserWidget* object, bool take_copy)
{
  return dynamic_cast<Gtk::AppChooserWidget *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& AppChooserWidget_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AppChooserWidget_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_app_chooser_widget_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  AppChooser::add_interface(get_type());

  }

  return *this;
}


void AppChooserWidget_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->application_selected = &application_selected_callback;
  klass->application_activated = &application_activated_callback;
  klass->populate_popup = &populate_popup_callback;
}


void AppChooserWidget_Class::application_selected_callback(GtkAppChooserWidget* self, GAppInfo* p0)
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
        obj->on_application_selected(Glib::wrap(p0, true)
);
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
  if(base && base->application_selected)
    (*base->application_selected)(self, p0);
}
void AppChooserWidget_Class::application_activated_callback(GtkAppChooserWidget* self, GAppInfo* p0)
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
        obj->on_application_activated(Glib::wrap(p0, true)
);
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
  if(base && base->application_activated)
    (*base->application_activated)(self, p0);
}
void AppChooserWidget_Class::populate_popup_callback(GtkAppChooserWidget* self, GtkMenu* p0, GAppInfo* p1)
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
        obj->on_populate_popup(Glib::wrap(p0)
, Glib::wrap(p1, true)
);
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
  if(base && base->populate_popup)
    (*base->populate_popup)(self, p0, p1);
}


Glib::ObjectBase* AppChooserWidget_Class::wrap_new(GObject* o)
{
  return manage(new AppChooserWidget((GtkAppChooserWidget*)(o)));

}


/* The implementation: */

AppChooserWidget::AppChooserWidget(const Glib::ConstructParams& construct_params)
:
  Box(construct_params)
{
  }

AppChooserWidget::AppChooserWidget(GtkAppChooserWidget* castitem)
:
  Box((GtkBox*)(castitem))
{
  }


AppChooserWidget::AppChooserWidget(AppChooserWidget&& src) noexcept
: Box(std::move(src))
  , AppChooser(std::move(src))
{}

AppChooserWidget& AppChooserWidget::operator=(AppChooserWidget&& src) noexcept
{
  Box::operator=(std::move(src));
  AppChooser::operator=(std::move(src));
  return *this;
}

AppChooserWidget::~AppChooserWidget() noexcept
{
  destroy_();
}

AppChooserWidget::CppClassType AppChooserWidget::appchooserwidget_class_; // initialize static member

GType AppChooserWidget::get_type()
{
  return appchooserwidget_class_.init().get_type();
}


GType AppChooserWidget::get_base_type()
{
  return gtk_app_chooser_widget_get_type();
}


AppChooserWidget::AppChooserWidget(const Glib::ustring& content_type)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Box(Glib::ConstructParams(appchooserwidget_class_.init(), "content_type", content_type.c_str(), nullptr))
{
  

}

void AppChooserWidget::set_show_default(bool setting)
{
  gtk_app_chooser_widget_set_show_default(gobj(), static_cast<int>(setting));
}

bool AppChooserWidget::get_show_default()
{
  return gtk_app_chooser_widget_get_show_default(gobj());
}

void AppChooserWidget::set_show_recommended(bool setting)
{
  gtk_app_chooser_widget_set_show_recommended(gobj(), static_cast<int>(setting));
}

bool AppChooserWidget::get_show_recommended() const
{
  return gtk_app_chooser_widget_get_show_recommended(const_cast<GtkAppChooserWidget*>(gobj()));
}

void AppChooserWidget::set_show_fallback(bool setting)
{
  gtk_app_chooser_widget_set_show_fallback(gobj(), static_cast<int>(setting));
}

bool AppChooserWidget::get_show_fallback() const
{
  return gtk_app_chooser_widget_get_show_fallback(const_cast<GtkAppChooserWidget*>(gobj()));
}

void AppChooserWidget::set_show_other(bool setting)
{
  gtk_app_chooser_widget_set_show_other(gobj(), static_cast<int>(setting));
}

bool AppChooserWidget::get_show_other() const
{
  return gtk_app_chooser_widget_get_show_other(const_cast<GtkAppChooserWidget*>(gobj()));
}

void AppChooserWidget::set_show_all(bool setting)
{
  gtk_app_chooser_widget_set_show_all(gobj(), static_cast<int>(setting));
}

bool AppChooserWidget::get_show_all() const
{
  return gtk_app_chooser_widget_get_show_all(const_cast<GtkAppChooserWidget*>(gobj()));
}

void AppChooserWidget::set_default_text(const Glib::ustring& text)
{
  gtk_app_chooser_widget_set_default_text(gobj(), text.c_str());
}

Glib::ustring AppChooserWidget::get_default_text()
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_app_chooser_widget_get_default_text(gobj()));
}


Glib::SignalProxy< void,const Glib::RefPtr<Gio::AppInfo>& > AppChooserWidget::signal_application_selected()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gio::AppInfo>& >(this, &AppChooserWidget_signal_application_selected_info);
}


Glib::SignalProxy< void,const Glib::RefPtr<Gio::AppInfo>& > AppChooserWidget::signal_application_activated()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gio::AppInfo>& >(this, &AppChooserWidget_signal_application_activated_info);
}


Glib::SignalProxy< void,Menu*,const Glib::RefPtr<Gio::AppInfo>& > AppChooserWidget::signal_populate_popup()
{
  return Glib::SignalProxy< void,Menu*,const Glib::RefPtr<Gio::AppInfo>& >(this, &AppChooserWidget_signal_populate_popup_info);
}


Glib::PropertyProxy< bool > AppChooserWidget::property_show_default() 
{
  return Glib::PropertyProxy< bool >(this, "show-default");
}

Glib::PropertyProxy_ReadOnly< bool > AppChooserWidget::property_show_default() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-default");
}

Glib::PropertyProxy< bool > AppChooserWidget::property_show_recommended() 
{
  return Glib::PropertyProxy< bool >(this, "show-recommended");
}

Glib::PropertyProxy_ReadOnly< bool > AppChooserWidget::property_show_recommended() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-recommended");
}

Glib::PropertyProxy< bool > AppChooserWidget::property_show_fallback() 
{
  return Glib::PropertyProxy< bool >(this, "show-fallback");
}

Glib::PropertyProxy_ReadOnly< bool > AppChooserWidget::property_show_fallback() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-fallback");
}

Glib::PropertyProxy< bool > AppChooserWidget::property_show_other() 
{
  return Glib::PropertyProxy< bool >(this, "show-other");
}

Glib::PropertyProxy_ReadOnly< bool > AppChooserWidget::property_show_other() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-other");
}

Glib::PropertyProxy< bool > AppChooserWidget::property_show_all() 
{
  return Glib::PropertyProxy< bool >(this, "show-all");
}

Glib::PropertyProxy_ReadOnly< bool > AppChooserWidget::property_show_all() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-all");
}

Glib::PropertyProxy< Glib::ustring > AppChooserWidget::property_default_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "default-text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AppChooserWidget::property_default_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "default-text");
}


void Gtk::AppChooserWidget::on_application_selected(const Glib::RefPtr<Gio::AppInfo>& app_info)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->application_selected)
    (*base->application_selected)(gobj(),const_cast<GAppInfo*>(Glib::unwrap<Gio::AppInfo>(app_info)));
}
void Gtk::AppChooserWidget::on_application_activated(const Glib::RefPtr<Gio::AppInfo>& app_info)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->application_activated)
    (*base->application_activated)(gobj(),const_cast<GAppInfo*>(Glib::unwrap<Gio::AppInfo>(app_info)));
}
void Gtk::AppChooserWidget::on_populate_popup(Menu* menu, const Glib::RefPtr<Gio::AppInfo>& app_info)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->populate_popup)
    (*base->populate_popup)(gobj(),(GtkMenu*)Glib::unwrap(menu),const_cast<GAppInfo*>(Glib::unwrap<Gio::AppInfo>(app_info)));
}


} // namespace Gtk


