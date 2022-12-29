project('ProtocolTest', 'vala', 'c')			
add_project_arguments(['--vapidir', join_paths(meson.source_root(), 'vapi')],
                      language: 'vala')
glib_dep = dependency('glib-2.0')
gobject_dep = dependency('gobject-2.0')
gtk_dep = dependency('gtk+-3.0')
gee_dep = dependency('gee-0.8')
depends = [glib_dep, gobject_dep, gtk_dep, gee_dep]
subdir('src')
subdir('test')
