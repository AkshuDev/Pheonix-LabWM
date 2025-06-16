project('pheonix-labwm', 'c')
srcs = files(glob('src/*.c'))
incs = include_directories('src/include')
executable('Pheonix-LabWM', srcs, 
	include_directories: incs, 
	dependencies: [
		dependency('wayland-client', required: true),
		dependency('wlroots', required: true),
		dependency('xkbcommon', required: true),
		dependency('libconfig', required: false)
	]
)
