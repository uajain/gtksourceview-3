/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8; coding: utf-8 -*-
 * gtksourcegutterrendererlines.h
 * This file is part of GtkSourceView
 *
 * Copyright (C) 2010 - Jesse van den Kieboom
 *
 * GtkSourceView is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * GtkSourceView is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef GTK_SOURCE_GUTTER_RENDERER_LINES_H
#define GTK_SOURCE_GUTTER_RENDERER_LINES_H

#include <gtk/gtk.h>
#include "gtksourcetypes.h"
#include "gtksourcetypes-private.h"
#include "gtksourcegutterrenderertext.h"

G_BEGIN_DECLS

#define GTK_SOURCE_TYPE_GUTTER_RENDERER_LINES		(gtk_source_gutter_renderer_lines_get_type ())
#define GTK_SOURCE_GUTTER_RENDERER_LINES(obj)		(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_SOURCE_TYPE_GUTTER_RENDERER_LINES, GtkSourceGutterRendererLines))
#define GTK_SOURCE_GUTTER_RENDERER_LINES_CONST(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_SOURCE_TYPE_GUTTER_RENDERER_LINES, GtkSourceGutterRendererLines const))
#define GTK_SOURCE_GUTTER_RENDERER_LINES_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_SOURCE_TYPE_GUTTER_RENDERER_LINES, GtkSourceGutterRendererLinesClass))
#define GTK_SOURCE_IS_GUTTER_RENDERER_LINES(obj)		(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_SOURCE_TYPE_GUTTER_RENDERER_LINES))
#define GTK_SOURCE_IS_GUTTER_RENDERER_LINES_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_SOURCE_TYPE_GUTTER_RENDERER_LINES))
#define GTK_SOURCE_GUTTER_RENDERER_LINES_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_SOURCE_TYPE_GUTTER_RENDERER_LINES, GtkSourceGutterRendererLinesClass))

typedef struct _GtkSourceGutterRendererLinesClass	GtkSourceGutterRendererLinesClass;
typedef struct _GtkSourceGutterRendererLinesPrivate	GtkSourceGutterRendererLinesPrivate;

struct _GtkSourceGutterRendererLines
{
	/*< private >*/
	GtkSourceGutterRendererText parent;

	GtkSourceGutterRendererLinesPrivate *priv;

	/*< public >*/
};

struct _GtkSourceGutterRendererLinesClass
{
	/*< private >*/
	GtkSourceGutterRendererTextClass parent_class;

	/*< public >*/
};

G_GNUC_INTERNAL
GType gtk_source_gutter_renderer_lines_get_type (void) G_GNUC_CONST;

G_GNUC_INTERNAL
GtkSourceGutterRenderer *gtk_source_gutter_renderer_lines_new (void);

G_END_DECLS

#endif /* GTK_SOURCE_GUTTER_RENDERER_LINES_H */
