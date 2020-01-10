// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/glarea.h>
#include <gtkmm/private/glarea_p.h>


/*
 * Copyright (C) 2015 The gtkmm Development Team
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

bool GLArea::has_error() const
{
  return gtk_gl_area_get_error(const_cast<GtkGLArea*>(gobj()));
}

void GLArea::throw_if_error() const
{
  GError* error = gtk_gl_area_get_error(const_cast<GtkGLArea*>(gobj()));
  if(error)
  {
    Glib::Error::throw_exception(g_error_copy(error));
  }
}

void GLArea::unset_error()
{
  gtk_gl_area_set_error(gobj(), nullptr);
}

} //namespace Gtk

namespace
{


static GdkGLContext* GLArea_signal_create_context_callback(GtkGLArea* self, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< Glib::RefPtr<Gdk::GLContext> >;

  auto obj = dynamic_cast<GLArea*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return Glib::unwrap_copy((*static_cast<SlotType*>(slot))());
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = GdkGLContext*;
  return RType();
}

static GdkGLContext* GLArea_signal_create_context_notify_callback(GtkGLArea* self,  void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void >;

  auto obj = dynamic_cast<GLArea*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))();
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = GdkGLContext*;
  return RType();
}

static const Glib::SignalProxyInfo GLArea_signal_create_context_info =
{
  "create_context",
  (GCallback) &GLArea_signal_create_context_callback,
  (GCallback) &GLArea_signal_create_context_notify_callback
};


static gboolean GLArea_signal_render_callback(GtkGLArea* self, GdkGLContext* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< bool,const Glib::RefPtr<Gdk::GLContext>& >;

  auto obj = dynamic_cast<GLArea*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static gboolean GLArea_signal_render_notify_callback(GtkGLArea* self, GdkGLContext* p0, void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gdk::GLContext>& >;

  auto obj = dynamic_cast<GLArea*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

  using RType = gboolean;
  return RType();
}

static const Glib::SignalProxyInfo GLArea_signal_render_info =
{
  "render",
  (GCallback) &GLArea_signal_render_callback,
  (GCallback) &GLArea_signal_render_notify_callback
};


static void GLArea_signal_resize_callback(GtkGLArea* self, gint p0,gint p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot< void,int,int >;

  auto obj = dynamic_cast<GLArea*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
, p1
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo GLArea_signal_resize_info =
{
  "resize",
  (GCallback) &GLArea_signal_resize_callback,
  (GCallback) &GLArea_signal_resize_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::GLArea* wrap(GtkGLArea* object, bool take_copy)
{
  return dynamic_cast<Gtk::GLArea *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& GLArea_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GLArea_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_gl_area_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GLArea_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->create_context = &create_context_callback;
  klass->render = &render_callback;
  klass->resize = &resize_callback;
}


GdkGLContext* GLArea_Class::create_context_callback(GtkGLArea* self)
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
        return Glib::unwrap_copy(obj->on_create_context());
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
  if(base && base->create_context)
    return (*base->create_context)(self);

  using RType = GdkGLContext*;
  return RType();
}
gboolean GLArea_Class::render_callback(GtkGLArea* self, GdkGLContext* p0)
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
        return static_cast<int>(obj->on_render(Glib::wrap(p0, true)
));
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
  if(base && base->render)
    return (*base->render)(self, p0);

  using RType = gboolean;
  return RType();
}
void GLArea_Class::resize_callback(GtkGLArea* self, gint p0, gint p1)
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
        obj->on_resize(p0
, p1
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
  if(base && base->resize)
    (*base->resize)(self, p0, p1);
}


Glib::ObjectBase* GLArea_Class::wrap_new(GObject* o)
{
  return manage(new GLArea((GtkGLArea*)(o)));

}


/* The implementation: */

GLArea::GLArea(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

GLArea::GLArea(GtkGLArea* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


GLArea::GLArea(GLArea&& src) noexcept
: Gtk::Widget(std::move(src))
{}

GLArea& GLArea::operator=(GLArea&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  return *this;
}

GLArea::~GLArea() noexcept
{
  destroy_();
}

GLArea::CppClassType GLArea::glarea_class_; // initialize static member

GType GLArea::get_type()
{
  return glarea_class_.init().get_type();
}


GType GLArea::get_base_type()
{
  return gtk_gl_area_get_type();
}


GLArea::GLArea()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(glarea_class_.init()))
{
  

}

Glib::RefPtr<Gdk::GLContext> GLArea::get_context()
{
  Glib::RefPtr<Gdk::GLContext> retvalue = Glib::wrap(gtk_gl_area_get_context(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::GLContext> GLArea::get_context() const
{
  return const_cast<GLArea*>(this)->get_context();
}

void GLArea::make_current()
{
  gtk_gl_area_make_current(gobj());
}

void GLArea::queue_render()
{
  gtk_gl_area_queue_render(gobj());
}

void GLArea::attach_buffers()
{
  gtk_gl_area_attach_buffers(gobj());
}

void GLArea::set_error(const Glib::Error& error)
{
  gtk_gl_area_set_error(gobj(), (error).gobj());
}

bool GLArea::get_has_alpha() const
{
  return gtk_gl_area_get_has_alpha(const_cast<GtkGLArea*>(gobj()));
}

void GLArea::set_has_alpha(bool has_alpha)
{
  gtk_gl_area_set_has_alpha(gobj(), static_cast<int>(has_alpha));
}

bool GLArea::get_has_depth_buffer() const
{
  return gtk_gl_area_get_has_depth_buffer(const_cast<GtkGLArea*>(gobj()));
}

void GLArea::set_has_depth_buffer(bool has_depth_buffer)
{
  gtk_gl_area_set_has_depth_buffer(gobj(), static_cast<int>(has_depth_buffer));
}

bool GLArea::get_has_stencil_buffer() const
{
  return gtk_gl_area_get_has_stencil_buffer(const_cast<GtkGLArea*>(gobj()));
}

void GLArea::set_has_stencil_buffer(bool has_stencil_buffer)
{
  gtk_gl_area_set_has_stencil_buffer(gobj(), static_cast<int>(has_stencil_buffer));
}

bool GLArea::get_auto_render() const
{
  return gtk_gl_area_get_auto_render(const_cast<GtkGLArea*>(gobj()));
}

void GLArea::set_auto_render(bool auto_render)
{
  gtk_gl_area_set_auto_render(gobj(), static_cast<int>(auto_render));
}

void GLArea::get_required_version(int& major, int& minor) const
{
  gtk_gl_area_get_required_version(const_cast<GtkGLArea*>(gobj()), &(major), &(minor));
}

void GLArea::set_required_version(int major, int minor)
{
  gtk_gl_area_set_required_version(gobj(), major, minor);
}

bool GLArea::get_use_es() const
{
  return gtk_gl_area_get_use_es(const_cast<GtkGLArea*>(gobj()));
}

void GLArea::set_use_es(bool use_es)
{
  gtk_gl_area_set_use_es(gobj(), static_cast<int>(use_es));
}


Glib::SignalProxy< Glib::RefPtr<Gdk::GLContext> > GLArea::signal_create_context()
{
  return Glib::SignalProxy< Glib::RefPtr<Gdk::GLContext> >(this, &GLArea_signal_create_context_info);
}


Glib::SignalProxy< bool,const Glib::RefPtr<Gdk::GLContext>& > GLArea::signal_render()
{
  return Glib::SignalProxy< bool,const Glib::RefPtr<Gdk::GLContext>& >(this, &GLArea_signal_render_info);
}


Glib::SignalProxy< void,int,int > GLArea::signal_resize()
{
  return Glib::SignalProxy< void,int,int >(this, &GLArea_signal_resize_info);
}


Glib::PropertyProxy< bool > GLArea::property_auto_render() 
{
  return Glib::PropertyProxy< bool >(this, "auto-render");
}

Glib::PropertyProxy_ReadOnly< bool > GLArea::property_auto_render() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "auto-render");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::GLContext> > GLArea::property_context() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::GLContext> >(this, "context");
}

Glib::PropertyProxy< bool > GLArea::property_has_alpha() 
{
  return Glib::PropertyProxy< bool >(this, "has-alpha");
}

Glib::PropertyProxy_ReadOnly< bool > GLArea::property_has_alpha() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-alpha");
}

Glib::PropertyProxy< bool > GLArea::property_has_depth_buffer() 
{
  return Glib::PropertyProxy< bool >(this, "has-depth-buffer");
}

Glib::PropertyProxy_ReadOnly< bool > GLArea::property_has_depth_buffer() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-depth-buffer");
}

Glib::PropertyProxy< bool > GLArea::property_has_stencil_buffer() 
{
  return Glib::PropertyProxy< bool >(this, "has-stencil-buffer");
}

Glib::PropertyProxy_ReadOnly< bool > GLArea::property_has_stencil_buffer() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-stencil-buffer");
}

Glib::PropertyProxy< bool > GLArea::property_use_es() 
{
  return Glib::PropertyProxy< bool >(this, "use-es");
}

Glib::PropertyProxy_ReadOnly< bool > GLArea::property_use_es() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-es");
}


Glib::RefPtr<Gdk::GLContext> Gtk::GLArea::on_create_context()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->create_context)
    return Glib::wrap((*base->create_context)(gobj()));

  using RType = Glib::RefPtr<Gdk::GLContext>;
  return RType();
}
bool Gtk::GLArea::on_render(const Glib::RefPtr<Gdk::GLContext>& context)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->render)
    return (*base->render)(gobj(),Glib::unwrap(context));

  using RType = bool;
  return RType();
}
void Gtk::GLArea::on_resize(int width, int height)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->resize)
    (*base->resize)(gobj(),width,height);
}


} // namespace Gtk


