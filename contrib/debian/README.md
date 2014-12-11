
Debian
====================
This directory contains files used to package cryptotargetd/cryptotarget-qt
for Debian-based Linux systems. If you compile cryptotargetd/cryptotarget-qt yourself, there are some useful files here.

## cryptotarget: URI support ##


cryptotarget-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cryptotarget-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cryptotarget-qt binary to `/usr/bin`
and the `../../share/pixmaps/cryptotarget128.png` to `/usr/share/pixmaps`

cryptotarget-qt.protocol (KDE)

