#!/bin/sh

# config
web="$BROWSER"
edit="$TERMINAL -e $EDITOR"
uri="$1"
uri_lower="$(printf "%s" "$uri" | tr '[:upper:]' '[:lower:]')"

open() {
    $1 "$uri"
}

notify-send \
"Abrindo no firefox" \
"$uri"
open "$web"
