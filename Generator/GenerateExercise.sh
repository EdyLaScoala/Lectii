#!/bin/bash

# Get the current year
current_year=$(date +"%y")

# Get the abbreviated, capitalized month name
current_month=$(date +"%b" | tr '[:lower:]' '[:upper:]')

# Get today's date in DD.MM.YY format
current_date=$(date +"%d.%m.%y")

# Define the directory name based on the year, month, and date
year_month_date_directory="Generator/$current_year/$current_month/$current_date"

# Check if the directory exists
if [ ! -d "$year_month_date_directory" ]; then
    echo "Creating directory: $year_month_date_directory"
    mkdir -p "$year_month_date_directory"
fi

# Rest of your script here...
# You can add additional commands to generate exercises or perform other tasks in the year, month, and date-specific directory.
