#!/bin/bash

# http://stackoverflow.com/questions/4210042/exclude-directory-from-find-command
# https://www.garron.me/en/go2linux/how-use-find-boolean-operators-and-or-not.html
# http://astyle.sourceforge.net/astyle.html

for line in $(find . -not \( -path ./build -prune \) -iname '*.cpp' -or -iname '*.h'); do
    astyle --suffix=none --formatted --style=linux --lineend=linux --indent=tab --indent-classes --indent-switches --indent-col1-comments --pad-oper --pad-header --unpad-paren --delete-empty-lines --align-pointer=type --align-reference=type $line
done
