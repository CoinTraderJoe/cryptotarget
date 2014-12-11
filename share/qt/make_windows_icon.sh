#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/cryptotarget.png
ICON_DST=../../src/qt/res/icons/cryptotarget.ico
convert ${ICON_SRC} -resize 16x16 cryptotarget-16.png
convert ${ICON_SRC} -resize 32x32 cryptotarget-32.png
convert ${ICON_SRC} -resize 48x48 cryptotarget-48.png
convert cryptotarget-16.png cryptotarget-32.png cryptotarget-48.png ${ICON_DST}

