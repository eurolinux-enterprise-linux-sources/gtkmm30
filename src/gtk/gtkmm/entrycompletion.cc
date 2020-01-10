// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/entrycompletion.h>
#include <gtkmm/private/entrycompletion_p.h>


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

#include <gtkmm/treeiter.h>
#include <gtkmm/entry.h>
#include <gtk/gtk.h>


static gboolean SignalProxy_Match_gtk_callback(GtkEntryCompletion* completion, const gchar* key, GtkTreeIter* iter, gpointer user_data)
{
  Gtk::EntryCompletion::SlotMatch* the_slot = static_cast<Gtk::EntryCompletion::SlotMatch*>(user_data);

  try
  {
    GtkTreeModel* tree_model = gtk_entry_completion_get_model(completion);
    return (*the_slot)(Glib::convert_const_gchar_ptr_to_ustring(key),
                         Gtk::TreeModel::const_iterator(tree_model, iter)
                         );
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return false; //An arbitary default, just to avoid the compiler warning.
}

static void SignalProxy_Match_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::EntryCompletion::SlotMatch*>(data);
}


namespace Gtk
{

void EntryCompletion::unset_model()
{
  gtk_entry_completion_set_model(gobj(), 0);
}

void EntryCompletion::set_match_func(const SlotMatch& slot)
{
  // Create a copy of the slot.  A pointer to this will be passed
  // through the callback's data parameter.  It will be deleted
  // when SignalProxy_Match_gtk_callback_destroy() is called.
  SlotMatch* slot_copy = new SlotMatch(slot);

  gtk_entry_completion_set_match_func(gobj(),
      &SignalProxy_Match_gtk_callback, slot_copy,
      &SignalProxy_Match_gtk_callback_destroy);
}

void EntryCompletion::insert_action_text(const Glib::ustring& text, int index)
{
  gtk_entry_completion_insert_action_text(gobj(), index, text.c_str());
}

void EntryCompletion::insert_action_markup(const Glib::ustring& markup, int index)
{
  gtk_entry_completion_insert_action_markup(gobj(), index, markup.c_str());
}

void EntryCompletion::prepend_action_text(const Glib::ustring& text)
{
  //We know that gtk_entry_completion_insert_action_text() uses gtk_list_store_insert(),
  //and we know that gtk_list_store_insert() prepends if the position is 0, though
  //this is not actually documented.
  gtk_entry_completion_insert_action_text(gobj(), 0, text.c_str());
}

void EntryCompletion::prepend_action_markup(const Glib::ustring& markup)
{
  //We know that gtk_entry_completion_insert_action_markup() uses gtk_list_store_insert(),
  //and we know that gtk_list_store_insert() prepends if the position is 0, though
  //this is not actually documented.
  gtk_entry_completion_insert_action_markup(gobj(), 0 /* See C docs */, markup.c_str());
}

} //namespace Gtk


namespace //anonymous
{

static gboolean Widget_signal_match_selected_callback(GtkEntryCompletion* self, GtkTreeModel* c_model, GtkTreeIter* c_iter, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< bool, const TreeModel::iterator& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
      {
        //This conversion is the custom-written part:
        Gtk::TreeModel::iterator cppIter(c_model, c_iter);

        return static_cast<int>( (*static_cast<SlotType*>(slot))(cppIter) );
      }
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static gboolean Widget_signal_match_selected_notify_callback(GtkEntryCompletion* self, GtkTreeModel* c_model, GtkTreeIter* c_iter, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void, const TreeModel::iterator& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
      {
        //This conversion is the custom-written part:
        Gtk::TreeModel::iterator cppIter(c_model, c_iter);

        (*static_cast<SlotType*>(slot))(cppIter);
      }
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

const Glib::SignalProxyInfo EntryCompletion_signal_match_selected_info =
{
  "match_selected",
  (GCallback) &Widget_signal_match_selected_callback,
  (GCallback) &Widget_signal_match_selected_notify_callback
};


static gboolean Widget_signal_cursor_on_match_callback(GtkEntryCompletion* self, GtkTreeModel* c_model, GtkTreeIter* c_iter, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< bool, const TreeModel::iterator& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
      {
        //This conversion is the custom-written part:
        Gtk::TreeModel::iterator cppIter(c_model, c_iter);

        return static_cast<int>( (*static_cast<SlotType*>(slot))(cppIter) );
      }
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static gboolean Widget_signal_cursor_on_match_notify_callback(GtkEntryCompletion* self, GtkTreeModel* c_model, GtkTreeIter* c_iter, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void, const TreeModel::iterator& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
      {
        //This conversion is the custom-written part:
        Gtk::TreeModel::iterator cppIter(c_model, c_iter);

        (*static_cast<SlotType*>(slot))(cppIter);
      }
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}


const Glib::SignalProxyInfo EntryCompletion_signal_cursor_on_match_info =
{
  "cursor_on_match",
  (GCallback) &Widget_signal_cursor_on_match_callback,
  (GCallback) &Widget_signal_cursor_on_match_notify_callback
};

} //anonymous namespace


namespace Gtk
{

//Hand-coded signal wrapping:

bool Gtk::EntryCompletion::on_match_selected(const TreeModel::iterator& iter)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->match_selected)
    return (*base->match_selected)(gobj(), iter.get_model_gobject(), const_cast<GtkTreeIter*>(iter.gobj()));
  else
  {
    typedef bool RType;
    return RType(); //There should always be an implementation in the C object, so this will never happen.
  }
}

gboolean EntryCompletion_Class::match_selected_callback_custom(GtkEntryCompletion* self, GtkTreeModel* c_model, GtkTreeIter* c_iter)
{
  CppObjectType *const obj = dynamic_cast<CppObjectType*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj && obj->is_derived_())
  {
    try // Trap C++ exceptions which would normally be lost because this is a C callback.
    {
      // Call the virtual member method, which derived classes might override.

      //This conversion is the custom-written part:
      Gtk::TreeModel::iterator cppIter(c_model, c_iter);
      return obj->on_match_selected(cppIter);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }
  else
  {
    BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

    // Call the original underlying C function:
    if(base && base->match_selected)
      return (*base->match_selected)(self, c_model, c_iter);
  }

  typedef gboolean RType;
  return RType();
}

Glib::SignalProxy1< bool, const TreeModel::iterator& > EntryCompletion::signal_match_selected()
{
  return Glib::SignalProxy1< bool, const TreeModel::iterator& >(this, &EntryCompletion_signal_match_selected_info);
}

Glib::SignalProxy1< bool, const TreeModel::iterator& > EntryCompletion::signal_cursor_on_match()
{
  return Glib::SignalProxy1< bool, const TreeModel::iterator& >(this, &EntryCompletion_signal_cursor_on_match_info);
}


} // namespace Gtk

namespace
{


static void EntryCompletion_signal_action_activated_callback(GtkEntryCompletion* self, gint p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,int > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
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

static const Glib::SignalProxyInfo EntryCompletion_signal_action_activated_info =
{
  "action_activated",
  (GCallback) &EntryCompletion_signal_action_activated_callback,
  (GCallback) &EntryCompletion_signal_action_activated_callback
};


static gboolean EntryCompletion_signal_insert_prefix_callback(GtkEntryCompletion* self, const gchar* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< bool,const Glib::ustring& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
));
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

static gboolean EntryCompletion_signal_insert_prefix_notify_callback(GtkEntryCompletion* self, const gchar* p0, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::ustring& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
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

static const Glib::SignalProxyInfo EntryCompletion_signal_insert_prefix_info =
{
  "insert_prefix",
  (GCallback) &EntryCompletion_signal_insert_prefix_callback,
  (GCallback) &EntryCompletion_signal_insert_prefix_notify_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::EntryCompletion> wrap(GtkEntryCompletion* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::EntryCompletion>( dynamic_cast<Gtk::EntryCompletion*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& EntryCompletion_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &EntryCompletion_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_entry_completion_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  CellLayout::add_interface(get_type());
  Buildable::add_interface(get_type());

  }

  return *this;
}


void EntryCompletion_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->action_activated = &action_activated_callback;
    klass->match_selected = &match_selected_callback_custom;
    klass->insert_prefix = &insert_prefix_callback;
}


void EntryCompletion_Class::action_activated_callback(GtkEntryCompletion* self, gint p0)
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
        obj->on_action_activated(p0
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
  if(base && base->action_activated)
    (*base->action_activated)(self, p0);
}
gboolean EntryCompletion_Class::insert_prefix_callback(GtkEntryCompletion* self, const gchar* p0)
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
        return static_cast<int>(obj->on_insert_prefix(Glib::convert_const_gchar_ptr_to_ustring(p0)
));
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
  if(base && base->insert_prefix)
    return (*base->insert_prefix)(self, p0);

  typedef gboolean RType;
  return RType();
}


Glib::ObjectBase* EntryCompletion_Class::wrap_new(GObject* object)
{
  return new EntryCompletion((GtkEntryCompletion*)object);
}


/* The implementation: */

GtkEntryCompletion* EntryCompletion::gobj_copy()
{
  reference();
  return gobj();
}

EntryCompletion::EntryCompletion(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

EntryCompletion::EntryCompletion(GtkEntryCompletion* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


EntryCompletion::~EntryCompletion()
{}


EntryCompletion::CppClassType EntryCompletion::entrycompletion_class_; // initialize static member

GType EntryCompletion::get_type()
{
  return entrycompletion_class_.init().get_type();
}


GType EntryCompletion::get_base_type()
{
  return gtk_entry_completion_get_type();
}


EntryCompletion::EntryCompletion()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(entrycompletion_class_.init()))
{
  

}

Glib::RefPtr<EntryCompletion> EntryCompletion::create()
{
  return Glib::RefPtr<EntryCompletion>( new EntryCompletion() );
}

Entry* EntryCompletion::get_entry()
{
  return Glib::wrap((GtkEntry*)(gtk_entry_completion_get_entry(gobj())));
}

const Entry* EntryCompletion::get_entry() const
{
  return Glib::wrap((GtkEntry*)(gtk_entry_completion_get_entry(const_cast<GtkEntryCompletion*>(gobj()))));
}

void EntryCompletion::set_model(const Glib::RefPtr<TreeModel>& model)
{
  gtk_entry_completion_set_model(gobj(), Glib::unwrap(model));
}

Glib::RefPtr<TreeModel> EntryCompletion::get_model()
{
  Glib::RefPtr<TreeModel> retvalue = Glib::wrap(gtk_entry_completion_get_model(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const TreeModel> EntryCompletion::get_model() const
{
  return const_cast<EntryCompletion*>(this)->get_model();
}

void EntryCompletion::set_minimum_key_length(int length)
{
  gtk_entry_completion_set_minimum_key_length(gobj(), length);
}

int EntryCompletion::get_minimum_key_length() const
{
  return gtk_entry_completion_get_minimum_key_length(const_cast<GtkEntryCompletion*>(gobj()));
}

Glib::ustring EntryCompletion::compute_prefix(const Glib::ustring& key)
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_entry_completion_compute_prefix(gobj(), key.c_str()));
}

void EntryCompletion::complete()
{
  gtk_entry_completion_complete(gobj());
}

void EntryCompletion::insert_prefix()
{
  gtk_entry_completion_insert_prefix(gobj());
}

void EntryCompletion::delete_action(int index)
{
  gtk_entry_completion_delete_action(gobj(), index);
}

void EntryCompletion::set_inline_completion(bool inline_completion)
{
  gtk_entry_completion_set_inline_completion(gobj(), static_cast<int>(inline_completion));
}

bool EntryCompletion::get_inline_completion() const
{
  return gtk_entry_completion_get_inline_completion(const_cast<GtkEntryCompletion*>(gobj()));
}

void EntryCompletion::set_inline_selection(bool inline_selection)
{
  gtk_entry_completion_set_inline_selection(gobj(), static_cast<int>(inline_selection));
}

bool EntryCompletion::get_inline_selection() const
{
  return gtk_entry_completion_get_inline_selection(const_cast<GtkEntryCompletion*>(gobj()));
}

void EntryCompletion::set_popup_completion(bool popup_completion)
{
  gtk_entry_completion_set_popup_completion(gobj(), static_cast<int>(popup_completion));
}

bool EntryCompletion::get_popup_completion() const
{
  return gtk_entry_completion_get_popup_completion(const_cast<GtkEntryCompletion*>(gobj()));
}

void EntryCompletion::set_popup_set_width(bool popup_set_width)
{
  gtk_entry_completion_set_popup_set_width(gobj(), static_cast<int>(popup_set_width));
}

bool EntryCompletion::get_popup_set_width() const
{
  return gtk_entry_completion_get_popup_set_width(const_cast<GtkEntryCompletion*>(gobj()));
}

void EntryCompletion::set_popup_single_match(bool popup_single_match)
{
  gtk_entry_completion_set_popup_single_match(gobj(), static_cast<int>(popup_single_match));
}

bool EntryCompletion::get_popup_single_match() const
{
  return gtk_entry_completion_get_popup_single_match(const_cast<GtkEntryCompletion*>(gobj()));
}

Glib::ustring EntryCompletion::get_completion_prefix() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_entry_completion_get_completion_prefix(const_cast<GtkEntryCompletion*>(gobj())));
}

void EntryCompletion::set_text_column(const TreeModelColumnBase& column)
{
  gtk_entry_completion_set_text_column(gobj(), (column).index());
}

void EntryCompletion::set_text_column(int column)
{
  gtk_entry_completion_set_text_column(gobj(), column);
}

int EntryCompletion::get_text_column() const
{
  return gtk_entry_completion_get_text_column(const_cast<GtkEntryCompletion*>(gobj()));
}


Glib::SignalProxy1< void,int > EntryCompletion::signal_action_activated()
{
  return Glib::SignalProxy1< void,int >(this, &EntryCompletion_signal_action_activated_info);
}


Glib::SignalProxy1< bool,const Glib::ustring& > EntryCompletion::signal_insert_prefix()
{
  return Glib::SignalProxy1< bool,const Glib::ustring& >(this, &EntryCompletion_signal_insert_prefix_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<Gtk::TreeModel> > EntryCompletion::property_model() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gtk::TreeModel> >(this, "model");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gtk::TreeModel> > EntryCompletion::property_model() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gtk::TreeModel> >(this, "model");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > EntryCompletion::property_minimum_key_length() 
{
  return Glib::PropertyProxy< int >(this, "minimum-key-length");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > EntryCompletion::property_minimum_key_length() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "minimum-key-length");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > EntryCompletion::property_text_column() 
{
  return Glib::PropertyProxy< int >(this, "text-column");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > EntryCompletion::property_text_column() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "text-column");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > EntryCompletion::property_inline_completion() 
{
  return Glib::PropertyProxy< bool >(this, "inline-completion");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > EntryCompletion::property_inline_completion() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "inline-completion");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > EntryCompletion::property_popup_completion() 
{
  return Glib::PropertyProxy< bool >(this, "popup-completion");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > EntryCompletion::property_popup_completion() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "popup-completion");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > EntryCompletion::property_popup_set_width() 
{
  return Glib::PropertyProxy< bool >(this, "popup-set-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > EntryCompletion::property_popup_set_width() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "popup-set-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > EntryCompletion::property_popup_single_match() 
{
  return Glib::PropertyProxy< bool >(this, "popup-single-match");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > EntryCompletion::property_popup_single_match() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "popup-single-match");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > EntryCompletion::property_inline_selection() 
{
  return Glib::PropertyProxy< bool >(this, "inline-selection");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > EntryCompletion::property_inline_selection() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "inline-selection");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<CellArea> > EntryCompletion::property_cell_area() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<CellArea> >(this, "cell-area");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Gtk::EntryCompletion::on_action_activated(int index)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->action_activated)
    (*base->action_activated)(gobj(),index);
}
bool Gtk::EntryCompletion::on_insert_prefix(const Glib::ustring& prefix)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->insert_prefix)
    return (*base->insert_prefix)(gobj(),prefix.c_str());

  typedef bool RType;
  return RType();
}


} // namespace Gtk


