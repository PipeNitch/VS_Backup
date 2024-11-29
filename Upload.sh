#!/bin/bash
cd /home/pipenooyimsai/Documents/O_com

git add .

commit_message="Update: $(date '+%Y-%m-%d %H:%M:%S')"

git commit -m "$commit_message"

git push -u origin main
