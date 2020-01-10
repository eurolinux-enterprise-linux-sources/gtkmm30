// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/rgba.h>
#include <gdkmm/private/rgba_p.h>


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

#include <gdk/gdk.h>

namespace Gdk
{

 const double MULTIPLIER = 65535.0;

RGBA::RGBA()
{
  GdkRGBA tmp = { 0, 0, 0, 0, };
  gobject_ = gdk_rgba_copy(&tmp);
}

RGBA::RGBA(const Glib::ustring& value)
{
  GdkRGBA tmp = { 0, 0, 0, 0, };
  gobject_ = gdk_rgba_copy(&tmp);

  set(value);
}

void RGBA::set_grey_u(gushort value, gushort alpha)
{
  gobject_->red = gobject_->green = gobject_->blue = (value / MULTIPLIER);
  gobject_->alpha = alpha / MULTIPLIER;
}

void RGBA::set_grey(double g, double alpha)
{
  gobject_->red = gobject_->green = gobject_->blue = g;
  gobject_->alpha = alpha;
}

void RGBA::set_rgba_u(gushort red_, gushort green_, gushort blue_, gushort alpha_)
{
  gobject_->red = red_ / MULTIPLIER;
  gobject_->green = green_/ MULTIPLIER;
  gobject_->blue = blue_ / MULTIPLIER;
  gobject_->alpha = alpha_/ MULTIPLIER;
}

void RGBA::set_rgba(double red_, double green_, double blue_, double alpha_)
{
  gobject_->red = red_;
  gobject_->green = green_;
  gobject_->blue = blue_;
  gobject_->alpha = alpha_;
}

void RGBA::set_hsv(double h, double s, double v)
{
  // The HSV color space is described in a long Wikipedia article,
  // http://en.wikipedia.org/wiki/HSV_color_space
  // The following conversion from HSV to RGB is equivalent to the conversion
  // shown in Wikipedia. The following relations hold between the Wikipedia
  // equations (uppercase letters) and the equations used here (lowercase letters):
  //
  // h = H' (after division of h by 60 degrees)
  // p = V - C = m (m from Wikipedia), thus v = C + m
  // When i is odd:  X + m = V - C * abs(H' mod 2 - 1)
  //                       = v - vs * (h - i) = q
  // When i is even: X + m = V - C * abs(H' mod 2 - 1)
  //                       = v - vs * (1 - (h - i)) = t

  h /= 60.0;
  int i = (int)h;
  double p = v * (1 - s);
  double q = v * (1 - s * (h - i));
  double t = v * (1 - s * (1 - h + i));

  switch(i)
  {
    case 0:
      set_rgba(v, t, p);
      break;
    case 1:
      set_rgba(q, v, p);
      break;
    case 2:
      set_rgba(p, v, t);
      break;
    case 3:
      set_rgba(p, q, v);
      break;
    case 4:
      set_rgba(t, p, v);
      break;
    default:
      set_rgba(v, p, q);
  }
}

void RGBA::set_hsl(double h, double s, double l)
{
  // The HSL color space is described in a long Wikipedia article,
  // http://en.wikipedia.org/wiki/HSV_color_space
  // The following conversion from HSL to RGB is equivalent to the conversion
  // shown in Wikipedia. The following relations hold between the Wikipedia
  // equations (uppercase letters) and the equations used here (lowercase letters):
  //
  // 6*h = H' (after division of h by 360 degrees)
  // t2 = C + m (m from Wikipedia)
  // t1 = m
  //
  // The conversion algorithm used here is shown at
  // http://www.w3.org/TR/css3-color/#hsl-color

  if(s == 0.0)
    set_grey(l);
  else
  {
    double t2 = (l < 0.5) ? l * (1.0 + s) : l + s - l * s;
    double t1 = 2*l-t2;
    h /= 360.0;

    double tr = h + 1.0/3.0;
    double tg = h;
    double tb = h - 1.0/3.0;
    if (tr > 1.0) tr -= 1.0;
    if (tb < 0.0) tb += 1.0;

    double r = t1;
    double g = t1;
    double b = t1;

    if (tr < 1.0/6.0)
      r = t1 +(t2-t1) * 6 * tr;
    else if (tr < 1.0/2.0)
      r = t2;
    else if (tr < 2.0/3.0)
      r = t1+(t2-t1)*(2.0/3.0 - tr) * 6.0;

    if (tg < 1.0/6.0)
      g = t1 + (t2 - t1) * 6 * tg;
    else if (tg < 1.0/2.0)
      g = t2;
    else if (tg < 2.0/3.0)
      g = t1+(t2-t1)*(2.0/3.0 - tg) * 6.0;

    if (tb < 1.0/6.0)
      b = t1 +(t2-t1) * 6 * tb;
    else if (tb < 1.0/2.0)
      b = t2;
    else if (tb < 2.0/3.0)
      b = t1+(t2-t1)*(2.0/3.0 - tb) * 6.0;

    set_rgba(r, g, b);
  }
}

gushort RGBA::get_red_u() const
{
  return gobject_->red *  MULTIPLIER;
}

gushort RGBA::get_green_u() const
{
  return gobject_->green *  MULTIPLIER;

}

gushort RGBA::get_blue_u() const
{
  return gobject_->blue *  MULTIPLIER;
}

gushort RGBA::get_alpha_u() const
{
  return gobject_->alpha *  MULTIPLIER;
}

void RGBA::set_red_u(gushort value)
{
  gobject_->red = value / MULTIPLIER;
}

void RGBA::set_green_u(gushort value)
{
  gobject_->green = value / MULTIPLIER;
}

void RGBA::set_blue_u(gushort value)
{
  gobject_->blue = value / MULTIPLIER;
}

void RGBA::set_alpha_u(gushort value)
{
  gobject_->alpha = value / MULTIPLIER;
}

void RGBA::set_red(double value)
{
  gobject_->red = value;
}

void RGBA::set_green(double value)
{
  gobject_->green = value;
}

void RGBA::set_blue(double value)
{
  gobject_->blue = value;
}

void RGBA::set_alpha(double value)
{
  gobject_->alpha = value;
}


double RGBA::get_red() const
{
  return gobject_->red;
}

double RGBA::get_green() const
{
  return gobject_->green;
}

double RGBA::get_blue() const
{
  return gobject_->blue;
}

double RGBA::get_alpha() const
{
  return gobject_->alpha;
}

} //namespace Gdk

namespace
{
} // anonymous namespace


namespace Glib
{

Gdk::RGBA wrap(GdkRGBA* object, bool take_copy)
{
  return Gdk::RGBA(object, take_copy);
}

} // namespace Glib


namespace Gdk
{


// static
GType RGBA::get_type()
{
  return gdk_rgba_get_type();
}


RGBA::RGBA(const RGBA& other)
:
  gobject_ ((other.gobject_) ? gdk_rgba_copy(other.gobject_) : nullptr)
{}

RGBA::RGBA(RGBA&& other) noexcept
:
  gobject_(other.gobject_)
{
  other.gobject_ = nullptr;
}

RGBA& RGBA::operator=(RGBA&& other) noexcept
{
  RGBA temp (other);
  swap(temp);
  return *this;
}

RGBA::RGBA(GdkRGBA* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gdk_rgba_copy(gobject) : gobject)
{}

RGBA& RGBA::operator=(const RGBA& other)
{
  RGBA temp (other);
  swap(temp);
  return *this;
}

RGBA::~RGBA() noexcept
{
  if(gobject_)
    gdk_rgba_free(gobject_);
}

void RGBA::swap(RGBA& other) noexcept
{
  std::swap(gobject_, other.gobject_);
}

GdkRGBA* RGBA::gobj_copy() const
{
  return gdk_rgba_copy(gobject_);
}


bool RGBA::set(const Glib::ustring& spec)
{
  return gdk_rgba_parse(gobj(), spec.c_str());
}

Glib::ustring RGBA::to_string() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gdk_rgba_to_string(const_cast<GdkRGBA*>(gobj())));
}


bool operator==(const RGBA& lhs, const RGBA& rhs)
{
  return (gdk_rgba_equal(lhs.gobj(), rhs.gobj()) != 0);
}

bool operator!=(const RGBA& lhs, const RGBA& rhs)
{
  return (gdk_rgba_equal(lhs.gobj(), rhs.gobj()) == 0);
}


} // namespace Gdk


