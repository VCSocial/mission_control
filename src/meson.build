mission_control_sources = [
  'main.c',
  'mission_control-window.c',
]

mission_control_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

mission_control_sources += gnome.compile_resources('mission_control-resources',
  'mission_control.gresource.xml',
  c_name: 'mission_control'
)

executable('mission_control', mission_control_sources,
  dependencies: mission_control_deps,
  install: true,
)
