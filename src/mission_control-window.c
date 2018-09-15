/* mission_control-window.c
 *
 * Copyright 2018 VCSocial
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mission_control-config.h"
#include "mission_control-window.h"

struct _Mission_controlWindow
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkLabel            *label;
};

G_DEFINE_TYPE (Mission_controlWindow, mission_control_window, GTK_TYPE_APPLICATION_WINDOW)

static void
mission_control_window_class_init (Mission_controlWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/org/gnome/Mission_Control/mission_control-window.ui");
  gtk_widget_class_bind_template_child (widget_class, Mission_controlWindow, header_bar);
  gtk_widget_class_bind_template_child (widget_class, Mission_controlWindow, label);
}

static void
mission_control_window_init (Mission_controlWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
