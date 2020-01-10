// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/timecoord.h>
#include <gdkmm/private/timecoord_p.h>


/* Copyright (C) 2010 The gtkmm Development Team
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

TimeCoord::TimeCoord(GdkTimeCoord* castitem)
: gobject_(castitem)
{}

TimeCoord::TimeCoord(TimeCoord&& other) noexcept
: gobject_(std::move(other.gobject_))
{
}

TimeCoord& TimeCoord::operator=(TimeCoord&& other) noexcept
{
  gobject_ = std::move(other.gobject_);

  other.gobject_ = nullptr;

  return *this;
}

double TimeCoord::get_value_at_axis(guint index) const
{
  if (gobject_)
  {
    return gobject_->axes[index];
  }
  return 0;
}

} // namespace Gdk

namespace
{
} // anonymous namespace


namespace Gdk
{


guint32 TimeCoord::get_time() const
{
  return gobj()->time;
}


} // namespace Gdk


