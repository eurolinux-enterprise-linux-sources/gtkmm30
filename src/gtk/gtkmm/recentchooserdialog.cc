// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/recentchooserdialog.h>
#include <gtkmm/private/recentchooserdialog_p.h>


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

#include <gtk/gtk.h>


namespace Gtk
{

RecentChooserDialog::RecentChooserDialog(Gtk::Window& parent, const Glib::ustring& title)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Dialog(Glib::ConstructParams(recentchooserdialog_class_.init(), "title",title.c_str(), nullptr))
{
  set_transient_for(parent);
}

RecentChooserDialog::RecentChooserDialog(const Glib::ustring& title)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Dialog(Glib::ConstructParams(recentchooserdialog_class_.init(), "title",title.c_str(), nullptr))
{
}

RecentChooserDialog::RecentChooserDialog(const Glib::ustring& title, const Glib::RefPtr<RecentManager>& recent_manager)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Dialog(Glib::ConstructParams(recentchooserdialog_class_.init(), "title",title.c_str(),"recent-manager",recent_manager->gobj(), nullptr))
{
}

RecentChooserDialog::RecentChooserDialog(Gtk::Window& parent, const Glib::ustring& title, const Glib::RefPtr<RecentManager>& recent_manager)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Dialog(Glib::ConstructParams(recentchooserdialog_class_.init(), "title",title.c_str(),"recent-manager",recent_manager->gobj(), nullptr))
{
  set_transient_for(parent);
}

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::RecentChooserDialog* wrap(GtkRecentChooserDialog* object, bool take_copy)
{
  return dynamic_cast<Gtk::RecentChooserDialog *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& RecentChooserDialog_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &RecentChooserDialog_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_recent_chooser_dialog_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  RecentChooser::add_interface(get_type());

  }

  return *this;
}


void RecentChooserDialog_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* RecentChooserDialog_Class::wrap_new(GObject* o)
{
  return new RecentChooserDialog((GtkRecentChooserDialog*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

RecentChooserDialog::RecentChooserDialog(const Glib::ConstructParams& construct_params)
:
  Gtk::Dialog(construct_params)
{
  }

RecentChooserDialog::RecentChooserDialog(GtkRecentChooserDialog* castitem)
:
  Gtk::Dialog((GtkDialog*)(castitem))
{
  }


RecentChooserDialog::RecentChooserDialog(RecentChooserDialog&& src) noexcept
: Gtk::Dialog(std::move(src))
  , RecentChooser(std::move(src))
{}

RecentChooserDialog& RecentChooserDialog::operator=(RecentChooserDialog&& src) noexcept
{
  Gtk::Dialog::operator=(std::move(src));
  RecentChooser::operator=(std::move(src));
  return *this;
}

RecentChooserDialog::~RecentChooserDialog() noexcept
{
  destroy_();
}

RecentChooserDialog::CppClassType RecentChooserDialog::recentchooserdialog_class_; // initialize static member

GType RecentChooserDialog::get_type()
{
  return recentchooserdialog_class_.init().get_type();
}


GType RecentChooserDialog::get_base_type()
{
  return gtk_recent_chooser_dialog_get_type();
}


} // namespace Gtk


