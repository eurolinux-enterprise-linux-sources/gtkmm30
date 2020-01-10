// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/comboboxtext.h>
#include <gtkmm/private/comboboxtext_p.h>


/*
 * Copyright 2010 The gtkmm Development Team
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

ComboBoxText::ComboBoxText(bool has_entry)
:
  //The entry-text-column and id-column values are copied from gtk_combo_box_text_new():
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  ComboBox(Glib::ConstructParams(comboboxtext_class_.init(), "has-entry",gboolean(has_entry), nullptr))
{}

void ComboBoxText::set_active_text(const Glib::ustring& text)
{
  //Look for the row with this text, and activate it:
  auto model = get_model();
  if(model)
  {
    for(const auto& row : model->children())
    {
      Glib::ustring this_text;
      row.get_value(0, this_text);

      if(this_text == text)
      {
        set_active(row);
        return; //success
      }
    }
  }

  //Not found, so mark it as blank:
  unset_active();
}

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::ComboBoxText* wrap(GtkComboBoxText* object, bool take_copy)
{
  return dynamic_cast<Gtk::ComboBoxText *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ComboBoxText_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ComboBoxText_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_combo_box_text_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ComboBoxText_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ComboBoxText_Class::wrap_new(GObject* o)
{
  return manage(new ComboBoxText((GtkComboBoxText*)(o)));

}


/* The implementation: */

ComboBoxText::ComboBoxText(const Glib::ConstructParams& construct_params)
:
  ComboBox(construct_params)
{
  }

ComboBoxText::ComboBoxText(GtkComboBoxText* castitem)
:
  ComboBox((GtkComboBox*)(castitem))
{
  }


ComboBoxText::ComboBoxText(ComboBoxText&& src) noexcept
: ComboBox(std::move(src))
{}

ComboBoxText& ComboBoxText::operator=(ComboBoxText&& src) noexcept
{
  ComboBox::operator=(std::move(src));
  return *this;
}

ComboBoxText::~ComboBoxText() noexcept
{
  destroy_();
}

ComboBoxText::CppClassType ComboBoxText::comboboxtext_class_; // initialize static member

GType ComboBoxText::get_type()
{
  return comboboxtext_class_.init().get_type();
}


GType ComboBoxText::get_base_type()
{
  return gtk_combo_box_text_get_type();
}


void ComboBoxText::append(const Glib::ustring& text)
{
  gtk_combo_box_text_append_text(gobj(), text.c_str());
}

void ComboBoxText::append(const Glib::ustring& id, const Glib::ustring& text)
{
  gtk_combo_box_text_append(gobj(), id.c_str(), text.c_str());
}

void ComboBoxText::insert(int position, const Glib::ustring& text)
{
  gtk_combo_box_text_insert_text(gobj(), position, text.c_str());
}

void ComboBoxText::insert(int position, const Glib::ustring& id, const Glib::ustring& text)
{
  gtk_combo_box_text_insert(gobj(), position, id.c_str(), text.c_str());
}

void ComboBoxText::prepend(const Glib::ustring& text)
{
  gtk_combo_box_text_prepend_text(gobj(), text.c_str());
}

void ComboBoxText::prepend(const Glib::ustring& id, const Glib::ustring& text)
{
  gtk_combo_box_text_prepend(gobj(), id.c_str(), text.c_str());
}

void ComboBoxText::remove_text(int position)
{
  gtk_combo_box_text_remove(gobj(), position);
}

Glib::ustring ComboBoxText::get_active_text() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_combo_box_text_get_active_text(const_cast<GtkComboBoxText*>(gobj())));
}

void ComboBoxText::remove_all()
{
  gtk_combo_box_text_remove_all(gobj());
}


} // namespace Gtk


