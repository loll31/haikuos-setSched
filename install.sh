#!/bin/bash
# SetSched install script
#  make binary 
#  copy to unpackaged bin dir
#  add binary in startup script with eco mode option

CURDIR="$(dirname $0)"
DEST=/boot/home/config/non-packaged/bin
TOOL=$(find "$CURDIR" -type f -name setSched 2>/dev/null)

# building
if [ -z "$TOOL" ]; then
        cd "$CURDIR"
        echo "Building setSched..."
        make || (echo "Error: make fails (error $?)" ; exit 1)
        TOOL=$(find "$CURDIR" -type f -name setSched 2>/dev/null)
fi

# installing
if [ ! -f "$DEST/setSched" ] ; then
        echo "Copying setSched in $DEST..."
        cp -p "$TOOL" "$DEST"
else
        echo "setSched already installed"
fi

# adding to bootscript
if [ -z "$(grep setSched $HOME/config/settings/boot/UserBootscript 2>/dev/null)" ] ; then
        echo "Adding setSched in boot script..."
        cat <<EOF >>$HOME/config/settings/boot/UserBootscript 

# set economic mode
$DEST/setSched -e

EOF
else
        echo "setSched already start in boot script"
fi
