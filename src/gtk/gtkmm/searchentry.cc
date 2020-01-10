// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/searchentry.h>
#include <gtkmm/private/searchentry_p.h>


/* Copyright 2012 The gtkmm Development Team
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

}

namespace
{


static const Glib::SignalProxyInfo SearchEntry_signal_search_changed_info =
{
  "search-changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo SearchEntry_signal_next_match_info =
{
  "next-match",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo SearchEntry_signal_previous_match_info =
{
  "previous-match",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo SearchEntry_signal_stop_search_info =
{
  "stop-search",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::SearchEntry* wrap(GtkSearchEntry* object, bool take_copy)
{
  return dynamic_cast<Gtk::SearchEntry *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& SearchEntry_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SearchEntry_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_search_entry_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void SearchEntry_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SearchEntry_Class::wrap_new(GObject* o)
{
  return manage(new SearchEntry((GtkSearchEntry*)(o)));

}


/* The implementation: */

SearchEntry::SearchEntry(const Glib::ConstructParams& construct_params)
:
  Gtk::Entry(construct_params)
{
  }

SearchEntry::SearchEntry(GtkSearchEntry* castitem)
:
  Gtk::Entry((GtkEntry*)(castitem))
{
  }


SearchEntry::SearchEntry(SearchEntry&& src) noexcept
: Gtk::Entry(std::move(src))
{}

SearchEntry& SearchEntry::operator=(SearchEntry&& src) noexcept
{
  Gtk::Entry::operator=(std::move(src));
  return *this;
}

SearchEntry::~SearchEntry() noexcept
{
  destroy_();
}

SearchEntry::CppClassType SearchEntry::searchentry_class_; // initialize static member

GType SearchEntry::get_type()
{
  return searchentry_class_.init().get_type();
}


GType SearchEntry::get_base_type()
{
  return gtk_search_entry_get_type();
}


SearchEntry::SearchEntry()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Entry(Glib::ConstructParams(searchentry_class_.init()))
{
  

}

bool SearchEntry::handle_event(GdkEventKey* gdk_event)
{
  return gtk_search_entry_handle_event(gobj(), ((GdkEvent*)(gdk_event)));
}


Glib::SignalProxy< void > SearchEntry::signal_search_changed()
{
  return Glib::SignalProxy< void >(this, &SearchEntry_signal_search_changed_info);
}


Glib::SignalProxy< void > SearchEntry::signal_next_match()
{
  return Glib::SignalProxy< void >(this, &SearchEntry_signal_next_match_info);
}


Glib::SignalProxy< void > SearchEntry::signal_previous_match()
{
  return Glib::SignalProxy< void >(this, &SearchEntry_signal_previous_match_info);
}


Glib::SignalProxy< void > SearchEntry::signal_stop_search()
{
  return Glib::SignalProxy< void >(this, &SearchEntry_signal_stop_search_info);
}


} // namespace Gtk


