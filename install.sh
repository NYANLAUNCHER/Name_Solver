#!/bin/sh
# install ns on your system

binDir="/usr/bin/"
libDir="/usr/lib/"
docDir="/usr/share/doc/"

install () {
    echo "This is the install function."
    echo "This will install the last build of ns."
    echo "to update ns just compile using make"
}

# uninstall ns using ./install.sh, how ironic
uninstall () {
    echo "This is the uninstall function."
}

help () {
    echo "This is the help function."
}

case $1 in
    ""|"install") install ;;
    "uninstall") uninstall ;;
    "help") help ;;
    *) echo -e "That is an invalid command.\nTry: \"./install.sh help\"" ;;
esac
