#!/bin/bash

# Check if the exercise number argument is provided
if [ $# -lt 2 ]; then
    echo "Usage: $0 <exercise_number> <parent_folder>"
    exit 1
fi

# Exercise number argument provided
exercise_number="$1"

# Parent folder argument provided
parent_folder="$2"

# Get the current year
current_year=$(date +"%y")

# Get the abbreviated, capitalized month name
current_month=$(date +"%b" | tr '[:lower:]' '[:upper:]')

# Get today's date in DD.MM.YY format
current_date=$(date +"%d.%m.%y")

# Define the directory name based on the year, month, and date
year_month_date_directory="Matrices/Homework/$current_year/$current_month/$current_date"

# Check if the directory exists, create it if needed with sudo
if [ ! -d "$year_month_date_directory" ]; then
    echo "Creating directory: $year_month_date_directory"
    sudo mkdir -p "$year_month_date_directory"
fi

# Define the exercise directory based on the exercise number
exercise_directory="$year_month_date_directory/Ex$exercise_number"

# Check if the exercise directory exists, create it if needed with sudo
if [ ! -d "$exercise_directory" ]; then
    echo "Creating exercise directory: $exercise_directory"
    sudo mkdir -p "$exercise_directory"
fi

# Clone the template.cpp file from the GitHub repository
template_url="https://raw.githubusercontent.com/EdyLaScoala/Lectii/main/Matrices/template.cpp"
template_file="ex${exercise_number}.cpp"

# Use sudo with curl to download and save the template file
sudo curl -o "$exercise_directory/$template_file" "$template_url"

echo "Exercise template cloned to: $exercise_directory/$template_file"
