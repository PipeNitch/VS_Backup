#!/bin/bash

start=$(date +%s%N)

# Runs your command
"$@"  # Execute the command passed as arguments

end=$(date +%s%N)

# Calculate the elapsed time in seconds and nanoseconds
elapsed=$((end - start))

# Convert elapsed time to seconds and nanoseconds
elapsed_sec=$((elapsed / 1000000000))
elapsed_nsec=$((elapsed % 1000000000))

# Output the execution time
echo
echo "Execution time: ${elapsed_sec}.${elapsed_nsec:0:3}s"
