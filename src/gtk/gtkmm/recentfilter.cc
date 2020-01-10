// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/recentfilter.h>
#include <gtkmm/private/recentfilter_p.h>


/* Copyright (C) 2006 The gtkmm Development Team
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

#include <glibmm/ustring.h>

// This Signal Proxy allows the C++ coder to specify a sigc::slot instead of a static function.

static gboolean SignalProxy_Custom_gtk_callback(const GtkRecentFilterInfo* filter_info, gpointer data)
{
  const Gtk::RecentFilter::SlotCustom* the_slot = static_cast<Gtk::RecentFilter::SlotCustom*>(data);

  try
  {
    // Create a suitable C++ instance to pass to the C++ method:
    Gtk::RecentFilter::Info cppInfo;
    cppInfo.contains = (Gtk::RecentFilterFlags)filter_info->contains;
    cppInfo.uri = Glib::convert_const_gchar_ptr_to_ustring(filter_info->uri);
    cppInfo.display_name = Glib::convert_const_gchar_ptr_to_ustring(filter_info->display_name);
    cppInfo.mime_type = Glib::convert_const_gchar_ptr_to_ustring(filter_info->mime_type);

    // Create string lists from char**s.

    for(int i = 0; filter_info->groups[i] != 0; ++i)
    {
      cppInfo.groups.push_back( Glib::convert_const_gchar_ptr_to_ustring(filter_info->groups[i]) );
    }
    for(int i = 0; filter_info->applications[i] != 0; ++i)
    {
      cppInfo.applications.push_back( Glib::convert_const_gchar_ptr_to_ustring(filter_info->applications[i]) );
    }

    cppInfo.age = filter_info->age;

    return (*the_slot)(cppInfo);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
    return false; // arbitrary default;
  }
}

static void SignalProxy_Custom_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::RecentFilter::SlotCustom*>(data);
}

namespace Gtk
{

RecentFilter::Info::Info()
: contains(Gtk::RECENT_FILTER_MIME_TYPE), //arbitrary default
  age(0)
{
}

void RecentFilter::add_custom(RecentFilterFlags needed, const SlotCustom& slot)
{
  // Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  // It will be deleted when SignalProxy_Custom_gtk_callback_destroy() is called.
  SlotCustom* slot_copy = new SlotCustom(slot);

  gtk_recent_filter_add_custom(gobj(), (GtkRecentFilterFlags)needed,
                               &SignalProxy_Custom_gtk_callback,
                               slot_copy,
                               &SignalProxy_Custom_gtk_callback_destroy);
}

} // namespace Gtk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::RecentFilterFlags>::value_type()
{
  return gtk_recent_filter_flags_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::RecentFilter> wrap(GtkRecentFilter* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::RecentFilter>( dynamic_cast<Gtk::RecentFilter*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& RecentFilter_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &RecentFilter_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_recent_filter_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void RecentFilter_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* RecentFilter_Class::wrap_new(GObject* object)
{
  return new RecentFilter((GtkRecentFilter*)object);
}


/* The implementation: */

GtkRecentFilter* RecentFilter::gobj_copy()
{
  reference();
  return gobj();
}

RecentFilter::RecentFilter(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{
   if(gobject_ && g_object_is_floating (gobject_))
     g_object_ref_sink(gobject_); //Stops it from being floating.

}

RecentFilter::RecentFilter(GtkRecentFilter* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


RecentFilter::~RecentFilter()
{}


RecentFilter::CppClassType RecentFilter::recentfilter_class_; // initialize static member

GType RecentFilter::get_type()
{
  return recentfilter_class_.init().get_type();
}


GType RecentFilter::get_base_type()
{
  return gtk_recent_filter_get_type();
}


RecentFilter::RecentFilter()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(recentfilter_class_.init()))
{
  
   if(gobject_ && g_object_is_floating (gobject_))
     g_object_ref_sink(gobject_); //Stops it from being floating.

}

Glib::RefPtr<RecentFilter> RecentFilter::create()
{
  return Glib::RefPtr<RecentFilter>( new RecentFilter() );
}

void RecentFilter::set_name(const Glib::ustring& name)
{
  gtk_recent_filter_set_name(gobj(), name.c_str());
}

Glib::ustring RecentFilter::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_recent_filter_get_name(const_cast<GtkRecentFilter*>(gobj())));
}

void RecentFilter::add_mime_type(const Glib::ustring& mime_type)
{
  gtk_recent_filter_add_mime_type(gobj(), mime_type.c_str());
}

void RecentFilter::add_pattern(const Glib::ustring& pattern)
{
  gtk_recent_filter_add_pattern(gobj(), pattern.c_str());
}

void RecentFilter::add_pixbuf_formats()
{
  gtk_recent_filter_add_pixbuf_formats(gobj());
}

void RecentFilter::add_application(const Glib::ustring& application)
{
  gtk_recent_filter_add_application(gobj(), application.c_str());
}

void RecentFilter::add_group(const Glib::ustring& group)
{
  gtk_recent_filter_add_group(gobj(), group.c_str());
}

void RecentFilter::add_age(int days)
{
  gtk_recent_filter_add_age(gobj(), days);
}

RecentFilterFlags RecentFilter::get_needed() const
{
  return (RecentFilterFlags)gtk_recent_filter_get_needed(const_cast<GtkRecentFilter*>(gobj()));
}


} // namespace Gtk


