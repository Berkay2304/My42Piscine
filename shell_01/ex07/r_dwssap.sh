#!/bin/bash
cat /etc/passwd | awk -F: 'NR % 2 == 0 {print $1}' | awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'NR >= FT_LINE1 && NR <= FT_LINE2 {print $0}' | sort -r | rev | tr '\n' ', ' | tr -d '\n' | sed 's/,$/./g'
