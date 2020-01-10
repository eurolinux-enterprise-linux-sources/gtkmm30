// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/recentchooser.h>
#include <gtkmm/private/recentchooser_p.h>


/* Copyright 2006 The gtkmm Development Team
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

#include <glibmm/vectorutils.h>

#include <gtk/gtk.h>

// This Signal Proxy allows the C++ coder to specify a sigc::slot instead of a static function.

static int SignalProxy_Compare_gtk_callback(GtkRecentInfo* a, GtkRecentInfo* b, gpointer data)
{
  const auto the_slot = static_cast<Gtk::RecentChooser::SlotCompare*>(data);

  try
  {
    return (*the_slot)(Glib::wrap(a, true /* take reference */), Glib::wrap(b, true /* take reference */));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return 0;
}

static void SignalProxy_Compare_gtk_callback_destroy(gpointer data)
{
  delete static_cast<Gtk::RecentChooser::SlotCompare*>(data);
}


namespace Gtk
{

void RecentChooser::set_sort_func(const SlotCompare& slot)
{
  auto slot_copy = new SlotCompare(slot);

  gtk_recent_chooser_set_sort_func(
      gobj(),
      &SignalProxy_Compare_gtk_callback, slot_copy,
      &SignalProxy_Compare_gtk_callback_destroy);
}

std::vector<Glib::ustring> RecentChooser::get_uris() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(gtk_recent_chooser_get_uris(const_cast<GtkRecentChooser*>(gobj()), nullptr), Glib::OWNERSHIP_DEEP);
}

void RecentChooser::unset_limit()
{
  gtk_recent_chooser_set_limit(gobj(), -1 /* See C docs */);
}

} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo RecentChooser_signal_selection_changed_info =
{
  "selection-changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo RecentChooser_signal_item_activated_info =
{
  "item-activated",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::RecentSortType>::value_type()
{
  return gtk_recent_sort_type_get_type();
}


Gtk::RecentChooserError::RecentChooserError(Gtk::RecentChooserError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (GTK_RECENT_CHOOSER_ERROR, error_code, error_message)
{}

Gtk::RecentChooserError::RecentChooserError(GError* gobject)
:
  Glib::Error (gobject)
{}

Gtk::RecentChooserError::Code Gtk::RecentChooserError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gtk::RecentChooserError::throw_func(GError* gobject)
{
  throw Gtk::RecentChooserError(gobject);
}

// static
GType Glib::Value<Gtk::RecentChooserError::Code>::value_type()
{
  return gtk_recent_chooser_error_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::RecentChooser> wrap(GtkRecentChooser* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::RecentChooser>( dynamic_cast<Gtk::RecentChooser*> (Glib::wrap_auto_interface<Gtk::RecentChooser> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& RecentChooser_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &RecentChooser_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_recent_chooser_get_type();
  }

  return *this;
}

void RecentChooser_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);

  klass->get_current_uri = &get_current_uri_vfunc_callback;
  klass->unselect_uri = &unselect_uri_vfunc_callback;
  klass->select_all = &select_all_vfunc_callback;
  klass->unselect_all = &unselect_all_vfunc_callback;
  klass->get_recent_manager = &get_recent_manager_vfunc_callback;
  klass->add_filter = &add_filter_vfunc_callback;
  klass->remove_filter = &remove_filter_vfunc_callback;

  klass->selection_changed = &selection_changed_callback;
  klass->item_activated = &item_activated_callback;
}

gchar* RecentChooser_Class::get_current_uri_vfunc_callback(GtkRecentChooser* self)
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
        return g_strdup((obj->get_current_uri_vfunc()).c_str());
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_current_uri)
    return (*base->get_current_uri)(self);

  using RType = gchar*;
  return RType();
}
void RecentChooser_Class::unselect_uri_vfunc_callback(GtkRecentChooser* self, const gchar* uri)
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
        obj->unselect_uri_vfunc(Glib::convert_const_gchar_ptr_to_ustring(uri)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->unselect_uri)
    (*base->unselect_uri)(self, uri);
}
void RecentChooser_Class::select_all_vfunc_callback(GtkRecentChooser* self)
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
        obj->select_all_vfunc();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->select_all)
    (*base->select_all)(self);
}
void RecentChooser_Class::unselect_all_vfunc_callback(GtkRecentChooser* self)
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
        obj->unselect_all_vfunc();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->unselect_all)
    (*base->unselect_all)(self);
}
GtkRecentManager* RecentChooser_Class::get_recent_manager_vfunc_callback(GtkRecentChooser* self)
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
        return Glib::unwrap(obj->get_recent_manager_vfunc());
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_recent_manager)
    return (*base->get_recent_manager)(self);

  using RType = GtkRecentManager*;
  return RType();
}
void RecentChooser_Class::add_filter_vfunc_callback(GtkRecentChooser* self, GtkRecentFilter* filter)
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
        obj->add_filter_vfunc(Glib::wrap(filter, true)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->add_filter)
    (*base->add_filter)(self, filter);
}
void RecentChooser_Class::remove_filter_vfunc_callback(GtkRecentChooser* self, GtkRecentFilter* filter)
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
        obj->remove_filter_vfunc(Glib::wrap(filter, true)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->remove_filter)
    (*base->remove_filter)(self, filter);
}

void RecentChooser_Class::selection_changed_callback(GtkRecentChooser* self)
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
        obj->on_selection_changed();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->selection_changed)
    (*base->selection_changed)(self);
}
void RecentChooser_Class::item_activated_callback(GtkRecentChooser* self)
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
        obj->on_item_activated();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->item_activated)
    (*base->item_activated)(self);
}


Glib::ObjectBase* RecentChooser_Class::wrap_new(GObject* object)
{
  return new RecentChooser((GtkRecentChooser*)(object));
}


/* The implementation: */

RecentChooser::RecentChooser()
:
  Glib::Interface(recentchooser_class_.init())
{}

RecentChooser::RecentChooser(GtkRecentChooser* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

RecentChooser::RecentChooser(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

RecentChooser::RecentChooser(RecentChooser&& src) noexcept
: Glib::Interface(std::move(src))
{}

RecentChooser& RecentChooser::operator=(RecentChooser&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

RecentChooser::~RecentChooser() noexcept
{}

// static
void RecentChooser::add_interface(GType gtype_implementer)
{
  recentchooser_class_.init().add_interface(gtype_implementer);
}

RecentChooser::CppClassType RecentChooser::recentchooser_class_; // initialize static member

GType RecentChooser::get_type()
{
  return recentchooser_class_.init().get_type();
}


GType RecentChooser::get_base_type()
{
  return gtk_recent_chooser_get_type();
}


void RecentChooser::set_show_private(bool show_private)
{
  gtk_recent_chooser_set_show_private(gobj(), static_cast<int>(show_private));
}

bool RecentChooser::get_show_private() const
{
  return gtk_recent_chooser_get_show_private(const_cast<GtkRecentChooser*>(gobj()));
}

void RecentChooser::set_show_not_found(bool show_not_found)
{
  gtk_recent_chooser_set_show_not_found(gobj(), static_cast<int>(show_not_found));
}

bool RecentChooser::get_show_not_found() const
{
  return gtk_recent_chooser_get_show_not_found(const_cast<GtkRecentChooser*>(gobj()));
}

void RecentChooser::set_select_multiple(bool select_multiple)
{
  gtk_recent_chooser_set_select_multiple(gobj(), static_cast<int>(select_multiple));
}

bool RecentChooser::get_select_multiple() const
{
  return gtk_recent_chooser_get_select_multiple(const_cast<GtkRecentChooser*>(gobj()));
}

void RecentChooser::set_limit(int limit)
{
  gtk_recent_chooser_set_limit(gobj(), limit);
}

int RecentChooser::get_limit() const
{
  return gtk_recent_chooser_get_limit(const_cast<GtkRecentChooser*>(gobj()));
}

void RecentChooser::set_local_only(bool local_only)
{
  gtk_recent_chooser_set_local_only(gobj(), static_cast<int>(local_only));
}

bool RecentChooser::get_local_only() const
{
  return gtk_recent_chooser_get_local_only(const_cast<GtkRecentChooser*>(gobj()));
}

void RecentChooser::set_show_tips(bool show_tips)
{
  gtk_recent_chooser_set_show_tips(gobj(), static_cast<int>(show_tips));
}

bool RecentChooser::get_show_tips() const
{
  return gtk_recent_chooser_get_show_tips(const_cast<GtkRecentChooser*>(gobj()));
}

void RecentChooser::set_show_icons(bool show_icons)
{
  gtk_recent_chooser_set_show_icons(gobj(), static_cast<int>(show_icons));
}

bool RecentChooser::get_show_icons() const
{
  return gtk_recent_chooser_get_show_icons(const_cast<GtkRecentChooser*>(gobj()));
}

void RecentChooser::set_sort_type(RecentSortType sort_type)
{
  gtk_recent_chooser_set_sort_type(gobj(), ((GtkRecentSortType)(sort_type)));
}

RecentSortType RecentChooser::get_sort_type() const
{
  return ((RecentSortType)(gtk_recent_chooser_get_sort_type(const_cast<GtkRecentChooser*>(gobj()))));
}

bool RecentChooser::set_current_uri(const Glib::ustring& uri)
{
  GError* gerror = nullptr;
  bool retvalue = gtk_recent_chooser_set_current_uri(gobj(), uri.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::ustring RecentChooser::get_current_uri() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_recent_chooser_get_current_uri(const_cast<GtkRecentChooser*>(gobj())));
}

Glib::RefPtr<RecentInfo> RecentChooser::get_current_item()
{
  Glib::RefPtr<RecentInfo> retvalue = Glib::wrap(gtk_recent_chooser_get_current_item(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const RecentInfo> RecentChooser::get_current_item() const
{
  Glib::RefPtr<const RecentInfo> retvalue = Glib::wrap(gtk_recent_chooser_get_current_item(const_cast<GtkRecentChooser*>(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

bool RecentChooser::select_uri(const Glib::ustring& uri)
{
  GError* gerror = nullptr;
  bool retvalue = gtk_recent_chooser_select_uri(gobj(), uri.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void RecentChooser::unselect_uri(const Glib::ustring& uri)
{
  gtk_recent_chooser_unselect_uri(gobj(), uri.c_str());
}

void RecentChooser::select_all()
{
  gtk_recent_chooser_select_all(gobj());
}

void RecentChooser::unselect_all()
{
  gtk_recent_chooser_unselect_all(gobj());
}

std::vector<Glib::RefPtr<RecentInfo> > RecentChooser::get_items() const
{
  return Glib::ListHandler<Glib::RefPtr<RecentInfo>, RecentInfoTraits>::list_to_vector(gtk_recent_chooser_get_items(const_cast<GtkRecentChooser*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}

void RecentChooser::add_filter(const Glib::RefPtr<RecentFilter>& filter)
{
  gtk_recent_chooser_add_filter(gobj(), Glib::unwrap(filter));
}

void RecentChooser::remove_filter(const Glib::RefPtr<RecentFilter>& filter)
{
  gtk_recent_chooser_remove_filter(gobj(), Glib::unwrap(filter));
}

std::vector< Glib::RefPtr<RecentFilter> > RecentChooser::list_filters()
{
  return Glib::SListHandler<Glib::RefPtr<RecentFilter> >::slist_to_vector(gtk_recent_chooser_list_filters(gobj()), Glib::OWNERSHIP_SHALLOW);
}

std::vector< Glib::RefPtr<const RecentFilter> > RecentChooser::list_filters() const
{
  return Glib::SListHandler<Glib::RefPtr<const RecentFilter> >::slist_to_vector(gtk_recent_chooser_list_filters(const_cast<GtkRecentChooser*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}

void RecentChooser::set_filter(const Glib::RefPtr<RecentFilter>& filter)
{
  gtk_recent_chooser_set_filter(gobj(), Glib::unwrap(filter));
}

Glib::RefPtr<RecentFilter> RecentChooser::get_filter()
{
  Glib::RefPtr<RecentFilter> retvalue = Glib::wrap(gtk_recent_chooser_get_filter(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const RecentFilter> RecentChooser::get_filter() const
{
  return const_cast<RecentChooser*>(this)->get_filter();
}


Glib::SignalProxy< void > RecentChooser::signal_selection_changed()
{
  return Glib::SignalProxy< void >(this, &RecentChooser_signal_selection_changed_info);
}


Glib::SignalProxy< void > RecentChooser::signal_item_activated()
{
  return Glib::SignalProxy< void >(this, &RecentChooser_signal_item_activated_info);
}


Glib::PropertyProxy< bool > RecentChooser::property_show_private() 
{
  return Glib::PropertyProxy< bool >(this, "show-private");
}

Glib::PropertyProxy_ReadOnly< bool > RecentChooser::property_show_private() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-private");
}

Glib::PropertyProxy< bool > RecentChooser::property_show_tips() 
{
  return Glib::PropertyProxy< bool >(this, "show-tips");
}

Glib::PropertyProxy_ReadOnly< bool > RecentChooser::property_show_tips() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-tips");
}

Glib::PropertyProxy< bool > RecentChooser::property_show_icons() 
{
  return Glib::PropertyProxy< bool >(this, "show-icons");
}

Glib::PropertyProxy_ReadOnly< bool > RecentChooser::property_show_icons() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-icons");
}

Glib::PropertyProxy< bool > RecentChooser::property_show_not_found() 
{
  return Glib::PropertyProxy< bool >(this, "show-not-found");
}

Glib::PropertyProxy_ReadOnly< bool > RecentChooser::property_show_not_found() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-not-found");
}

Glib::PropertyProxy< bool > RecentChooser::property_select_multiple() 
{
  return Glib::PropertyProxy< bool >(this, "select-multiple");
}

Glib::PropertyProxy_ReadOnly< bool > RecentChooser::property_select_multiple() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "select-multiple");
}

Glib::PropertyProxy< bool > RecentChooser::property_local_only() 
{
  return Glib::PropertyProxy< bool >(this, "local-only");
}

Glib::PropertyProxy_ReadOnly< bool > RecentChooser::property_local_only() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "local-only");
}

Glib::PropertyProxy< int > RecentChooser::property_limit() 
{
  return Glib::PropertyProxy< int >(this, "limit");
}

Glib::PropertyProxy_ReadOnly< int > RecentChooser::property_limit() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "limit");
}

Glib::PropertyProxy< RecentSortType > RecentChooser::property_sort_type() 
{
  return Glib::PropertyProxy< RecentSortType >(this, "sort-type");
}

Glib::PropertyProxy_ReadOnly< RecentSortType > RecentChooser::property_sort_type() const
{
  return Glib::PropertyProxy_ReadOnly< RecentSortType >(this, "sort-type");
}

Glib::PropertyProxy< Glib::RefPtr<RecentFilter> > RecentChooser::property_filter() 
{
  return Glib::PropertyProxy< Glib::RefPtr<RecentFilter> >(this, "filter");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<RecentFilter> > RecentChooser::property_filter() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<RecentFilter> >(this, "filter");
}


void Gtk::RecentChooser::on_selection_changed()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->selection_changed)
    (*base->selection_changed)(gobj());
}
void Gtk::RecentChooser::on_item_activated()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->item_activated)
    (*base->item_activated)(gobj());
}

Glib::ustring Gtk::RecentChooser::get_current_uri_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_current_uri)
  {
    Glib::ustring retval(Glib::convert_return_gchar_ptr_to_ustring((*base->get_current_uri)(const_cast<GtkRecentChooser*>(gobj()))));
    return retval;
  }

  using RType = Glib::ustring;
  return RType();
}
void Gtk::RecentChooser::unselect_uri_vfunc(const Glib::ustring& uri) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->unselect_uri)
  {
    (*base->unselect_uri)(gobj(),uri.c_str());
  }
}
void Gtk::RecentChooser::select_all_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->select_all)
  {
    (*base->select_all)(gobj());
  }
}
void Gtk::RecentChooser::unselect_all_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->unselect_all)
  {
    (*base->unselect_all)(gobj());
  }
}
Glib::RefPtr<RecentManager> Gtk::RecentChooser::get_recent_manager_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_recent_manager)
  {
    Glib::RefPtr<RecentManager> retval(Glib::wrap((*base->get_recent_manager)(gobj())));
    return retval;
  }

  using RType = Glib::RefPtr<RecentManager>;
  return RType();
}
void Gtk::RecentChooser::add_filter_vfunc(const Glib::RefPtr<RecentFilter>& filter) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->add_filter)
  {
    (*base->add_filter)(gobj(),Glib::unwrap(filter));
  }
}
void Gtk::RecentChooser::remove_filter_vfunc(const Glib::RefPtr<RecentFilter>& filter) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->remove_filter)
  {
    (*base->remove_filter)(gobj(),Glib::unwrap(filter));
  }
}


} // namespace Gtk


