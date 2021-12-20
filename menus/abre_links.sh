#!/bin/sh

# config
web="qutebrowser"
edit="$TERMINAL -e $EDITOR"
uri="$1"
uri_lower="$(printf "%s" "$uri" | tr '[:upper:]' '[:lower:]')"

open() {
    $1 "$uri"
}

notify-send \
"Abrindo no qutebrowser" \
"$uri"
open "$web"
